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
		Bureaucrat & operator=(Bureaucrat &cp);
		Bureaucrat(Bureaucrat &cp);
		~Bureaucrat();
		std::string getName()const;
		int getGrade()const;
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException : public std::exception{
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream &os , const Bureaucrat &obj);

#endif // BUREAUCRAT
