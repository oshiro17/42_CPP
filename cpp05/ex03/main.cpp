#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
  Intern i1;
  Intern i2(i1);
  Intern i3;
  i3 = i2;

  std::string formName1 = "shrubbery creation";
  std::string formName2 = "robotomy request";
  std::string formName3 = "presidential pardon";
  std::string formName4 = "unknown form";
  std::cout << "Index of " << formName1 << ": " << i1.getFormIdx(formName1) << std::endl;
  std::cout << "Index of " << formName2 << ": " << i1.getFormIdx(formName2) << std::endl;
  std::cout << "Index of " << formName3 << ": " << i1.getFormIdx(formName3) << std::endl;
  std::cout << "Index of " << formName4 << ": " << i1.getFormIdx(formName4) << std::endl;
  std::cout << std::endl;
  std::cout << "Index of " << formName1 << ": " << i3.getFormIdx(formName1) << std::endl;
  std::cout << "Index of " << formName2 << ": " << i3.getFormIdx(formName2) << std::endl;
  std::cout << "Index of " << formName3 << ": " << i3.getFormIdx(formName3) << std::endl;
  std::cout << "Index of " << formName4 << ": " << i3.getFormIdx(formName4) << std::endl;
  std::cout << std::endl;
  AForm *form1 = i1.makeForm("shrubbery creation", "Home");
    if (form1) {
        std::cout << *form1 << std::endl;
        delete form1;
    }
    AForm *form2 = i1.makeForm("robotomy request", "Bob");
    if (form2) {
        std::cout << *form2 << std::endl;
        delete form2;
    }
    AForm *form3 = i1.makeForm("presidential pardon", "Alice");
    if (form3) {
        std::cout << *form3 << std::endl;
        delete form3;
    }
    AForm *form4 = i1.makeForm("unknown form", "Unknown");
    if (form4) {
        std::cout << *form4 << std::endl;
        delete form4;
    }
    std::cout << std::endl;

    return 0;
}