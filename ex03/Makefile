CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = 'Form_up,_maggots!'

SRCS = 	AForm.cpp \
	Bureaucrat.cpp \
	PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp \
	Intern.cpp \
	main.cpp

HEADERS = 	AForm.hpp \
		Bureaucrat.hpp \
		PresidentialPardonForm.hpp \
		RobotomyRequestForm.hpp \
		Intern.hpp

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
