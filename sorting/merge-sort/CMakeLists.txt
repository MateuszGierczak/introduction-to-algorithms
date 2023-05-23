project(merge-sort)

add_executable(${PROJECT_NAME} ut/MergeSortTests.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include/)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        GTest::gtest
        GTest::gtest_main)