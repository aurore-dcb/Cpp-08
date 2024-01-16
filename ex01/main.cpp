#include "Span.hpp"

#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define RESET_COLOR "\033[0m"

int main() {

    std::cout << "# ----- too much numbers ----- #" << std::endl << std::endl;

    try {
        Span s1(3);
        s1.addNumber(0);
        s1.addNumber(0);
        s1.addNumber(0);
        s1.addNumber(0);
    } catch (std::exception& e) {
        std::cout << RED << e.what() << RESET_COLOR << std::endl;
    }

    std::cout << std::endl << "# ----- not enough numbers ----- #" << std::endl << std::endl;

    try {
        Span s2(10);
        s2.addNumber(1);
        s2.shortestSpan();
    } catch (std::exception& e) {
        std::cout << RED << e.what() << RESET_COLOR << std::endl;
    }

    std::cout << std::endl << "# ----- longest/shortest numbers ----- #" << std::endl << std::endl;

    try {
        Span s3 = Span(5);
        s3.addNumber(6);
        s3.addNumber(3);
        s3.addNumber(17);
        s3.addNumber(9);
        s3.addNumber(11);
        std::cout << s3.shortestSpan() << std::endl;
        std::cout << s3.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << RED << e.what() << RESET_COLOR << std::endl;
    }

    std::cout << std::endl << "# ----- big one ----- #" << std::endl << std::endl;

    try {
        Span s4(100);
        s4.fillSpan(200, 0 , 9);
    } catch (std::exception& e) {
        std::cout << RED << e.what() << RESET_COLOR << std::endl;
    }

    std::cout << std::endl << "# --------------- #" << std::endl << std::endl;

    try {
        unsigned int size = 20000;
        Span big(size);
        big.fillSpan(size, 0, 100);
        // for (unsigned int i = 900 ; i < 1000 ; i++) {
        //     std::cout << big.getElem(i) << " | ";
        // }
        // std::cout << std::endl << std::endl;
        std::cout << big.shortestSpan() << std::endl;
        std::cout << big.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << RED << e.what() << RESET_COLOR << std::endl;
    }

}
