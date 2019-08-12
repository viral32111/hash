workspace "gm_hash"
    configurations { "Debug", "Release" }
    location ( "projects" )

project "gm_hash"
    kind         "SharedLib"
    architecture "x86"
    language     "C++"
    includedirs  "include/"
    targetdir    "build"
    symbols      "On"

    if os.istarget( "windows" ) then targetsuffix "_win32" end

    configuration "Debug"
        optimize "Debug"

    configuration "Release"
        optimize "Speed"
        flags    "StaticRuntime"

    files
    {
        "source/**.*",
        "include/**.*"
    }