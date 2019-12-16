note
	description: "Summary description for {OBJ_SETUP_CHESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OBJ_SETUP_CHESS

inherit
	COMMAND

create
	make

--feature
--	make
--	do
--		setup_chess_actual
--	end

feature -- attrs

	sav_row : INTEGER
	sav_col : INTEGER
	sav_c : INTEGER

feature
	make(c: INTEGER_32; row: INTEGER_32; col: INTEGER_32)
	local
--		model_acc : ETF_MODEL_ACCESS
	do
--		model := model_acc.m
		sav_row := row
		sav_col := col
		sav_c := c

--		if (c = 1) then
--				model.board.put ((create {K}.make), row, col)
--			elseif (c = 2) then
--				model.board.put ((create {Q}.make), row, col)
--			elseif (c = 3) then
--				model.board.put ((create {N}.make), row, col)
--			elseif (c = 4) then
--				model.board.put ((create {B}.make), row, col)
--			elseif (c = 5) then
--				model.board.put ((create {R}.make), row, col)
--			elseif (c = 6) then
--				model.board.put ((create {P}.make), row, col)
--		end

--		model.i_setter (1)

	end

feature
	execute
	local
--		model_acc : ETF_MODEL_ACCESS
	do
--		model := model_acc.m
		if (sav_c = 1) then
					model.board.put ((create {K}.make), sav_row, sav_col )
				elseif (sav_c = 2) then
					model.board.put ((create {Q}.make), sav_row, sav_col )
				elseif (sav_c = 3) then
					model.board.put ((create {N}.make), sav_row, sav_col )
				elseif (sav_c = 4) then
					model.board.put ((create {B}.make), sav_row, sav_col )
				elseif (sav_c = 5) then
					model.board.put ((create {R}.make), sav_row, sav_col )
				elseif (sav_c = 6) then
					model.board.put ((create {P}.make), sav_row, sav_col )
		end

		model.i_setter (1)

	end

	undo
	do
		model.board.put (create {DOT}.make, sav_row, sav_col)
		model.i_setter (-1)
	end

	redo
	do
		Current.execute

	end



end
