#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
    : AForm(form), _target(form._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
    if (this != &form) {
        AForm::operator=(form);
        _target = form._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!getSign()) {
        throw NotSignedException();
    } else if (getGradeToExecute() < executor.getGrade()) {
        throw GradeTooLowException();
    }
    std::string filename = _target + "_shrubbery";
    std::ofstream ofs(filename.c_str());
    if (!ofs.is_open()) {
        throw std::runtime_error("Cannot open file");
    }
    ofs << "   /\\   " << std::endl
        << "  /  \\  " << std::endl
        << " /    \\ " << std::endl
        << "/______\\" << std::endl
        << "  ||||  " << std::endl;
    ofs.close();
}
