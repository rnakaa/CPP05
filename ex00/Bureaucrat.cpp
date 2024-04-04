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
  os << obj.getName() << " bureaucrat grade " << obj.getGrade() << std::endl;
  return (os);
}

// Bureaucrat &Bureaucrat::operator=(Bureaucrat &cp) {
//   if (this == &cp) {
//     return *this;
//   }
//   _grade = cp._grade;
//   return *this;
// }
//
// Bureaucrat::Bureaucrat(Bureaucrat &cp) { *this = cp; }
//
// Bureaucrat::~Bureaucrat() {}
//
// std::string Bureaucrat::getName() const { return _name; }
//
// int Bureaucrat::getGrade() const { return _grade; }
//
// const char *Bureaucrat::GradeTooHighException::what() const throw() {
//   return "Grade is too high";
// }
//
// const char *Bureaucrat::GradeTooLowException::what() const throw() {
//   return "Grade is too low";
// }
//
// void Bureaucrat::incrementGrade() {
//   if (_grade <= 1) {
//     throw GradeTooHighException();
//   }
//   _grade--;
// }
//
// void Bureaucrat::decrementGrade() {
//   if (150 <= _grade) {
//     throw GradeTooLowException();
//   }
//   _grade++;
// }
//
// std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
//   os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
//   return os;
// }
