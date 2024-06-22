#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class RobotomyRequestForm : public AForm{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &name);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & cp);
		RobotomyRequestForm(const RobotomyRequestForm & cp);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;

		class FailRobotomy : public std::exception {
			public:
			  const char *what() const throw();
		};
};

#endif 
