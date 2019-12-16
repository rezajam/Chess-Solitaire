note
	description: "Summary description for {K}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	K

inherit

	CHESS
--		redefine
------			make,
--			id
----			out
------			moves
--		end

create
	make

--feature -- attributes

--	K_x: INTEGER_32

--	K_y: INTEGER_32

--	page: ARRAY2 [CHESS]

--feature -- queries

--	id: STRING

feature -- constructor

	make
		do
			id := "K"
--			k_x := row
--			k_y := col

				-- for moves. later put it in the PAGE class
--			create page.make_filled (create {DOT}.make (0, 0), 4, 4)
		end



feature -- queries

	moves(k_x:INTEGER; k_y :INTEGER): ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		local
			AT: ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
		do
--			page.put (Create {K}.make (k_x, k_y), k_x, k_y)
			create AT.make_empty

				-- all the "possible" moves

			AT.force ([k_x + 1, k_y], AT.count + 1)
			AT.force ([k_x - 1, k_y], AT.count + 1)
			AT.force ([k_x, k_y + 1], AT.count + 1)
			AT.force ([k_x, k_y - 1], AT.count + 1)
			AT.force ([k_x + 1, k_y + 1], AT.count + 1)
			AT.force ([k_x - 1, k_y - 1], AT.count + 1)
			AT.force ([k_x + 1, k_y - 1], AT.count + 1)
			AT.force ([k_x - 1, k_y + 1], AT.count + 1)

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
--	Result.put (Create {K}.make (k_x, k_y), k_x, k_y)

--	end

	blocked_out(r,c,d_r: INTEGER_32; d_c: INTEGER_32) : ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
	do
		create Result.make_empty
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
