# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abanuelo <abanuelo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 17:59:54 by abanuelo          #+#    #+#              #
#    Updated: 2025/09/16 12:14:45 by abanuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF_DIR = printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a
PRINTF_INC = -I$(PRINTF_DIR)
NAME_SERVER = server
NAME_CLIENT = client

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_SERVER = server.c
SRC_CLIENT = client.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

all: $(NAME_SERVER) $(NAME_CLIENT)
$(NAME_SERVER): $(OBJ_SERVER) $(PRINTF_LIB)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(PRINTF_LIB) $(PRINTF_INC) -o $@
$(NAME_CLIENT): $(OBJ_CLIENT) $(PRINTF_LIB)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(PRINTF_LIB) $(PRINTF_INC) -o $@

$(PRINTF_LIB):
	make -C $(PRINTF_DIR)

clean:
	make -C $(PRINTF_DIR) clean
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re