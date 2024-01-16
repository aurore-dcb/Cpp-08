#include "easyfind.hpp"

int main() {

    {
        /* VECTOR */
        std::cout << "# ----- Vector ----- #" << std::endl << std::endl;

        std::vector<int> nums;
        nums.push_back(10);
        nums.push_back(20);
        nums.push_back(30);
        nums.push_back(40);
        std::vector<int>::iterator res = easyfind(nums, 40);
        if (res != nums.end()) {
            std::cout << "The element was found at the position " << std::distance(nums.begin(), res) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
        std::vector<int>::iterator res2 = easyfind(nums, 0);
        if (res2 != nums.end()) {
            std::cout << "The element was found at the position " << std::distance(nums.begin(), res2) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
    }
    {
        /* LIST */
        std::cout << std::endl << "# ------ List ------ #" << std::endl << std::endl;

        std::list<int> lst;
        lst.push_back('a');
        lst.push_back('b');
        lst.push_back('c');
        std::list<int>::iterator res = easyfind(lst, 97);
        if (res != lst.end()) {
            std::cout << "The element was found at the position " << std::distance(lst.begin(), res) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
        std::list<int>::iterator res2 = easyfind(lst, 'b');
        if (res2 != lst.end()) {
            std::cout << "The element was found at the position " << std::distance(lst.begin(), res2) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
        std::list<int>::iterator res3 = easyfind(lst, 100);
        if (res3 != lst.end()) {
            std::cout << "The element was found at the position " << std::distance(lst.begin(), res3) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
    }
    {
        /* STACK */
        std::cout << std::endl << "# ------ Stack ------ #" << std::endl << std::endl;

        std::deque<int> q;
        q.push_back(-100);
        q.push_back(-1000);
        q.push_back(-10);
        std::deque<int>::iterator res = easyfind(q, -10);
        if (res != q.end()) {
            std::cout << "The element was found at the position " << std::distance(q.begin(), res) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
        std::deque<int>::iterator res2 = easyfind(q, 0);
        if (res2 != q.end()) {
            std::cout << "The element was found at the position " << std::distance(q.begin(), res2) << std::endl;
        } else {
            std::cout << "Element not found" << std::endl;
        }
    }
    return 0;
}