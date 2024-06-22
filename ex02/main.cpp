#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main (){
	//Shubbery
	try{
		Bureaucrat brct("Shrubbery", 50);
		ShrubberyCreationForm form("shrubbery_form");
		std::cout << MAGENTA << "Shrubbery" << RESET << std::endl;
		std::cout << GREEN << "Bureaucrat grade:"  << brct.getGrade() << RESET << std::endl;
		std::cout << GREEN << "Form :" << "sign=" << form.getSignGrade() << " execute=" << form.getExeGrade() << RESET<< std::endl << std::endl;
		std::cout << GREEN << "sign" << RESET << std::endl;
		brct.signForm(form);
		std::cout << GREEN << "ecxecute" << RESET << std::endl;
		form.execute(brct);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW << "------------------------------" << RESET<< std::endl<< std::endl;

	try{
		Bureaucrat brct("Robotomy", 5);
		RobotomyRequestForm form("shrubbery_form");
		std::cout << MAGENTA << "Robotomy" << RESET << std::endl;
		std::cout << GREEN << "Bureaucrat grade:"  << brct.getGrade() << RESET << std::endl;
		std::cout << GREEN << "Form :" << "sign=" << form.getSignGrade() << " execute=" << form.getExeGrade() << RESET<< std::endl << std::endl;
		std::cout << GREEN << "sign" << RESET << std::endl;
		brct.signForm(form);
		std::cout << GREEN << "ecxecute" << RESET << std::endl;
		form.execute(brct);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	//President
	std::cout << YELLOW << "------------------------------" << std::endl << std::endl;
	try{
		Bureaucrat brct("President", 5);
		PresidentialPardonForm form("shrubbery_form");
		std::cout << MAGENTA << "President" << RESET << std::endl;
		std::cout << GREEN << "Bureaucrat grade:"  << RESET<< brct.getGrade() << std::endl;
		std::cout << GREEN << "Form :" << RESET << "sign=" << form.getSignGrade() << " execute=" << form.getExeGrade() << RESET<< std::endl << std::endl;
		std::cout << GREEN << "sign" << RESET << std::endl;
		brct.signForm(form);
		std::cout << GREEN << "ecxecute" << RESET << std::endl;
		form.execute(brct);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
