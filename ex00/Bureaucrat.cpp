#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"){
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name){
//	if (grade < 1|| 150 < grade){
//		throw std::runtime_error("invalid grade number");
//	}
	if (150 < grade){
		throw GradeTooLowException();
	}
	if (grade < 1){
		throw GradeTooHighException();
	}
	_grade = grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat &cp){
	if (this == &cp){
		return *this;
	}
	_grade = cp._grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat &cp){
	*this = cp;
}

Bureaucrat::~Bureaucrat(){
}

std::string Bureaucrat::getName()const{
	return _name;
}

int Bureaucrat::getGrade()const{
	return _grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
		return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
		return "Grade is too low";
}

void Bureaucrat::incrementGrade(){
	if (_grade <= 1){
		throw GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decrementGrade(){
	if (150 <= _grade){
		throw GradeTooLowException();
	}
	_grade++;
}

std::ostream& operator<<(std::ostream &os , const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return os;
}
