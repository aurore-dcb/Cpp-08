#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template< typename T>
typename T::iterator easyfind(T & container, int n) {

    typename T::iterator it = container.begin();
    typename T::iterator ite = container.end();
    typename T::iterator res = std::find(it, ite, n);
    return res;
}

#endif