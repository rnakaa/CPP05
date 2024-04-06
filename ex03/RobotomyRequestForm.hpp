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
		RobotomyRequestForm(const std::string &name);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & cp);
		RobotomyRequestForm(const RobotomyRequestForm & cp);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;

		class  NotSigned : public std::exception{
			const char *what() const throw();
		};
		class NotOpenException : public std::exception{
			const char *what() const throw();
		};

  class FailRobotomy : public std::exception {
  public:
    const char *what() const throw();
  };

	private:
		RobotomyRequestForm();
};

#endif 
