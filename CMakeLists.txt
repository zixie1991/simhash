PROJECT(simhash)

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/deps
  ${PROJECT_SOURCE_DIR}/include)

ADD_DEFINITIONS(-O3 -Wall -g)
IF(APPLE) 
    ADD_DEFINITIONS(-std=c++11)
endif()

#ADD_SUBDIRECTORY(example)
#ADD_SUBDIRECTORY(test)

#ENABLE_TESTING()
#ADD_TEST(NAME ./test/test.run COMMAND ./test/test.run)
#ADD_TEST(NAME ./test/load_test COMMAND ./test/load_test)
#ADD_TEST(NAME ./demo COMMAND ./demo)

include_directories(${boost_INCLUDE_DIRS} /usr/include/python2.7/)
add_library(_simhash SHARED ${PROJECT_SOURCE_DIR}/python/simhash/_simhash.cpp)
target_link_libraries(_simhash boost_python)
