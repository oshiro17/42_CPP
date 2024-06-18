#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 50);
        Form formA("FormA", 30, 20);
        Form formB("FormB", 60, 50);
        Form c = formB;

        bob.signForm(formA);  // 失敗するはず
        bob.signForm(c);  // 成功するはず

        std::cout << formA << std::endl;
        std::cout << formB << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
