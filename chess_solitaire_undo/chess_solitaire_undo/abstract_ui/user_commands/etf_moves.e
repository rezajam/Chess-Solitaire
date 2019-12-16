note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVES
inherit
	ETF_MOVES_INTERFACE
create
	make
feature -- command
	moves(row: INTEGER_32 ; col: INTEGER_32)
    	do
			-- perform some update on the model state
--			model.default_update
			if model.started /= true and model.won /= true and model.lost /= true  then
				model.set_error ("Error: Game not yet started")
			elseif model.started = true and model.won = true and model.lost /= true then
				model.set_error ("Error: Game already over")
			elseif model.started = true and model.won /= true and model.lost = true then
				model.set_error ("Error: Game already over")
			elseif not model.is_valid (row, col) then
				model.set_error ("Error: ("+row.out+", "+col.out+") not a valid slot")
			elseif model.board.item (row, col).id ~ "." then
				model.set_error ("Error: Slot @ ("+row.out+", "+col.out+") not occupied")
			else

				model.moves(row,col)
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
