#include "MutantStack.hpp"

int main() {

    MutantStack<int> s;
    std::cout << "len: " << s.size() << std::endl;
    std::cout << "empty: " << s.empty() << std::endl;
    s.push(12);
    s.push(2);
    s.push(1);
    s.top();
    s.push(123);
    std::cout << "len: " << s.size() << std::endl;
    s.top();
    s.pop();
    std::cout << "len: " << s.size() << std::endl;
    s.top();
    std::cout << "empty: " << s.empty() << std::endl;

    return (0);
}