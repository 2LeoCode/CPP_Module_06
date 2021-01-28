# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 19:18:02 by lsuardi           #+#    #+#              #
#    Updated: 2021/01/28 01:08:32 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		convert

SRCDIR =	src
OBJDIR =	.obj
CLASSDIR =	class
INCDIR =	inc

CLASS =		Litteral
SRC =		main.cpp
OBJ =		$(SRC:.cpp=.o)

OBJPATH =	$(addprefix $(OBJDIR)/, $(OBJ))
SRCPATH =	$(addprefix $(SRCDIR)/, $(SRC))

CFLAGS =	-Wall\
			-Werror\
			-Wextra\
			-I $(INCDIR)

all: class $(NAME)
	@echo '$(NAME) is up to date'

class: $(OBJDIR)
	@(\
		cd $(CLASSDIR);\
		$(MAKE);\
		cd ..\
	)

$(OBJDIR):
	@mkdir $@

$(NAME): $(OBJPATH)
	@(\
		echo '\nBuilding objects...';\
		clang++ $(CFLAGS) $^ $(foreach i, $(CLASS), $(OBJDIR)/$(i).class.o) -o $@;\
	)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@(\
		printf '\r\033[2KCompiling $<...';\
		clang++ $(CFLAGS) -c $< -o $@\
	)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
