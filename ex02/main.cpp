#include "MutantStack.hpp"

int main() {

    MutantStack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    std::cout << "Contenu de MutantStack : ";
    for (MutantStack<int>::const_iterator it = s.cbegin(); it != s.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    s.pop();

    std::cout << "Contenu de MutantStack : ";
    for (MutantStack<int>::const_iterator it = s.cbegin(); it != s.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return (0);
}