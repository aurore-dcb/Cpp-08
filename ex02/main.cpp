#include "MutantStack.hpp"

int main() {

    MutantStack<int> s;
    std::cout << std::boolalpha << "empty: " << s.empty() << std::endl;
    std::cout << "... push ..." << std::endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    std::cout << std::boolalpha << "empty: " << s.empty() << std::endl << std::endl;

    std::cout << "Content of MutantStack: ";
    for (MutantStack<int>::iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "top: " << s.top() << std::endl;
    std::cout << "... pop ..." << std::endl;
    s.pop();
    std::cout << "top: " << s.top() << std::endl;

    std::cout << std::endl << "... push ..." << std::endl;
    s.push(101);
    s.push(120);
    std::cout << "Content of MutantStack: ";
    for (MutantStack<int>::iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "size: " << s.size() << std::endl;

    return (0);
}

// #include <list>

// int main()
// {
//     {
//         MutantStack<int> mstack;
//         mstack.push(5);
//         mstack.push(17);
//         std::cout << mstack.top() << std::endl;
//         mstack.pop();
//         std::cout << mstack.size() << std::endl;
//         mstack.push(3);
//         mstack.push(5);
//         mstack.push(737);
//         //[...]
//         mstack.push(0);
//         MutantStack<int>::iterator it = mstack.begin();
//         MutantStack<int>::iterator ite = mstack.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std::endl;
//             ++it;
//         }
//         std::stack<int> s(mstack);
//     }
//     {
//         std::list<int> mstack;
//         mstack.push_back(5);
//         mstack.push_back(17);
//         std::cout << mstack.back() << std::endl;
//         mstack.pop_back();
//         std::cout << mstack.size() << std::endl;
//         mstack.push_back(3);
//         mstack.push_back(5);
//         mstack.push_back(737);
//         //[...]
//         mstack.push_back(0);
//         std::list<int>::iterator it = mstack.begin();
//         std::list<int>::iterator ite = mstack.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std::endl;
//             ++it;
//         }
//         std::list<int> s(mstack);
//     }
// }