#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
public:
  RobotomyRequestForm();
  ~RobotomyRequestForm();
  RobotomyRequestForm(const std::string &target);
  RobotomyRequestForm(const RobotomyRequestForm &form);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &s_form);
  void execute(Bureaucrat const &executor) const;
protected:
    std::string _target;
};
