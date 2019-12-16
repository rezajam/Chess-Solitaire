note
	description: "Summary description for {CHESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	CHESS

feature -- attribute
	id :STRING

feature -- constructor
	make
	deferred


	end

feature -- queries
	moves(k_x:INTEGER; k_y :INTEGER) : ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
	deferred

	end

	blocked_out(r,c,d_r: INTEGER_32; d_c: INTEGER_32) : ARRAY [TUPLE [INTEGER_32, INTEGER_32]]
	deferred

	end


--feature
--	page_make(row: INTEGER_32 ; col: INTEGER_32) : ARRAY2[CHESS]
--	deferred


--	end



--create
--	make


--feature -- Attrs



--feature --Constructor



end
