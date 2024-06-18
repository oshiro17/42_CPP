#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("Bob");
        std::cout << b << std::endl;
        b.upGrade();
        std::cout << b << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	try {
        Bureaucrat ob( 1);
        std::cout << ob << std::endl;
        ob.upGrade();
        std::cout << ob << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	try {
        Bureaucrat bob("Bob", 1);
        std::cout << bob << std::endl;
        bob.upGrade();
        std::cout << bob << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat alice("Alice", 150);
        std::cout << alice << std::endl;
        alice.downGrade();
        std::cout << alice << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidHigh("InvalidHigh", 0);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidLow("InvalidLow", 151);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
