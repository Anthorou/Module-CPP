# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 16:03:25 by aroussea          #+#    #+#              #
#    Updated: 2023/12/06 15:25:44 by aroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
TARGET = phonebook
SRCS := main.cpp \
		PhoneBook.cpp \
		Contact.cpp 

HEADERS := Phonebook.hpp \
		   Contact.hpp 

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
