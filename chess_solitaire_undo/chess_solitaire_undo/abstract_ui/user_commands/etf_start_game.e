note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_GAME
inherit
	ETF_START_GAME_INTERFACE
create
	make
feature -- command
	start_game
    	do
    		if model.started = true and model.won /= true and model.lost /= true  then
				model.set_error ("Error: Game already started")
			elseif model.started = true and model.won = true and model.lost /= true then
				model.set_error ("Error: Game already over")
			elseif model.started = true and model.won /= true and model.lost = true then
				model.set_error ("Error: Game already over")
    		else
				model.start_game
    		end
			-- perform some update on the model state

			etf_cmd_container.on_change.notify ([Current])
    	end

end
