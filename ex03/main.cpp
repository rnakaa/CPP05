#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  // Shubbery
  std::cout << "\n------------------------------" << std::endl;
  try {
    Bureaucrat brct("Shrubbery", 50);
    ShrubberyCreationForm form("shrubbery_form");
    std::cout << "\033[32m" << "Shrubbery :" << "\033[0m" << brct.getGrade()
              << "\nForm :" << "sign=" << form.getSignGrade()
              << form.getSignGrade() << " execute=" << form.getExeGrade()
              << std::endl;
    brct.signForm(form);
    form.execute(brct);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // Robotomy
  std::cout << "\n------------------------------" << std::endl;
  try {
    Bureaucrat brct("robotomy", 5);
    RobotomyRequestForm form("robotomy_form");
    std::cout << "\033[35m" << "Robotomy :" << "\033[0m" << brct.getGrade()
              << "\nForm :" << "sign=" << form.getSignGrade()
              << " execute=" << form.getExeGrade() << std::endl;
    brct.signForm(form);
    form.execute(brct);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // President
  std::cout << "\n------------------------------" << std::endl;
  try {
    Bureaucrat brct("president", 5);
    PresidentialPardonForm form("president_form");
    std::cout << "\033[31m" << "President :" << "\033[0m" << brct.getGrade()
              << "\nForm :" << "sign=" << form.getSignGrade()
              << form.getSignGrade() << " execute=" << form.getExeGrade()
              << std::endl;
    brct.signForm(form);
    form.execute(brct);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\n------------------------------" << std::endl;
  
  //Intern
  try{
    Bureaucrat brct("president", 5);
    std::cout << "\033[36m" << "Intern" << "\033[0m" << std::endl;
    Intern someRandomIntern;
    AForm *rrf;

    // robortomy request
    // shrubbery creation
    // presidential pardon

    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << "file name is :" << rrf->getName() << std::endl;
	
    brct.signForm(*rrf);
    rrf->execute(brct);
	
    delete rrf;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}




//__attribute__((destructor))
//static void    leaks(void) {
//    system("leaks -q Form_up,_maggots!");
//}
