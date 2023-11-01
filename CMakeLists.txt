cmake_minimum_required(VERSION 3.20)
project (MY_PROJECT)

set(CMAKE_CXX_STANDARD 14)

# Add MPI Package to Project
find_package(MPI REQUIRED)

add_executable(MY_PROJECT task1.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2 task2.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT3 task3.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT3 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT4 task4.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT4 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT5 task5.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT5 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.1 task2.1.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.1 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.2 task2.2.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.2 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.3 task2.3.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.3 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.4 task2.4.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.4 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.5 task2.5.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.5 PUBLIC MPI::MPI_CXX)

