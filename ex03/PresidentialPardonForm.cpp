#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &name)
    : AForm(name, 25, 5) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &cp) {
  if (this != &cp) {
    this->AForm::operator=(cp);
  }
  return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp)
    : AForm(cp) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

//execute
void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (!this->getSigned()) {
    throw NotSigned();
  }
  if (executor.getGrade() <= this->getExeGrade()) {
    std::cout << "Zaphod Beeblebrox has pardoned " + this->getName() + "." << std::endl;
  }
}

const char *PresidentialPardonForm::NotSigned::what() const throw() {
  return "Not Signed";
}
