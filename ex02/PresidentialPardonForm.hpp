#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &name);
		PresidentialPardonForm & operator=(const PresidentialPardonForm & cp);
		PresidentialPardonForm(const PresidentialPardonForm & cp);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
};

#endif 
