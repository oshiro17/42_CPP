#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form)
    : AForm(form), _target(form._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
    if (this != &form) {
        AForm::operator=(form);
        _target = form._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!getSign()) {
        throw NotSignedException();
    } else if (getGradeToExecute() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::cout << "Drilling noises: gagagagagaga" << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2 == 0) {
        std::cout << "Success: " << _target << " has been robotomized." << std::endl;
    } else {
        std::cout << "Fail: " << _target << " has not been robotomized." << std::endl;
    }
}