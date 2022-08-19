project(abstract_vm)

cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

# Bring in the required packages
find_package(antlr4-runtime REQUIRED)
find_package(antlr4-generator REQUIRED)

# add generated source files
add_executable( Parsertest main.cpp antlr/grammarVMLexer.h antlr/grammarVMLexer.cpp antlr/grammarVMParser.cpp antlr/grammarVMParser.h)

# add required runtime library
add_dependencies( Parsertest antlr4_shared )

target_link_libraries( Parsertest PRIVATE
        antlr4_shared)
include_directories(antlr)
