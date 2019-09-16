#include <stdio.h>
#include <string>
using namespace std;

// Garry's Mod
#include "GarrysMod/Lua/Interface.h"
using namespace GarrysMod::Lua;

// Crypto++
using namespace CryptoPP;
#include "cryptopp/cryptlib.h"
#include "cryptopp/sha.h"
#include "cryptopp/filters.h"
#include "cryptopp/base64.h"

string hashString(string aString) {
	string digest;
	CryptoPP::SHA256 hash;

	CryptoPP::StringSource foo(aString, true, new CryptoPP::HashFilter(hash, new CryptoPP::Base64Encoder(new CryptoPP::StringSink(digest))));

	return digest;
}

LUA_FUNCTION(sha256Function) { // SHA256 is the name of the function
    if (LUA->IsType(1, Type::STRING)) { // If parameter one is a string
		//const char* shaHash = SHA256HashString(LUA->GetString(1)).c_str(); // Generate SHA256 Hash
        //LUA->PushString(shaHash); // Return that hash
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
    LUA->PushCFunction(sha256Function); // Push function
    LUA->SetTable(-3); // Set the table 

    return 0;
}

// Called when module is closed
GMOD_MODULE_CLOSE() {
    return 0;
}