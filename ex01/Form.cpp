#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
    : _name("default"), _signed(false), _signGrade(75), _exeGrade(75) {}

Form::Form(const std::string &name)
    : _name(name), _signed(false), _signGrade(75), _exeGrade(75) {}

Form::Form(const Form &cp) : _name(cp.getName()), _signed(cp.getSigned()),
      _signGrade(cp.getSignGrade()), _exeGrade(cp.getExeGrade()) {}

Form &Form::operator=(const Form &cp) {
  if (this == &cp)
    return *this;
	this->_signed = cp._signed;
  return *this;
}

Form::~Form() {}

const std::string &Form::getName() const { return (this->_name); }

bool Form::getSigned() const { return (this->_signed); }

size_t Form::getSignGrade() const { return (this->_signGrade); }

size_t Form::getExeGrade() const { return (this->_exeGrade); }

void Form::beSigned(const Bureaucrat &bureaucrat) {
  if (this->_signGrade < bureaucrat.getGrade())
    throw GradeTooLowException();
  else
    this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
  os << "filename is " << obj.getName()
     << (obj.getSigned() ? ", signed " : ", unsigned ")
     << ",sign grade = " << obj.getSignGrade()
     << ", execute grade = " << obj.getExeGrade();
  return os;
}
