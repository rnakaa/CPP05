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
		Bureaucrat test("namu", 20);
		Form form("temu");
		form.beSigned(test);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	

	Form Afile("A");
	Form Bfile("B");
	Afile = Bfile;
	std::cout << Afile << std::endl;
}
