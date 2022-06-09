# Hash

This is a module for Garry's Mod that provides a handful of common hashing and checksum functions to use on strings and files, for addon developers to use in Lua.

Even though this module is intended to be used serverside, downloads for both client and server environments are available.

Native string hash functions for MD5, SHA1 and SHA256 were added to the game in the [July 2021 Patch](https://store.steampowered.com/news/app/4000/view/2961661843692383385) ([#1077](https://github.com/Facepunch/garrysmod-requests/issues/1077)). The equivalent functions provided by this module are still available to maintain backwards compatibility, but discouraged for new development.

## Functions

The functions this module exposes to the Lua environment are documented below.

* TO-DO

## Building

Follow the steps documented below to build this module yourself.

1. Download the [Garry's Mod module base header files](https://github.com/Facepunch/gmod-module-base/tree/development/include) into the `gmod-module-base` directory at the root of the project.
2. Download and compile [Crypto++ library](https://cryptopp.com/), then add its header and library files to the linker.
3. Open the CMake project in your preferred IDE (e.g. Visual Studio), then build it.

## License

Copyright (C) 2019-2022 [viral32111](https://viral32111.com).

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program. If not, see https://www.gnu.org/licenses.
