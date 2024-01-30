# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 11:17:25 by kabasolo          #+#    #+#              #
#    Updated: 2024/01/30 18:18:11 by kabasolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = ft_printf.c ft_hex.c ft_num.c ft_str.c
OBJECTS = $(SOURCES:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	echo ""
	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##"
	echo "  ##        Makefile: The library has been compiled.         ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""
	
clean:
	rm -f $(OBJECTS)
	echo ""
	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##" 
	echo "  ##  Makefile: The .o terminated files have been removed.   ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""

fclean: clean
	rm -f $(NAME)

	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##"
	echo "  ##  Makefile: The library libftprintf.a has been removed.  ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""

re:	fclean $(NAME)
.SILENT:
.PHONY: all clean fclean re