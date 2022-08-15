project(abstract_vm)

cmake_minimum_required(VERSION 3.7)

#list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 17)
#add_executable(abstract_vm main.cpp)

#find_package(antlr4-generator REQUIRED)
#find_package(antlr4-runtime REQUIRED)


#add_definitions(-DANTLR4CPP_STATIC)

#find_package(antlr4-generator REQUIRED)

#include(ExternalAntlr4Cpp)
#include_directories(${ANTLR4_INCLUDE_DIRS})
#add_executable(output main.cpp)
#target_link_libraries(output antlr4_static)

#set(ANTLR_EXECUTABLE /Users/marina.romashkova/ANTLR-4.9.2/antlr-4.9.2-complete.jar)


# Bring in the required packages
find_package(antlr4-runtime REQUIRED)
find_package(antlr4-generator REQUIRED)

# Set path to generator
set(ANTLR4_JAR_LOCATION /Users/marina.romashkova/ANTLR-4.9.2/antlr-4.9.2-complete.jar)

# generate lexer
#antlr4_generate(
#        antlrcpptest_lexer
#        ${CMAKE_CURRENT_SOURCE_DIR}/TLexer.g4
#        LEXER
#        FALSE
#        FALSE
#        "antlrcpptest"
#)
#
## generate parser
#antlr4_generate(
#        antlrcpptest_parser
#        ${CMAKE_CURRENT_SOURCE_DIR}/TParser.g4
#        PARSER
#        FALSE
#        TRUE
#        "antlrcpptest"
#        "${ANTLR4_TOKEN_FILES_antlrcpptest_lexer}"
#        "${ANTLR4_TOKEN_DIRECTORY_antlrcpptest_lexer}"
#)

# add directories for generated include files
#include_directories( ${PROJECT_BINARY_DIR} ${ANTLR4_INCLUDE_DIR} ${ANTLR4_INCLUDE_DIR_antlrcpptest_lexer} ${ANTLR4_INCLUDE_DIR_antlrcpptest_parser} )

# add generated source files
#add_executable( Parsertest main.cpp ${ANTLR4_SRC_FILES_antlrcpptest_lexer} ${ANTLR4_SRC_FILES_antlrcpptest_parser} )
add_executable( Parsertest main.cpp antlr/grammarVMLexer.h antlr/grammarVMLexer.cpp antlr/grammarVMParser.cpp antlr/grammarVMParser.h)

# add required runtime library
add_dependencies( Parsertest antlr4_shared )

target_link_libraries( Parsertest PRIVATE
        antlr4_shared)
include_directories(/Users/marina.romashkova/abstract-vm/antlr)
