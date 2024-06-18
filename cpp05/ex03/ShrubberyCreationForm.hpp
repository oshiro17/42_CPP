#pragma once
#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &form);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;

protected:
    std::string _target;  // protectedに変更
};

