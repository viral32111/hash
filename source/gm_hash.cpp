#include "GarrysMod/Lua/Interface.h"
#include <stdio.h>

using namespace GarrysMod::Lua;

LUA_FUNCTION(SHA256) { // SHA256 is the name of the function
    if (LUA->IsType(1, Type::STRING)) { // If parameter one is a string
        LUA->PushString(LUA->GetString(1)); // Return what they passed
        return 1; // End
	} else {
		LUA->PushNil(); // Return nil if no string parameter is provided
		return 1; // End
	}
}

// Called when module is opened
GMOD_MODULE_OPEN() {
    LUA->PushSpecial(SPECIAL_GLOB); // Push global table
    LUA->PushString("SHA256"); // Push Name
    LUA->PushCFunction(SHA256); // Push function
    LUA->SetTable(-3); // Set the table 

    return 0;
}

// Called when module is closed
GMOD_MODULE_CLOSE() {
    return 0;
}