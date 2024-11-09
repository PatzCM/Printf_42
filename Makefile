# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 16:05:38 by palexand          #+#    #+#              #
#    Updated: 2024/11/08 16:05:40 by palexand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Vari/alias that define the files that will be compilled together
RM = rm -f
# CFLAGS = Compiler flags that will be used to compile the files
CFLAGS = -Wall -Wextra -Werror
# SRCS = Source files that will be compiled together
SRCS = ft_printf.c ft_pointer_printf.c ft_decimal_printf.c ft_hexa_printf.c ft_nbr_printf.c \
			 ft_str_printf.c
# OBJS = Object files $(source: .c INPUT = .o OUTPUT) because when compiling a static library you need .o files.
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
#Name is the name of the file. .a is static library.
# all is the basic rule of makefile whenever there's no rule input.(make )
LIBS= libft/libft.a
all: deps ${NAME}
#Dependencies
deps:
	make -C libft

#Name calls the objects and then compiles (ar rc) calling the name of the file and objects to compile.
${NAME}: ${OBJS} ${DEPS}
	ar rcs ${NAME} ${OBJS} ${LIBS}
#Delete the .o files
clean:
	${RM} ${OBJS}
	make -C libft clean
#Delete the .o file with clean + remove .a file with $NAME.
fclean: clean
	${RM} ${NAME}
	make -C libft fclean
#Clean everything (.o & .a)
re: fclean all
	make -C libft re


#To not allow overlap of rules
.PHONY: re fclean clean all deps 

