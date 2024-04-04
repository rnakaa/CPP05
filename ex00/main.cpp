#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat ok("ok", 150);
    std::cout << "ok" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Bureaucrat under("under", 151);
    std::cout << "ok" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Bureaucrat over("over", 0);
    std::cout << "ok" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
