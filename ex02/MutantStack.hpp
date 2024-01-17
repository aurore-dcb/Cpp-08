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

        class iterator {
            public:
                iterator(typename std::deque<T>::iterator it) : _it(it) {}
                iterator& operator++() {
                    ++_it;
                    return *this;
                }
                T& operator*() const {
                    return *_it;
                }
                bool operator!=(const iterator& other) const {
                    return _it != other._it;
                }
            private:
                typename std::deque<T>::iterator _it;
        };
        
        iterator begin() {
            return iterator(_stack.begin());
        }

        iterator end() {
            return iterator(_stack.end());
        }

        class const_iterator {
            public:
                const_iterator(typename std::deque<T>::const_iterator it) : _it(it) {}
                const_iterator& operator++() {
                    ++_it;
                    return *this;
                }
                const T& operator*() const {
                    return *_it;
                }
                bool operator!=(const const_iterator& other) const {
                    return _it != other._it;
                }
            private:
                typename std::deque<T>::const_iterator _it;
        };
        
        const_iterator cbegin() const {
            return const_iterator(_stack.begin());
        }

        const_iterator cend() const {
            return const_iterator(_stack.end());
        }

    private :
        std::deque<T> _stack;
        size_t _size;
};

#endif