CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = 'Form_up,_maggots!'

SRCS = main.cpp\
	   Bureaucrat.cpp \
	   Form.cpp

HEADERS = Bureaucrat.hpp\
		  Form.hpp

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
