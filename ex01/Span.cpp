#include "Span.hpp"
#include <ctime>

Span::Span(unsigned int N) : _N(N) { }

Span::~Span(void) { }

Span::Span(const Span& cpy) {

    *this = cpy;
}

Span& Span::operator=( const Span& rhs ) {

    _N = rhs._N;
    return *this;
}

void Span::addNumber(int num) {

    if (_numbers.size() < _N) {
        _numbers.push_back(num);
    } else {
        throw ExceptionCapacity();
    }
}

unsigned int Span::shortestSpan(void) {

    if (_numbers.size() < 2) {
        throw ExceptionNoDistance();
    }
    std::sort(_numbers.begin(), _numbers.end());
    int diff = _numbers[1] - _numbers[0];
    for (size_t i = 0 ; i < _numbers.size() - 1 ; i++) {
        if (_numbers[i+1] - _numbers[i] < diff)
            diff = _numbers[i+1] - _numbers[i];
    }
    return diff;
}

unsigned int Span::longestSpan(void) {

    if (_numbers.size() >= 2) {
        std::sort(_numbers.begin(), _numbers.end());
        return _numbers[_numbers.size() - 1] - _numbers[0]; 
    }
    throw ExceptionNoDistance();
}

void Span::fillSpan(unsigned int n, int inf, int sup) {

    if (_numbers.size() + n > _N) {
        throw ExceptionCapacity();
    }
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    for (unsigned int j = 0 ; j < n ; j++) {
        _numbers.push_back(inf + std::rand() % (sup - inf + 1));
    }
}

int Span::getElem(unsigned int index) {

    if (index >= 0 && index < _numbers.size()) {
        return (_numbers[index]);
    }
    throw std::out_of_range("Index out of range");
}
