note
	description: "Summary description for {COMMAND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMMAND


feature -- Attributes
	model : ETF_MODEL
			local
			ma:ETF_MODEL_ACCESS
		attribute
			Result := ma.m
		end

feature
	undo deferred end
	redo deferred end
	execute deferred end


--feature -- command
--	make
--	deferred
--	end

end
