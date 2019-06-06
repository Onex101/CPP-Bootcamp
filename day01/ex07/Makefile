# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 08:28:51 by xrhoda            #+#    #+#              #
#    Updated: 2019/06/06 12:52:13 by xrhoda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = replace

SRCS     = main.cpp
HDRS     = 
OBJS     = $(SRCS:%.cpp=%.o)

CXX      = clang++
# CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean format re