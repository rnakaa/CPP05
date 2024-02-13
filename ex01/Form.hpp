#ifndef FORM_HPP 
#define FORM_HPP
#include <iostream>
class Bureaucrat;

class Form{
	private:
		const std::string _name;
		bool _singed;
		const int _singGrade;
		const int _exeGrade;
	public:
		Form();
		Form(std::string name);
		Form & operator=(const Form & cp);
		Form(const Form & cp);
		~Form();
		const std::string getName()const;
		bool getSinged()const;
		int getSingGrade()const;
		int getExeGrade()const;
		void beSigned(const Bureaucrat & bureaucrat);
		class GradeTooHighException : public std::exception{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			virtual const char *what() const throw();
		};
		
		
};
std::ostream & operator<<(std::ostream &os, const Form &obj);

#endif // FORM
