note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit

	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
				--			create s.make_empty
			i := 0
			create board.make_filled (create {DOT}.make, 4, 4)
			create page.make_filled (create {DOT}.make, 4, 4)
			create error.make_from_string ("")
			started := FALSE
			won := false
			lost := false


			create ur_save.make_empty
			ur_count := 0


			-- commands
--			create command
		end

		--feature -- model attributes

		--	s: STRING

feature -- implemented

	board: ARRAY2 [CHESS]

	page: ARRAY2 [CHESS]

	move_call_out: BOOLEAN

		--	xx: INTEGER

		--	yy: INTEGER

	error: STRING

	started: BOOLEAN

	won: BOOLEAN

	lost: BOOLEAN

	i: INTEGER

	ur_save : ARRAY[COMMAND]

	ur_count : INTEGER

feature -- model operations

		--	default_update
		--			-- Perform update to the model state.
		--		do
		--			i := i + 1
		--		end

--	ur_reset -- everything but the ur stuff
--		do
--			i := 0
--			create board.make_filled (create {DOT}.make, 4, 4)
--			create page.make_filled (create {DOT}.make, 4, 4)
--			create error.make_from_string ("")
--			started := FALSE
--			won := false
--			lost := false

--		end

	start_bool(b : BOOLEAN)
		do
			started := b
		end
	won_bool(b : BOOLEAN)
		do
			won := b
		end
	lost_bool(b : BOOLEAN)
		do
			lost := b
		end

	i_setter(x : INTEGER)
		do
			i := i + x
		end


	undo
		require
			undo_avail: not (ur_save.count = 0 or ur_count = 0)
--		local
--			obj_undo: OBJ_UNDO
		do

			ur_count := ur_count - 1
--			create command.make
			if ur_count >= 0 then
				ur_save.at (ur_count + 1).undo
			end

		end

	redo
		require
			redo_avail: not (ur_save.count = 0 or ur_count = ur_save.count)
--		local
--			command : OBJ_REDO
		do
			ur_count := ur_count + 1
--			create command.make
			ur_save.at (ur_count).redo

		end

	set_error (ss: STRING)
		do
			error := ss
		end

	setup_chess (c: INTEGER_32; row: INTEGER_32; col: INTEGER_32)
		require
			valid_chess: c >= 1 and c <= 6
			game_not_started: started = false
				--new -top
			not_won: not (started = true and won = true and lost /= true)
			not_lost: not (started = true and won /= true and lost = true)
				--new -down
			is_valid: is_valid (row, col)
				--new -top
			is_occupied: not (board.item (row, col).id /~ ".")
			--new -down
		local
			obj_sc : OBJ_SETUP_CHESS
		do
--			if (c = 1) then
--				board.put ((create {K}.make), row, col)
--			elseif (c = 2) then
--				board.put ((create {Q}.make), row, col)
--			elseif (c = 3) then
--				board.put ((create {N}.make), row, col)
--			elseif (c = 4) then
--				board.put ((create {B}.make), row, col)
--			elseif (c = 5) then
--				board.put ((create {R}.make), row, col)
--			elseif (c = 6) then
--				board.put ((create {P}.make), row, col)
--			end

			create obj_sc.make(c, row, col)
			obj_sc.execute
			ur_count := ur_count + 1
			ur_save.force (obj_sc, ur_count)
			ur_save.remove_tail (ur_save.count - ur_count)
--			i := i + 1

		end

	moves (row: INTEGER_32; col: INTEGER_32)
		require
			game_has_started: started = true
				--			won: won /= true
				--new -top
			not_won: not (started = true and won = true and lost /= true)
			not_lost: not (started = true and won /= true and lost = true)
				--new -down
			is_valid: is_valid (row, col)
				--new -top
			not_occupied: not (board.item (row, col).id ~ ".")
			--new -down
		local
			moves_arr: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		do
			create page.make_filled (create {DOT}.make, 4, 4)
			moves_arr := (board.item (row, col)).moves (row, col)
			page [row, col] := board.item (row, col)
			move_call_out := TRUE
				--			xx := row
				--			yy := col
				-- verify
			across
				moves_arr is curr
			loop
				if ((curr.integer_32_item (1) >= 1 and curr.integer_32_item (1) <= 4) and (curr.integer_32_item (2) >= 1 and curr.integer_32_item (2) <= 4)) then
						--					page.put (create {plus}.make (0, 0), curr.integer_32_item (1), curr.integer_32_item (2))
					page [curr.integer_32_item (1), curr.integer_32_item (2)] := create {plus}.make
				end
			end
		end

	move_and_capture (r1: INTEGER_32; c1: INTEGER_32; r2: INTEGER_32; c2: INTEGER_32)
		require
			game_has_started: started = true
				--			won: won /= true
				--new -top
			not_won: not (started = true and won = true and lost /= true)
			not_lost: not (started = true and won /= true and lost = true)
				--new -down
			is_valid: is_valid (r1, c1) and is_valid (r2, c2)
				--new -top
			is_occupied: not (board.item (r1, c1).id ~ ".")
				--new -down
			on_the_path: across valid_ones (r1, c1) is tpls some r2 = tpls.integer_32_item (1) and c2 = tpls.integer_32_item (2) end
			block_exist: across (board.item (r1, c1)).blocked_out (r1, c1, (r2 - r1), (c2 - c1)) is curr all (board.item (curr.integer_32_item (1), curr.integer_32_item (2))).id ~ "." end
			--		local
			--			arr_path: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
			--			not_blocked: BOOLEAN
		local
			obj_mnc : OBJ_MNC
		do

--			board [r2, c2] := board.item (r1, c1)
--			board.put (create {DOT}.make, r1, c1)
			create obj_mnc.make(r1, c1, r2, c2)
			obj_mnc.execute
			ur_count := ur_count + 1
			ur_save.force (obj_mnc, ur_count)
			ur_save.remove_tail (ur_save.count - ur_count)
--			i := i - 1

--			is_win
--			is_lose
		end

	is_valid (row: INTEGER_32; col: INTEGER_32): BOOLEAN
		do
			Result := row <= 4 and row >= 1 and col <= 4 and col >= 1
		end

	valid_ones (row: INTEGER_32; col: INTEGER_32): ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		local
			moves_arr: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
			--			res_arr: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		do
			create Result.make_empty
			moves_arr := (board.item (row, col)).moves (row, col)
			across
				moves_arr is curr
			loop
				if ((curr.integer_32_item (1) >= 1 and curr.integer_32_item (1) <= 4) and (curr.integer_32_item (2) >= 1 and curr.integer_32_item (2) <= 4)) then
					Result.force ([curr.integer_32_item (1), curr.integer_32_item (2)], Result.count + 1)
				end
			end

				--			Result := res_arr

		end

		--	potential_moves(pm :  ARRAY [TUPLE [INTEGER_32, INTEGER_32]])
		--		do
		--
		--		end

	reset
			-- Reset model state.
		do
			make
		end

	start_game
		require
			game_already_started: started = false
				--new -top
			not_won: not (started = true and won = true and lost /= true)
			not_lost: not (started = true and won /= true and lost = true)
		local
			obj_sg : OBJ_START_GAME

			--new -down
		do
--			started := TRUE
--			is_win
--			is_lose
			create obj_sg.make
			obj_sg.execute
			ur_count := ur_count + 1
			ur_save.force (obj_sg, ur_count)
			ur_save.remove_tail (ur_save.count - ur_count)

		end

	reset_game
		require
			game_has_started: started = true
		do
			make
		end

	is_win
		do
			if i = 1 then
				won := true
				lost := false
					--				started := false
			end
		end

	is_lose
			--		local
			--		stuff_in : BOOLEAN
			--		n_block : BOOLEAN

		do
				--			stuff_in := false
				--			n_block := true
			lost := (across 1 |..| 4 is y all across 1 |..| 4 is x all if board.item (y, x).id ~ "N" then across valid_ones (y, x) is curr all across (board.item (y, x)).blocked_out (y, x, (curr.integer_32_item (1) - y), (curr.integer_32_item (2) - x)) is ccc some (board.item (ccc.integer_32_item (1), ccc.integer_32_item (2))).id /~ "." end end else across valid_ones (y, x) is curr all board.item (curr.integer_32_item (1), curr.integer_32_item (2)).id ~ "." end end end end)
			if won = true then
				lost := false
			end
				--				win := false

		end

feature -- queries

	out_board_style (p: ARRAY2 [CHESS]): STRING
		local
			four: INTEGER
		do
			create Result.make_from_string ("")

				--				create Result.make_from_string ("")

			four := 0
			across
				p is cursor
			loop
				if (four \\ 4 = 0) then
					Result.append ("%N  ")
				end
				Result.append (cursor.id)
				four := four + 1
			end
		end

	out: STRING
			--		local
			--			four: INTEGER
		do
			create Result.make_from_string ("")
			Result.append ("  # of chess pieces on board: " + i.out + "%N  ")
			if move_call_out = false then

					--				create Result.make_from_string ("")
				if error.is_empty and won = true then
					Result.append ("Game Over: You Win!")
				elseif error.is_empty and lost = true then
					Result.append ("Game Over: You Lose!")
				elseif error.is_empty and started = false then
					Result.append ("Game being Setup...")
				elseif error.is_empty and started = true then
					Result.append ("Game In Progress...")
				elseif not error.is_empty then
					Result.append (error)
				end
				Result.append (out_board_style (board))
			elseif (move_call_out = TRUE) then
					--								Result :=(board.item (xx, yy)).out
					--				Result.append ("# of chess pieces on board: " + i.out)
				Result.append ("Game In Progress...")
				Result.append (out_board_style (page))
				page.make_filled (create {DOT}.make, 4, 4)
				move_call_out := false
			end
			error.make_empty
		end

end
