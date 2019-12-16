note
	description: "Summary description for {OBJ_MNC}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OBJ_MNC

inherit
	COMMAND

create
	make

feature -- attrs

	sav_r1 : INTEGER
	sav_c1 : INTEGER
	sav_r2 : INTEGER
	sav_c2 : INTEGER
	chess1 : CHESS
	chess2 : CHESS

feature
	make(r1: INTEGER_32; c1: INTEGER_32; r2: INTEGER_32; c2: INTEGER_32)
	local
--		model_acc: ETF_MODEL_ACCESS

	do
--		model := model_acc.m
		sav_r1 := r1
		sav_r2 := r2
		sav_c1 := c1
		sav_c2 := c2
		chess1 := model.board.item (r1, c1)
		chess2 := model.board.item (r2, c2)

--		model.board [r2, c2] := model.board.item (r1, c1)
--		model.board.put (create {DOT}.make, r1, c1)
--		model.i_setter (-1)
--		model.is_win
--		model.is_lose

	end

feature
	execute
	do
		model.board [sav_r2, sav_c2] := model.board.item (sav_r1, sav_c1)
		model.board.put (create {DOT}.make, sav_r1, sav_c1)
		model.i_setter (-1)
		model.is_win
		model.is_lose

	end

	undo
	do
		model.board.item (sav_r1, sav_c1) := chess1
		model.board.item (sav_r2, sav_c2) := chess2
		model.i_setter (1)
		model.won_bool (FALSE)
		model.lost_bool (FALSE)

	end


	redo
	do
		Current.execute
	end



end
