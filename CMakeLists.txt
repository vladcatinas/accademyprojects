cmake_minimum_required(VERSION 3.16.3)

project(accademyprojects)

file(GLOB SRC_FILES
    "src/*.cpp"
)
set(INC_FILES_DIR
    include/
)
include_directories(
    ${INC_FILES_DIR}
)
add_executable(accademyprojects
    ${SRC_FILES}
)