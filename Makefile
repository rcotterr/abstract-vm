NAME = avm

CC = clang++
CFLAGS = -std=c++17 -Wall -Wextra -Werror

INC = $(wildcard *.hpp *.h)
INC_ANTLR = $(wildcard antlr/*.h)
SRCS = main.cpp
SRCS_VM = AbstractVMVisitor.cpp Factory.cpp LexerParserErrors.cpp Operand.cpp
SRCS_ANTLR = $(wildcard antlr/*.cpp)
OBJS = $(SRCS:.cpp=.o)
OBJS_ANTLR = $(SRCS_ANTLR:.cpp=.o)
OBJS_VM = $(SRCS_VM:.cpp=.o)

LIBS=/usr/local/lib/libantlr4-runtime.a

all: $(NAME)

$(NAME): $(OBJS) $(OBJS_ANTLR) $(OBJS_VM) $(INC) $(INC_ANTLR)
	$(CC) $(CFLAGS) $(OBJS) $(OBJS_ANTLR) $(LIBS) -o $(NAME)

%.o: %.cpp $(INC) $(INC_ANTLR)
	$(CC) $(CFLAGS) -c $< -o $@ -I /usr/local/include/antlr4-runtime -I antlr

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -f $(OBJS_ANTLR)
	/bin/rm -f $(OBJS_VM)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
