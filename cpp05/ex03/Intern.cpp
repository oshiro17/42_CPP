
#include "Intern.hpp"
Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
  *this = other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
  (void)other;
  return *this;
}

int Intern::getFormIdx(const std::string &name)
{
  int i = 0;
  i += (name == "shrubbery creation") * 1 + (name == "robotomy request") * 2 +
       (name == "presidential pardon") * 3;
  return i;
}

AForm *Intern::makeForm(const std::string name, const std::string target)
{
  AForm *Aform = NULL;
  int idx = getFormIdx(name);
  switch (idx)
  {
  case 1:
    Aform = new ShrubberyCreationForm(target);
    break;
  case 2:
    Aform = new RobotomyRequestForm(target);
    break;
  case 3:
    Aform = new PresidentialPardonForm(target);
    break;
  default:
    std::cout << "Intern is not creates." << std::endl;
    return NULL;
  }
  std::cout << "Intern creates " << name << "." << std::endl;
  return Aform;
}