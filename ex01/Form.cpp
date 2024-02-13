#include "Form.hpp"

Form::Form()
	:_name("default"),
	 _singed(false),
	 _singGrade(75),
	 _exeGrade(75){}

Form::Form(std::string name)
	:_name(name),
	_singed(false),
	_singGrade(75),
	_exeGrade(75){}

Form::Form(const Form & cp)
	:_name(cp.getName()),
	_singed(cp.getSinged()),
	_singGrade(cp.getSingGrade()),
	_exeGrade(cp.getExeGrade()){}

Form & Form::operator=(const Form & cp){
	if (this == &cp)
		return *this;
	this->_singed = cp._singed;
	return *this;
}

Form::~Form(){}

const std::string Form::getName()const{
	return (_name);
}

bool Form::getSinged()const{
	return (_singed);
}

int	Form::getSingGrade()const{
	return (_singGrade);
}

int	Form::getExeGrade()const{
	return (_exeGrade);
}

void	Form::beSigned(const Bureaucrat &bureaucrat){
	if (this->_singGrade < bureaucrat.getGrade())
		throw GradeTooLowException();
	else
		this->_singed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
		return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
		return "Grade is too low";
}

std::ostream & operator<<(std::ostream &os, const Form &obj){
	os << "filename is " <<  obj.getName() << (obj.getSinged() ? ", singed ":", unsinged ") << ",sing grade = " << obj.getSingGrade() << ", execute grade = " << obj.getExeGrade();
	return os;
}
