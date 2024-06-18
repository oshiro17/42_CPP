#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& name, const int grade)
    : _name(name), _grade(grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}
Bureaucrat::Bureaucrat(const int grade)
    : _name("Default"), _grade(grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
}
Bureaucrat::Bureaucrat(const std::string& name)
    : _name(name), _grade(150) {
}
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
  if (this != &bureaucrat) {
    this->_grade = bureaucrat.getGrade();
  }
  return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
    : _name(bureaucrat._name), _grade(bureaucrat._grade) {}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::upGrade() {
	if (_grade <= 1) {
		throw GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::downGrade() {
	if (_grade >= 150) {
        throw GradeTooLowException();
    }
    _grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}
void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade too low");
}