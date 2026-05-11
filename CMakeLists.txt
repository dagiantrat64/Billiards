cmake_minimum_required(4.2)

set(CMAKE_C_STANDARD 17)

project(billiards C)

add_executable(billiards)

target_sources(billiards src/main.c)

target_link_libraries(main m)


