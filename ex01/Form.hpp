#ifndef FORM_HPP 
#define FORM_HPP
#include <iostream>
class Bureaucrat;

class Form{
	private:
		const std::string _name;
		bool _signed;
		const size_t _signGrade;
		const size_t _exeGrade;
	public:
		Form();
		Form(const std::string &name);
		Form(const std::string &name, const int signNum);
		Form(const std::string &name, const int signNum, const int exeNum);
		Form & operator=(const Form & cp);
		Form(const Form & cp);
		~Form();
		const std::string &getName()const;
		bool getSigned()const;
		size_t getSignGrade()const;
		size_t getExeGrade()const;
		void beSigned(const Bureaucrat & bureaucrat);

		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};
		
		
};
std::ostream & operator<<(std::ostream &os, const Form &obj);

#endif // FORM
