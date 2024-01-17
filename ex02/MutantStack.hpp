#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template< typename T >
class MutantStack : public std::stack<T> {
    public :
        MutantStack( void ) { return; }
        ~MutantStack( void ) { return; }
        MutantStack( const MutantStack& cpy ) { *this = cpy; }
        MutantStack& operator=( const MutantStack& rhs ) {
            (void)rhs;
            return *this;
        }
        
        typedef typename MutantStack<T>::stack::container_type::iterator iterator;
        iterator begin() {
            return this->c.begin();
        }
        iterator end() {
            return this->c.end();
        }

        typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
        const_iterator cbegin() const{
            return this->c.cbegin();
        }
        const_iterator cend() const {
            return this->c.cend();
        }

        typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin() {
            return this->c.rbegin();
        }
        reverse_iterator rend() {
            return this->c.rend();
        }
};

#endif