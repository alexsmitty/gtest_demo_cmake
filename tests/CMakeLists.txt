set(TARGET_NAME ${CMAKE_PROJECT_NAME}_tests)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES true *.h *.cpp)

add_executable(${TARGET_NAME} ${TEST_SOURCES})

add_test(NAME ${TARGET_NAME} COMMAND ${TARGET_NAME})

target_link_libraries(${TARGET_NAME}
    PUBLIC
    ${CMAKE_PROJECT_NAME}_lib
    gtest gmock)
