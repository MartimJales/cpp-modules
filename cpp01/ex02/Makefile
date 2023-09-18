# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjales <mjales@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 20:15:04 by mjales            #+#    #+#              #
#    Updated: 2023/09/18 20:15:42 by mjales           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		=	\033[0;31m
GREEN_B	=	\033[1;32m
BLUE	=	\033[0;34m
RESET	=	\033[0m

####### COMPILER #######
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

####### DIRECTORIES #######
OBJ_DIR	=	./obj
INC_DIR	=	inc

####### FILES #######
SRC		=	$(shell find src/ -name '*.cpp')
OBJ		=	$(patsubst src/%.cpp,$(OBJ_DIR)/%.o,$(SRC))
NAME 	=	Address

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(BLUE)[Compiling]     "$(NAME)"$(RESET)\n"
	@$(CC) $(OBJ) $(FLAGS) -o $(NAME)
	@printf "$(GREEN_B)[$(NAME) ready to use]\n$(RESET)"

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INC_DIR) -c $< -o $@
	@printf "$(BLUE)[Compiling]     "$@"$(RESET)\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(OBJ_DIR) $(NAME)
	@echo "$(RED)[All $(NAME) files removed]$(RESET)"

re: fclean all

.PHONY: all clean fclean re
