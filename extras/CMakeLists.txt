include_directories("../part-1")
include_directories("../part-3")

add_executable(array_insert_movable_driver
  array_insert_movable_driver.cpp
  array_insert_movable.hpp
  probes.hpp)

add_executable(lsh_driver
  lsh_driver.cpp)

if(build_exercises)
  add_executable(stack_move_driver
    stack_move_driver.cpp
    stack.hpp)

  add_executable(list_iterator_driver
    list_iterator_driver.cpp
    list.hpp
    list_iterator.hpp)
  endif()
