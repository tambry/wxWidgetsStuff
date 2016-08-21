# Source files
file(GLOB SOURCE "BindInheritanceBug.h" "BindInheritanceBug.cpp")

source_group("Source" FILES ${SOURCE})

include_directories(
.
${wxWidgets_INCLUDE_DIRS}
)

add_executable(BindInheritanceBug
${SOURCE}
)

set_subsystem(BindInheritanceBug)

target_link_libraries(
BindInheritanceBug
${wxWidgets_LIBRARIES}
)