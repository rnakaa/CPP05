#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
    : _name("default"), _signed(false), _signGrade(75), _exeGrade(75) {}

AForm::AForm(const std::string &name)
    : _name(name), _signed(false), _signGrade(75), _exeGrade(75) {}

AForm::AForm(const std::string &name, size_t signGrade, size_t exeGrade)
    : _name(name), _signed(false), _signGrade(signGrade), _exeGrade(exeGrade) {}

AForm::AForm(const AForm &cp) : _name(cp.getName()), _signed(cp.getSigned()),
      _signGrade(cp.getSignGrade()), _exeGrade(cp.getExeGrade()) {}

AForm &AForm::operator=(const AForm &cp) {
  if (this == &cp)
    return *this;
	this->_signed = cp._signed;
  return *this;
}

AForm::~AForm() {}

const std::string &AForm::getName() const { return (this->_name); }

bool AForm::getSigned() const { return (this->_signed); }

size_t AForm::getSignGrade() const { return (this->_signGrade); }

size_t AForm::getExeGrade() const { return (this->_exeGrade); }

void AForm::beSigned(const Bureaucrat &bureaucrat) {
  if (this->_signGrade < bureaucrat.getGrade())
    throw GradeTooLowException();
  else
    this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const AForm &obj) {
  os << "filename is " << obj.getName()
     << (obj.getSigned() ? ", signed " : ", unsigned ")
     << ",sign grade = " << obj.getSignGrade()
     << ", execute grade = " << obj.getExeGrade();
  return os;
}
