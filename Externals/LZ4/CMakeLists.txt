add_subdirectory(lz4/build/cmake)

target_include_directories(lz4_static PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

add_library(LZ4::LZ4 ALIAS lz4_static)