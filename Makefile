# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhivert <bhivert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/01 16:50:57 by bhivert           #+#    #+#              #
#    Updated: 2015/01/01 16:50:57 by bhivert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all, clean, fclean, re, _mkdir, _make, _make_clean, _make_fclean
.SUFFIXES:

NAME		=	ft_gkrellm

DEBUG		=	0
ifeq ($(DEBUG), 0)
	CC	=	g++
	CFLAGS	=	-Wall -Wextra $(INCS_FLAGS) -O3
else
	CC	=	g++
	CFLAGS	=	-Wall -Wextra -Werror $(INCS_FLAGS) -g3
endif

DEPENDS		=	

LIBS_DIR	=	
LIBS		=	

INCS_FLAGS	=	-Iinterfaces \
			-Iincludes \
			-Iclasses \

SUB_MAKE	=	

CLASSES_DIR	=	classes
CLASSES_SRCS	=	$(CLASSES_DIR)/AMonitorModule.cpp \
			$(CLASSES_DIR)/ModHostname.cpp \
			$(CLASSES_DIR)/MonitorDisplay.cpp \

SRC_DIR	=	src
SRC_SRCS	=	$(SRC_DIR)/main.cpp \

SRCS		=	$(CLASSES_SRCS) \
			$(SRC_SRCS) \

OBJS_DIR	=	objs
OBJS		=	$(foreach SRC, $(SRCS), $(OBJS_DIR)/$(notdir $(SRC:.cpp=.o)))

VPATH		=	$(foreach SRC, $(SRCS), $(dir $(SRC)))

all		:	_mkdir $(NAME)

$(NAME)		:	$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS_DIR) $(LIBS)

$(OBJS_DIR)/%.o	:	%.cpp $(DEPENDS)
	$(CC) $(CFLAGS) -c $< -o $@

clean		:	_make_clean
	rm -rf $(OBJS_DIR)

fclean		:	_make_fclean clean
	rm -rf $(NAME)

re			:	fclean all

_mkdir		:
	@mkdir -p $(OBJS_DIR)

_make		:
ifeq ($(DEBUG), 2)
	$(foreach MAKE, $(SUB_MAKE),make -C $(MAKE) DEBUG=$(DEBUG);)
else
	$(foreach MAKE, $(SUB_MAKE),make -C $(MAKE);)
endif

_make_clean		:
	$(foreach MAKE, $(SUB_MAKE),make -C $(MAKE) clean;)

_make_fclean		:
	$(foreach MAKE, $(SUB_MAKE),make -C $(MAKE) fclean;)
