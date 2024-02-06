#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"){
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name){
	if (150 < grade){
		throw GradeTooLowException();
	}
	if (grade < 1){
		throw GradeTooHighException();
	}
	_grade = grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &cp){
	if (this == &cp){
		return *this;
	}
	_grade = cp._grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp){
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
