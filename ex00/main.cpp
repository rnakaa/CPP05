#include "Bureaucrat.hpp"

int main (){
	try{
		Bureaucrat test("namu", 150);
		std::cout << test << std::endl;
		test.decrementGrade();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
			
	}
}
