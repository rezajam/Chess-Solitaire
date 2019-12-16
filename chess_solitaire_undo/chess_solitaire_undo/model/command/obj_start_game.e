note
	description: "Summary description for {OBJ_START_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	OBJ_START_GAME

inherit
	COMMAND

create
	make

feature
	make
	local
--		model_acc: ETF_MODEL_ACCESS
--		started : BOOLEAN
	do
--		model := model_acc.m


--		model.start_bool (TRUE)
--		model.is_win
--		model.is_lose

	end

feature
	execute
	do
		model.start_bool (TRUE)
		model.is_win
		model.is_lose

	end

	undo
	do
		model.start_bool (FALSE)
		model.won_bool (FALSE)
		model.lost_bool (FALSE)
--		model.is_win
--		model.is_lose
--		model.is_win
--		model.is_lose

	end

	redo
	do
		Current.execute
	end

end
