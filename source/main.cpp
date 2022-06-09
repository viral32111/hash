// The Garry's Mod module base
#include "GarrysMod/Lua/Interface.h"

/* Garry's Mod already has a few native hash functions:
 - https://wiki.facepunch.com/gmod/util.CRC
 - https://wiki.facepunch.com/gmod/util.MD5
 - https://wiki.facepunch.com/gmod/util.SHA1
 - https://wiki.facepunch.com/gmod/util.SHA256
*/

// Create a function for example purposes that adds two numbers together
LUA_FUNCTION( Example ) {

	// Fetch the two parameters, requiring them to be numbers
	double numberOne = LUA->CheckNumber( 1 );
	double numberTwo = LUA->CheckNumber( 2 );

	// Add the two numbers together, and put the result on the stack
	LUA->PushNumber( numberOne + numberTwo );

	// One value is returned
	return 1;

}

// Runs when the module is initialized...
GMOD_MODULE_OPEN() {

	// Push the example function onto the global table
	LUA->PushSpecial( GarrysMod::Lua::SPECIAL_GLOB );
		LUA->PushCFunction( Example );
		LUA->SetField( -2, "Example" ); // The function name?
	LUA->Pop();

	return 0;

}

// Runs when the module is shutdown...
GMOD_MODULE_CLOSE() {
	return 0;
}
