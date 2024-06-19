#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
  Intern();
  Intern(const Intern &j);
  ~Intern();

  Intern &operator=(const Intern &);
  int getFormIdx(const std::string &);
  AForm *makeForm(const std::string,const std::string);
};