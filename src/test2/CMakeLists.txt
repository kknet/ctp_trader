cmake_minimum_required (VERSION 2.8)
project(TraderTest)

add_compile_options(-g -Wall)

set(BASE_LIBRARY_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(. ${BASE_LIBRARY_PATH}/ctpmini2 ${BASE_LIBRARY_PATH}/femas20 ${BASE_LIBRARY_PATH}/rem)

link_directories(${BASE_LIBRARY_PATH}/ctpmini2 ${BASE_LIBRARY_PATH}/femas20 ${BASE_LIBRARY_PATH}/rem)

add_executable(testCtpMiniTd CtpTest.cpp)

add_executable(testCtpMiniMd CtpMduserTest.cpp)

target_link_libraries(testCtpMiniTd thosttraderapi)

target_link_libraries(testCtpMiniMd thostmduserapi)

add_executable(testFemas20Td Femas20Test.cpp)

target_link_libraries(testFemas20Td USTPtraderapiAF)

add_executable(testRemTd RemTest.cpp)

target_link_libraries(testRemTd EESTraderApi)
