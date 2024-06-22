#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &name);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & cp);
		ShrubberyCreationForm(const ShrubberyCreationForm & cp);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;

		class NotOpenException : public std::exception{
			const char *what() const throw();
		};
};

#endif 
