add_executable(cw_05_tests "sequence_tests.cpp")
target_link_libraries(cw_05_tests cw_05_library)
add_test(NAME cw_05_tests COMMAND cw_05_tests -s)

ADD_SUBDIRECTORY(01_assign)
ADD_SUBDIRECTORY(02_assign)
ADD_SUBDIRECTORY(03_assign)
ADD_SUBDIRECTORY(04_assign)
ADD_SUBDIRECTORY(05_assign)