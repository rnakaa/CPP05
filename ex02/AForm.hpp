#ifndef FORM_HPP 
#define FORM_HPP
#include <iostream>
#include <string>
class Bureaucrat;

class AForm{
	private:
		const std::string _name;
		bool _signed;
		const size_t _signGrade;
		const size_t _exeGrade;
	public:
		AForm();
		AForm(const std::string &name);
		AForm(const std::string &name, size_t signGrade, size_t exeGrade);
		AForm & operator=(const AForm & cp);
		AForm(const AForm & cp);
		virtual ~AForm();
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
		
		virtual void execute(Bureaucrat const & executor) const = 0;

		class  NotSigned : public std::exception{
			const char *what() const throw();
		};
		
};
std::ostream & operator<<(std::ostream &os, const AForm &obj);

#endif // FORM
