#include "Bureaucrat.hpp"
#include "Form.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main (){
	std::cout << CYAN << "------------------------------" << RESET << std::endl;
	try {
		Form Cfile("Cfile", 151);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << CYAN << "------------------------------" << RESET << std::endl;
	std::cout << GREEN << "Bureaucrat b1, grade:100" << RESET << std::endl;
	std::cout << GREEN << "file A, grade:75" << RESET << std::endl;
	Bureaucrat b1("b1", 100);
	Form Afile("A");
	try{
		b1.signForm(Afile);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << CYAN << "------------------------------" << RESET << std::endl;
	std::cout << std::endl << GREEN << "Bureaucrat b2, grade:50" << RESET << std::endl;
	std::cout << GREEN << "file B,grade:75" << RESET << std::endl;
	Bureaucrat b2("b2", 50);
	Form Bfile("B");
	try{
		b2.signForm(Afile);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << CYAN << "------------------------------" << RESET << std::endl << std::endl;
	Afile = Bfile;
	std::cout << GREEN << "Afile = Bfile" << RESET << std::endl;
	std::cout << b1 << std::endl;
	std::cout << Afile << std::endl;
	std::cout << Bfile << std::endl;

}
