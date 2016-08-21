if(WIN32)
	# Set the root search directory to current directory and make sure it's visible in the parent scope
	set(wxWidgets_ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}" PARENT_SCOPE)
	
	# Check if the directories that contain the includes and pre-built libraries exist.
	if(NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib/" OR NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/")
		message(FATAL_ERROR "Prebuilt wxWidgets libraries and includes should be placed in 3rdparty/wxWidgets/.")
	endif()
endif()