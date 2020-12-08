-- premake5.lua 

workspace "Hanio_Tower"
    architecture "x86_64"
    startproject "Cash_Flow"

    configurations
    {
        "Debug",
        "Release"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "Hanio_Tower"