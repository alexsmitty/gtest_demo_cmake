file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

add_executable(${CMAKE_PROJECT_NAME}_run ./source/main.cpp)

add_library(${CMAKE_PROJECT_NAME}_lib STATIC ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME}_run PUBLIC ${CMAKE_PROJECT_NAME}_lib)
