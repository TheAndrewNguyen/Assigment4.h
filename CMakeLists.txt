cmake_minimum_required(VERSION 3.28)
project(Assignment4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Assignment4 main.cpp
        shhh.h
        client.h
        media.h
        publication.h
        fiction.h
        children.h
        periodical.h
        mediaContainer.hpp
        mediaTree.h
        mediaFactory.h)
