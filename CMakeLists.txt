# cmake needs this line
cmake_minimum_required(VERSION 2.8)

set(target_name find_which_are_removed)

# Define project name
project(${target_name} C CXX)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++")

#add_definitions(-O3 -DGPU -DCUDNN) #-DCPU_ONLY
#add_definitions(-DENV_MACOSX)

add_definitions(-std=c++11 -O3)

# add_definitions(-std=c++11 -DCPU_ONLY)

include_directories(
	)

link_directories(
        /usr/local/lib
        /usr/lib
        )

add_executable(${target_name}
        main.cpp
	)

# Link your application with libraries
target_link_libraries(${target_name}
        )

