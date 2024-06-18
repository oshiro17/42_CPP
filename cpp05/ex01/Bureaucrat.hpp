#pragma once

#include <iostream>
#include <stdexcept>


class Form;

class Bureaucrat {
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(const std::string& name, const int grade);
    Bureaucrat(const int grade);
    Bureaucrat(const std::string& name);
    Bureaucrat();
    Bureaucrat(const Bureaucrat &bureaucrat);
    Bureaucrat &operator=(const Bureaucrat &bureaucratv);
    ~Bureaucrat();
    const std::string& getName() const;
    int getGrade() const;
    void upGrade();
    void downGrade();
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
    void signForm(Form &form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);