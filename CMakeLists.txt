cmake_minimum_required(VERSION 3.20)
project (MY_PROJECT)

set(CMAKE_CXX_STANDARD 14)

# Add MPI Package to Project
find_package(MPI REQUIRED)

add_executable(MY_PROJECT openmp/task1.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2 openmp/task2.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT3 openmp/task3.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT3 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT4 openmp/task4.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT4 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT5 openmp/task5.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT5 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.1.1 mpi/task2.1.1.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.1.1 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.1.2 mpi/task2.1.2.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.1.2 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.1.3 mpi/task2.1.3.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.1.3 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.1.4 mpi/task2.1.4.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.1.4 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.1.5 mpi/task2.1.5.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.1.5 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.2.1 mpi/task2.2.1.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.2.1 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.2.2 mpi/task2.2.2.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.2.2 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.2.3 mpi/task2.2.3.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.2.3 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.2.4 mpi/task2.2.4.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.2.4 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.2.5 mpi/task2.2.5.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.2.5 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.3.1 mpi/task2.3.1.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.3.1 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.3.2 mpi/task2.3.2.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.3.2 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.3.3 mpi/task2.3.3.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.3.3 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.3.4 mpi/task2.3.4.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.3.4 PUBLIC MPI::MPI_CXX)

add_executable(MY_PROJECT2.3.5 mpi/task2.3.5.cpp)
# Add libraries for code completion and compiling
target_link_libraries(MY_PROJECT2.3.5 PUBLIC MPI::MPI_CXX)