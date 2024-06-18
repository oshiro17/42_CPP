#pragma once
// #ifndef BUREAUCRAT_HPP
// #define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

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
        // {
            // return "Grade too high!";
        // };
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
        // {
            // return "Grade too low!";
        // };
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
// Includes