#include "Intern.hpp"
Intern::Intern(){}

Intern::Intern(const Intern &intern){*this = intern;}

Intern &Intern::operator=(const Intern &intern){
	if(this != &intern) {
	}
	return (*this);
}

Intern::~Intern(){}

AForm* Intern::makeForm(const std::string form, const std::string name)const {

	int num = 1*(form == "shrubbery creation") + 2*(form == "robotomy request") + 3*(form == "presidential pardon");

	switch (num){
		case 1:
			return new ShrubberyCreationForm(name);
		case 2:
			return new RobotomyRequestForm(name);
		case 3:
			return new PresidentialPardonForm(name);
	}
	throw Intern::NoSuchForm();
}

const char *Intern::NoSuchForm::what() const throw() {
  return ("no such form");
}
