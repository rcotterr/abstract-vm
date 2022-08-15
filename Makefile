NAME = a.out

CC = clang++
CFLAGS = -std=c++17 -Wall -Wextra -Werror

INC = Operand.hpp IOperand.hpp
SRCS = main.cpp Operand.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -I /usr/local/include/antlr4-runtime -lantlr

%.o: %.cpp $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@ -I /usr/local/include/antlr4-runtime -lantlr

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
