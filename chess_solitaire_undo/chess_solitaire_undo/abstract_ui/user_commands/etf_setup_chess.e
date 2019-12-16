note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SETUP_CHESS
inherit
	ETF_SETUP_CHESS_INTERFACE
create
	make
feature -- command
	setup_chess(c: INTEGER_32 ; row: INTEGER_32 ; col: INTEGER_32)
		require else
			setup_chess_precond(c, row, col)
    	do
    		if model.started = true and model.won /= true and model.lost /= true then
				model.set_error ("Error: Game already started")
			elseif model.started = true and model.won = true and model.lost /= true then
				model.set_error ("Error: Game already over")
			elseif model.started = true and model.won /= true and model.lost = true then
				model.set_error ("Error: Game already over")
    		elseif not model.is_valid (row, col) then
    			model.set_error("Error: ("+row.out+", "+col.out+") not a valid slot")
    		elseif (model.board.item (row, col)).id /~ "." then
    			model.set_error("Error: Slot @ ("+row.out+", "+col.out+") already occupied")
    		else
			-- perform some update on the model state
			model.setup_chess (c, row, col)
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
