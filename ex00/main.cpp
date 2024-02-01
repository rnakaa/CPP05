#include "Bureaucrat.hpp"

int main (){
	try{
		Bureaucrat test("namu", 151);
		std::cout  << "Bureaucrat is created\n";
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
			
	}
}
