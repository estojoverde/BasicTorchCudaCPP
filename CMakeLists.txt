cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
 
set(CMAKE_C_COMPILER "/opt/share/gcc/11.1.0/bin/gcc")
set(CMAKE_CXX_COMPILER "/opt/share/gcc/11.1.0/bin/g++")

 
set (LANGUAGES "C;CXX")
# 
project(onlytorch LANGUAGES ${LANGUAGES})
# 
find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")
# 
add_executable(onlytorch onlytorch.cpp)
target_link_libraries(onlytorch "${TORCH_LIBRARIES}")
target_link_libraries(onlytorch "${TORCH_CUDA_LIBRARIES}") # <-- add this line
set_property(TARGET onlytorch PROPERTY CXX_STANDARD 14)
# 


# cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
# project(onlytorch)

# find_package(Torch REQUIRED)

# add_executable(onlytorch onlytorch.cpp)
# target_link_libraries(onlytorch "${TORCH_LIBRARIES}")
# set_property(TARGET onlytorch PROPERTY CXX_STANDARD 14)