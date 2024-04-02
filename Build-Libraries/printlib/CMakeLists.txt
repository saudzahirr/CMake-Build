add_library(print print.cpp)
target_include_directories(
    print
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# PRIVATE
# PUBLIC
# INTERFACE
