#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>

class Span {
    public :
        Span( unsigned int N );
        ~Span( void );
        Span( const Span& cpy );
        Span& operator=( const Span& rhs );

        void addNumber( int num );
        void fillSpan( unsigned int n, int inf, int sup );
        unsigned int shortestSpan( void );
        unsigned int longestSpan( void );

        class ExceptionCapacity : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Maximum capacity reached";
                }
        };

        class ExceptionNoDistance : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Distance can't be find";
                }
        };

        int getElem(unsigned int index);

    private :
        unsigned int _N;
        std::vector<int> _numbers;
};

#endif