#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int main (){
	try{
		Bureaucrat test("namu", 151);
		std::cout  << "Bureaucrat is created\n";
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat test("namu", -1);
		std::cout  << "Bureaucrat is created\n";
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat test("namu", 1);
		std::cout  << "Bureaucrat is created\n";
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	//Shubbery
	std::cout  <<"\n------------------------------" << std::endl;
	try{
		Bureaucrat brct("Shrubbery", 50);
		ShrubberyCreationForm form("shrubbery_form");
		std::cout << "\033[32m" << "Shrubbery :" << "\033[0m" << brct.getGrade()<< "\nForm :" << "sign=" << form.getSignGrade() << form.getSignGrade()  << " execute=" << form.getExeGrade()<< std::endl;
		brct.signForm(form);
		form.execute(brct);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	//Robotomy
	std::cout <<"\n------------------------------" << std::endl;
	try{
		Bureaucrat brct("robotomy", 5);
		RobotomyRequestForm form("robotomy_form");
		std::cout << "\033[35m" << "Robotomy :" << "\033[0m" << brct.getGrade() << "\nForm :" << "sign=" << form.getSignGrade() << " execute=" << form.getExeGrade()<< std::endl;
		brct.signForm(form);
		form.execute(brct);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	//President
	std::cout << "\n------------------------------" << std::endl;
	try{
		Bureaucrat brct("president", 5);
		PresidentialPardonForm form("president_form");
		std::cout << "\033[31m" << "President :" << "\033[0m"<< brct.getGrade()<< "\nForm :" << "sign=" << form.getSignGrade() << form.getSignGrade()  << " execute=" << form.getExeGrade()<< std::endl;
		brct.signForm(form);
		form.execute(brct);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
