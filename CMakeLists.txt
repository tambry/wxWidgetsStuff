cmake_minimum_required(VERSION 3.0)
project(wxWidgetsStuff)

# This sets the appropriate subsystem based on the configuration
macro(set_subsystem target)
	if(WIN32)
		# Build as a non-console application for release configuration
		set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS")
		
		# Override debug configuration to have the CONSOLE subsystem
		set_property(TARGET ${target} APPEND PROPERTY LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE")
	endif()
endmacro(set_subsystem)

# Output to the bin directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/bin")

# 3rdparty/external projects
add_subdirectory(3rdparty/wxWidgets)

# Define DEBUG for debugging configuration and disable CRT warnings
set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS $<$<CONFIG:Debug>:DEBUG>; _CRT_SECURE_NO_WARNINGS)

# Find wxWidgets
find_package(wxWidgets COMPONENTS core base REQUIRED)

# Make sure we build as unicode
add_definitions(-DUNICODE -D_UNICODE)

# The main project
add_subdirectory(BindInheritanceBug)
add_subdirectory(SizingSetRectBug)