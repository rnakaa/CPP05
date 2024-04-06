#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name)
    : AForm(name, 145, 135) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cp) {
  if (this != &cp) {
    this->AForm::operator=(cp);
  }
  return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
    : AForm(cp) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  std::string file_name = this->getName() + "_shrubbery";

  if (!this->getSigned()) {
    throw NotSigned();
  }
  if (executor.getGrade() <= this->getExeGrade()) {
    std::ofstream ofs(file_name.c_str());
    if (!ofs.is_open()) {
      throw NotOpenException();
    }
    ofs << " * " << std::endl;
    ofs << "/ \\" << std::endl;
    ofs << "/ \\" << std::endl;
    ofs << "/ \\" << std::endl;
    ofs << " | " << std::endl;
    ofs.close();
  }
}

const char *ShrubberyCreationForm::NotSigned::what() const throw() {
  return "Not Signed";
}

const char *ShrubberyCreationForm::NotOpenException::what() const throw() {
  return "Not Open Exception Signed";
}
