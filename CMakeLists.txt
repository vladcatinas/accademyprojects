cmake_minimum_required(VERSION 3.16.3)
option(BUILD_TESTS "Turn on build for tests of Accademy Projects" OFF)


project(accademyprojects)

file(GLOB SRC_FILES
    "src/*.cpp"
)

set(INC_FILES_DIR
    include/
)

if (BUILD_TESTS)
    add_subdirectory(test)
endif

include_directories(
    ${INC_FILES_DIR}
)

add_executable(accademyprojects
    ${SRC_FILES}
)