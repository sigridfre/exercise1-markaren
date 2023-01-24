
add_executable(test_person test_person.cpp)
add_test(NAME test_person COMMAND test_person)
target_link_libraries(test_person PUBLIC Catch2::Catch2 personlib)