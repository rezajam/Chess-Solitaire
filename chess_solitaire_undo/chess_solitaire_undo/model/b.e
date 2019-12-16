note
	description: "Summary description for {B}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	B

inherit

	CHESS
--		redefine
--				----			make,
--			id
----			out
--			----			moves
--		end

create
	make

--feature -- attributes

--	K_x: INTEGER_32

--	K_y: INTEGER_32

--	page: ARRAY2 [CHESS]

--feature -- attribute

--	id: STRING

feature -- constructor

	make
		do
			id := "B"
--			k_x := row
--			k_y := col

				-- for moves. later put it in the PAGE class
--			create page.make_filled (create {DOT}.make (0, 0), 4, 4)
		end

feature -- queries

	moves(k_x:INTEGER_32; k_y :INTEGER_32): ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		local
			AT: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		do
--			page.put (Create {N}.make (k_x, k_y), k_x, k_y)
			create AT.make_empty

				-- all the "possible" moves
			across 1|..| 3 is j
			loop
				AT.force ([k_x + j, k_y + j], AT.count + 1)
				AT.force ([k_x - j, k_y - j], AT.count + 1)
				AT.force ([k_x + j, k_y - j], AT.count + 1)
				AT.force ([k_x - j, k_y + j], AT.count + 1)
			end


				--		Current.possible_moves (AT)
			Result := AT

				--			across
				--				AT is curr
				--			loop
				--				if ((curr.integer_32_item (1) >= 1 and curr.integer_32_item (1) <= 4) and (curr.integer_32_item (2) >= 1 and curr.integer_32_item (2) <= 4)) then
				--					page.put (create {plus}.make (0, 0), curr.integer_32_item (1), curr.integer_32_item (2))
				--				end
				--			end
		end

		--	possible_moves(ATT: ARRAY[TUPLE[INTEGER, INTEGER]])
		--	do
		--		across ATT is cur
		--		loop
		--			if
		--		   (	(cur[1] >= 0 and cur[2] <=4) and (cur[1] >= 0 and cur[2] <= 4) )
		--			then
		--				page.put (create {plus}.make(0,0), cur[1], cur[2])
		--			end

		--		end

		--	end
		--feature
		--	page_make(row: INTEGER_32 ; col: INTEGER_32) : ARRAY2[CHESS]
		--	do
		--	create Result.make_empty
		--	Result.put (Create {N}.make (k_x, k_y), k_x, k_y)

		--	end

	blocked_out (r, c, d_r: INTEGER_32; d_c: INTEGER_32): ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		local
			btwn: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
			y_path: INTEGER
			x_path: INTEGER
		do
			create Result.make_empty
			create btwn.make_empty
			from
				y_path := d_r
				x_path := d_c
			until
				y_path = 0 and x_path = 0
			loop
				if y_path > 0 and x_path > 0 then
					y_path := y_path - 1
					x_path := x_path - 1

				elseif y_path > 0 and x_path < 0 then
					y_path := y_path - 1
					x_path := x_path + 1
--					btwn.force ([r+x_path,c+y_path], btwn.count + 1)

				elseif y_path < 0 and x_path < 0 then
					y_path := y_path + 1
					x_path := x_path + 1
--					btwn.force ([r+x_path,c+y_path], btwn.count + 1)

				elseif y_path < 0 and x_path > 0 then
					y_path := y_path + 1
					x_path := x_path - 1
--					btwn.force ([r+x_path,c+y_path], btwn.count + 1)
				end
				if y_path /= 0 or x_path /= 0 then
					btwn.force ([r+y_path,c+x_path], btwn.count + 1)
				end

			end
--			if d_r > 0 and d_c > 0 then
--				across
--					1 |..| d_r is r_cur
--				loop
--					btwn.force ([r - r_cur, c], btwn.count + 1)
--					y_path := r - r_cur
--				end
--			elseif d_r > 0 then
--				across
--					1 |..| d_r.abs is r_cur
--				loop
--					btwn.force ([r + r_cur, c], btwn.count + 1)
--					y_path := r + r_cur
--				end
--			end
--			if d_c < 0 then
--				across
--					1 |..| (d_c.abs - 1) is c_cur
--				loop
--					btwn.force ([y_path, c - c_cur], btwn.count + 1)
--				end
--			elseif d_c > 0 then
--				across
--					1 |..| (d_c.abs - 1) is c_cur
--				loop
--					btwn.force ([y_path, c + c_cur], btwn.count + 1)
--				end
--			end
			Result := btwn
		end

--feature

--	out: STRING
--		local
--			four: INTEGER
--		do
--			create Result.make_from_string ("")
--			four := 0
--			across
--				page is cursor
--			loop
--				if (four \\ 4 = 0) then
--					Result.append ("%N")
--				end
--				Result.append (cursor.id)
--				four := four + 1
--			end
--		end

end

