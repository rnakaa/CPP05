#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	std::cout << "------------------------------" << std::endl;
	try{
		Bureaucrat brct("namu", 50);
		Form form("temu");
		std::cout << "Bureaucrat :" << brct.getGrade()<< "\nForm :" << form.getSignGrade() << std::endl;
		brct.signForm(form);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	

	Bureaucrat brct("namu", 50);
	Form Afile("A");
	Form Bfile("B");
	Afile = Bfile;
	std::cout << brct << std::endl;
	std::cout << Afile << std::endl;
	std::cout << Bfile << std::endl;
}
