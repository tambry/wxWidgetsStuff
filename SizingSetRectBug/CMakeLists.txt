# Source files
file(GLOB SOURCE "SizingSetRectBug.h" "SizingSetRectBug.cpp")

source_group("Source" FILES ${SOURCE})

include_directories(
.
${wxWidgets_INCLUDE_DIRS}
)

add_executable(SizingSetRectBug
${SOURCE}
)

set_subsystem(SizingSetRectBug)

target_link_libraries(
SizingSetRectBug
${wxWidgets_LIBRARIES}
)