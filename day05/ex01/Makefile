# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 08:28:51 by xrhoda            #+#    #+#              #
#    Updated: 2019/06/10 14:53:52 by xrhoda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = bureaucrat

SRCS     = main.cpp Bureaucrat.cpp Form.cpp
HDRS     = Bureaucrat.hpp Form.hpp
OBJS     = $(SRCS:%.cpp=%.o)

CXX      = clang++
CXXFLAGS = -std=c++11 -Wall -Werror -Wextra

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