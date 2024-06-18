#pragma once
#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &form);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &form);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const &executor) const;

protected:
    std::string _target;  // protectedに変更
};

