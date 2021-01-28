# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 21:21:54 by lsuardi           #+#    #+#              #
#    Updated: 2021/01/28 00:35:51 by lsuardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLASS =		Litteral

OBJDIR =	../.obj
INCDIR =	../inc
SRC = 		$(foreach i, $(CLASS), $i.class.cpp)
OBJ =		$(SRC:.cpp=.o)

OBJPATH =	$(addprefix $(OBJDIR)/, $(OBJ))
SRCPATH =	$(foreach i, $(CLASS), $i.class/$i.class.cpp)

CFLAGS =	-Wall\
			-Werror\
			-Wextra\
			-I $(INCDIR)

all: $(OBJPATH)
	@echo 'Classes are up to date'

$(OBJPATH):
	@(\
		$(foreach i, $(CLASS), printf '\r\033[2KCompiling $i...'; clang++ $(CFLAGS) -c $i.class/$i.class.cpp -o $(OBJDIR)/$i.class.o;)\
		printf '\n';\
	)
