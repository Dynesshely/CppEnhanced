
set(TEST_SOURCES
    test_datetime.cpp
)

add_executable(CppEnhancedTest ${TEST_SOURCES})

target_link_libraries(CppEnhancedTest PRIVATE CppEnhanced)

add_test(test_datetime CppEnhancedTest COMMAND CppEnhancedTest)
