#include "Bureaucrat.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main() {
	//ok
  try {
		std::cout << BLUE << "ok Bureaucrat 150" << RESET << std::endl;
    Bureaucrat ok("ok", 150);
    std::cout << "ok" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

	//ng
  try {
		std::cout << RED << "ko Bureaucrat 151" << RESET << std::endl;
    Bureaucrat under("under", 151);
    std::cout << "ok" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
		std::cout << RED << "ko Bureaucrat 0" << RESET << std::endl;
    Bureaucrat over("over", 0);
    std::cout << "ok" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
