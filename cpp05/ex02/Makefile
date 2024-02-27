# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 16:03:25 by aroussea          #+#    #+#              #
#    Updated: 2024/02/27 17:19:04 by aroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
TARGET = ex02
SRCS := src/main.cpp \
		src/Bureaucrat.cpp \
		src/AForm.cpp \
		src/ShrubberyCreationForm.cpp \
		src/RobotomyRequestForm.cpp

HEADERS :=  include/Bureaucrat.hpp \
			include/AForm.hpp \
			include/ShrubberyCreationForm.hpp \
			include/RobotomyRequestForm.hpp \

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
