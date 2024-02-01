CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = "Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat!"

SRCS = main.cpp\
	   Bureaucrat.cpp

HEADERS = Bureaucrat.hpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME):$(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o : %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY:all
all:$(NAME)

.PHONY: clean
clean:
	rm -f $(OBJS) 

.PHONY: fclean
fclean: clean
	rm -f $(NAME) 

.PHONY:re
re:		fclean all

.PHONY:run
run: all $(NAME) 
	./$(NAME)
