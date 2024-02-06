#ifndef BUREAUCRAT_HPP 
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat{
	private:
		const std::string _name;
		size_t _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat & operator=(const Bureaucrat &cp);
		Bureaucrat(const Bureaucrat &cp);
		~Bureaucrat();
		std::string getName()const;
		int getGrade()const;
		class GradeTooHighException : public std::exception{
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
				virtual const char *what() const throw();
		};
};

#endif // BUREAUCRAT
