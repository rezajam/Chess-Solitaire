note
	description: "Summary description for {PLUS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLUS

inherit
	CHESS
--		redefine
----			make,
--			id
--		end

create
	make

--feature -- attribute

--	id: STRING

feature -- constructor
	make
	do
		id := "+"

	end

feature  -- queries
	moves(k_x:INTEGER_32; k_y :INTEGER_32): ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
	do
		create Result.make_empty

	end

	blocked_out(r,c,d_r: INTEGER_32; d_c: INTEGER_32) : ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
	do
		create Result.make_empty
	end

--feature
--	page_make(row: INTEGER_32 ; col: INTEGER_32) : ARRAY2[CHESS]
--	do
--		create Result.make_empty

--	end

end



