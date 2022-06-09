cmake_minimum_required( VERSION 3.10 )

# Set the name, information, and language for the project
project( "Hash"
	DESCRIPTION "A module for Garry's Mod that provides common hash functions."
	VERSION "1.0.0"
	HOMEPAGE_URL "https://github.com/viral32111/Hash"
	LANGUAGES CXX
)

# The only build configuration is release (optimised, no debug info, etc.)
set( CMAKE_BUILD_TYPE "Release" )

# Use C++11
set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

# Add the Garry's Mod module base header files
add_subdirectory( "gmod-module-base" )

add_library( "hash" SHARED )

target_sources( "hash" PRIVATE "source/main.cpp" )

target_link_libraries( "hash" "gmod-module-base" )

# The name of the module when built
set_gmod_suffix_prefix( "hash" )
