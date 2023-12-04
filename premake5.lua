-- premake5.lua
include "preprocess.lua"

workspace "Script"
    configurations {"Debug", "Release"}
    platforms {"Win64", "Linux"}

project "Script"
    kind "SharedLib"
    flags {"NoImportLib"}
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"
    toolset "clang"

    libdirs {"deps"}
    includedirs {"headers", "deps/include"}
    files {"src/**.cpp"}

    filter "configurations:Debug"
    
    defines {"DEBUG"}
        symbols "On"

    filter "configurations:Release"
        defines {"NDEBUG"}
        optimize "On"