#ifndef INTERN_HPP
#define INTERN_HPP
#include <exception>
#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
  void decrementGrade();

public:
  Intern();
  ~Intern();

	AForm* makeForm(const std::string form, const std::string name)const;

  class NoSuchForm : public std::exception {
  public:
    const char *what() const throw();
  };
};
#endif // BUREAUCRAT
