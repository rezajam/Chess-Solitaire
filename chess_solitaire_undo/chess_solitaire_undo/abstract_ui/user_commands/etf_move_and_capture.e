note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE_AND_CAPTURE
inherit
	ETF_MOVE_AND_CAPTURE_INTERFACE
create
	make
feature -- command
	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)

    	do
			-- perform some update on the model state
--			model.default_update
			if model.started /= true and model.won /= true and model.lost /= true  then
				model.set_error ("Error: Game not yet started")
			elseif model.started = true and model.won = true and model.lost /= true then
				model.set_error ("Error: Game already over")
			elseif model.started = true and model.won /= true and model.lost = true then
				model.set_error ("Error: Game already over")


			elseif not (model.is_valid (r1, c1))  then
				model.set_error ("Error: ("+r1.out+", "+c1.out+") not a valid slot")
			elseif not (model.is_valid (r2, c2)) then
				model.set_error ("Error: ("+r2.out+", "+c2.out+") not a valid slot")
			elseif model.board.item (r1, c1).id ~ "." then
				model.set_error ("Error: Slot @ ("+r1.out+", "+c1.out+") not occupied")
			elseif model.board.item (r2, c2).id ~ "." then
				model.set_error ("Error: Slot @ ("+r2.out+", "+c2.out+") not occupied")
			elseif not across model.valid_ones (r1, c1) is tpls some r2 = tpls.integer_32_item (1) and c2 = tpls.integer_32_item (2) end then
				model.set_error ("Error: Invalid move of "+model.board.item (r1,c1).id+" from ("+r1.out+", "+c1.out+") to ("+r2.out+", "+c2.out+")")
			elseif not across (model.board.item (r1, c1)).blocked_out (r1, c1, (r2 - r1), (c2 - c1)) is curr all (model.board.item (curr.integer_32_item (1), curr.integer_32_item (2))).id ~ "." end then
				model.set_error ("Error: Block exists between ("+r1.out+", "+c1.out+") and ("+r2.out+", "+c2.out+")")
			else
			model.move_and_capture(r1, c1, r2, c2)
			end
--			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
