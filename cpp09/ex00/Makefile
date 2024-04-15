# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 16:03:25 by aroussea          #+#    #+#              #
#    Updated: 2024/03/20 15:57:52 by aroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
TARGET = btc
SRCS := main.cpp \
		BitcoinExchange.cpp

HEADERS := BitcoinExchange.hpp

OBJS = $(patsubst %.cpp,bin/%.o,$(SRCS))

all: $(TARGET)

bin/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I.

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(CXXFLAGS)

clean:
	rm -rf bin

fclean: clean
	rm -f $(TARGET)

re: fclean all
