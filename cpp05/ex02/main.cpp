#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
    try {
        // Bureaucrats
        Bureaucrat alice("Alice", 1);
        Bureaucrat bob("Bob", 50);
        Bureaucrat charlie("Charlie", 150);

        // Forms
        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Bob");
        PresidentialPardonForm pardonForm("Alice");

        std::cout << std::endl;

        // Test ShrubberyCreationForm
        std::cout << "Testing ShrubberyCreationForm:" << std::endl;
        std::cout << shrubberyForm << std::endl;
        charlie.signForm(shrubberyForm);
        charlie.executeForm(shrubberyForm);
        bob.signForm(shrubberyForm);
        bob.executeForm(shrubberyForm);
        std::cout << std::endl;

        // Test RobotomyRequestForm
        std::cout << "Testing RobotomyRequestForm:" << std::endl;
        std::cout << robotomyForm << std::endl;
        bob.signForm(robotomyForm);
        bob.executeForm(robotomyForm);
        alice.signForm(robotomyForm);
        alice.executeForm(robotomyForm);
        std::cout << std::endl;

        // Test PresidentialPardonForm
        std::cout << "Testing PresidentialPardonForm:" << std::endl;
        std::cout << pardonForm << std::endl;
        alice.signForm(pardonForm);
        alice.executeForm(pardonForm);
        bob.signForm(pardonForm);
        bob.executeForm(pardonForm);
        std::cout << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
        try {
        // Bureaucrat with too high grade
        Bureaucrat alice("Alice", 0);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
        try {
        // Bureaucrats
        Bureaucrat alice("Alice", 1);
        Bureaucrat charlie("Charlie", 150);

        // Forms
        ShrubberyCreationForm shrubberyForm("Home");

        std::cout << std::endl;

        // Test ShrubberyCreationForm without signing
        std::cout << "Testing ShrubberyCreationForm without signing:" << std::endl;
        charlie.executeForm(shrubberyForm); // ここで例外が発生
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
        try {
        // Bureaucrats
        Bureaucrat alice("Alice", 1);

        // Forms
        ShrubberyCreationForm shrubberyForm("/invalid/path/Home"); // ここで例外が発生する可能性

        std::cout << std::endl;

        // Test ShrubberyCreationForm
        std::cout << "Testing ShrubberyCreationForm:" << std::endl;
        alice.signForm(shrubberyForm);
        alice.executeForm(shrubberyForm); 
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }



    return 0;
}
