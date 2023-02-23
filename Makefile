SRCS	= 
OBJS	= $(addprefix $(BIN)/, $(SRCS:.c=.o))
NAME	= libftprintf.a
BIN		= bin
SRC		= src
INC		= include
LIB		= ar rcs
CFLAG	= -Wall -Wextra -Werror
RM		= rm -f
CC		= gcc

all : $(NAME)


$(NAME) : $(OBJS)
