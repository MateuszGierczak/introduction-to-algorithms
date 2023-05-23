project(insertion-sort)

add_executable(${PROJECT_NAME} ut/InsertionSortTests.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include/)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        GTest::gtest
        GTest::gtest_main)