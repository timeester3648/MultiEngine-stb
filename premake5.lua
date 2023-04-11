include "../../premake/common_premake_defines.lua"

project "stb"
	kind "StaticLib"
	language "C++"
	cppdialect "C++latest"
	cdialect "C17"
	targetname "%{prj.name}"
	inlining "Auto"

	files {
		"./*.h",
		"./*.cpp"
	}

	filter "toolset:msc"
		defines { "__STDC_LIB_EXT1__" }