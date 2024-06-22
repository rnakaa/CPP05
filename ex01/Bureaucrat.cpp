#include "Bureaucrat.hpp"

// private

void Bureaucrat::incrementGrade() {
  this->_grade -= 1;
  if (this->_grade < 1) {
    throw Bureaucrat::GradeTooHighException();
  }
}

void Bureaucrat::decrementGrade() {
  this->_grade += 1;
  if (150 < this->_grade) {
    throw Bureaucrat::GradeTooLowException();
  }
}

// public
Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, size_t grade)
    : _name(name), _grade(grade) {
  if (150 < this->_grade) {
    throw Bureaucrat::GradeTooLowException();
  }
  if (this->_grade < 1) {
    throw Bureaucrat::GradeTooHighException();
  }
}

Bureaucrat::Bureaucrat(Bureaucrat &obj)
    : _name(obj._name), _grade(obj._grade) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &rhs) {
  if (this != &rhs) {
    this->_grade = rhs._grade;
  }
  return (*this);
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("GradeTooLowException");
}

const std::string &Bureaucrat::getName() const { return (this->_name); }

const size_t &Bureaucrat::getGrade() const { return (this->_grade); }

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << " bureaucrat grade " << obj.getGrade();
  return (os);
}

void Bureaucrat::signForm(Form & form)const{
	try{
		form.beSigned(*this);
		std::cout << this->getName() << " singed " << form.getName()  << "."<< std::endl;
	}
	catch(const std::exception &e){
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
