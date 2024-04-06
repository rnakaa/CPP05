#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat {
private:
  const std::string _name;
  size_t _grade;
  void incrementGrade();
  void decrementGrade();

public:
  Bureaucrat();
  Bureaucrat(const std::string &name, size_t grade);
  Bureaucrat(Bureaucrat &obj);
  Bureaucrat &operator=(Bureaucrat &rhs);
  ~Bureaucrat();

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };

  const std::string &getName() const;
  const size_t &getGrade() const;
	void signForm(AForm & form )const;
	void executeForm(AForm const & form)const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif // BUREAUCRAT
