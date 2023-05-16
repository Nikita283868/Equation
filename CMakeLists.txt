cmake_minimum_required(VERSION 3.25)
project(equation)

set(CMAKE_CXX_STANDARD 17)

add_executable(equation main.cpp equations/EquationType1.cpp equations/EquationType1.h equations/EquationType2.cpp equations/EquationType2.h equations/EquationType3.cpp equations/EquationType3.h equations/EquationType4.cpp equations/EquationType4.h equations/EquationType6.cpp equations/EquationType6.h equations/EquationType5.cpp equations/EquationType5.h equations/EquationType7.cpp equations/EquationType7.h equations/EquationType8.cpp equations/EquationType8.h core/EquationDispatch.cpp core/EquationDispatch.h core/Answer.cpp core/Answer.h)
