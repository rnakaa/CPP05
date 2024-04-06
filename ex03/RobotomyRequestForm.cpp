#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &name)
    : AForm(name, 72, 45) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &cp) {
  if (this != &cp) {
    this->AForm::operator=(cp);
  }
  return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp)
    : AForm(cp) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

//execute
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  if (!this->getSigned()) {
    throw NotSigned();
  }
  if (executor.getGrade() <= this->getExeGrade()) {
    std::cout << "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ!!!!!!" << std::endl;
		std::srand(std::time(nullptr)); 
    if (std::rand() % 2) {
      std::cout << this->getName() + " has been robotomized successfull"
                << std::endl;
    } else
      throw FailRobotomy();
  }
}

const char *RobotomyRequestForm::NotSigned::what() const throw() {
  return "Not Signed";
}

const char *RobotomyRequestForm::FailRobotomy::what() const throw() {
  return "Robotomy failed.";
}
