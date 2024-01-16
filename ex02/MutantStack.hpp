#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <algorithm>
#include <deque>
#include <ostream>
#include <iostream>

template< typename T >
class MutantStack {
    public :
        MutantStack( void ) : _size(0) {}
        ~MutantStack( void ) {}
        MutantStack( const MutantStack& cpy ) {
            *this = cpy;
        }
        MutantStack& operator=( const MutantStack& rhs ) {
            if (this != &rhs) {
                _size = rhs._size;
                _stack = rhs._stack;
            }
            return *this;
        }

        /*top : accesses the top element*/
        void top() {
            std::cout << _stack.back() << std::endl;
        }

        /*empty : checks whether the container adaptor is empty*/
        bool empty() {
            return _stack.empty();
        }

        /*size : returns the number of elements*/
        size_t size() {
            return _stack.size();
        }

        /*push : inserts element at the top*/
        void push(const T& value) {
            _stack.push_back(value);
        }

        /*pop : removes the top element*/
        void pop() {
            _stack.pop_back();
        }

        // ajouter des iterateurs
        // typename container_type::iterator begin() {
        //     return stackContainer.begin();
        // }

    private :
        std::deque<T> _stack;
        size_t _size;
};


// template< typename T >
// std::ostream& operator<<(const std::ostream& os, const MutantStack<T>& rhs) {

//     for (size_t i = 0 ; i < rhs._size ; i++) {
//         os << "elem: " << rhs.
//     }
//     return os;
// }


#endif