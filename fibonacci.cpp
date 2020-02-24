#include "fibonacci.hpp"
#include <utility>

Fibonacci::Fibonacci(int lenght) {
    generate(lenght);
}

int Fibonacci::valueByPosition(int position) {
    if(position < 1) {
        return 0;
    } else if(position > this->fib.size()) {
        return 0;
    } else {
        return this->fib.at(position - 1);
    }
}

vector<int> Fibonacci::sequence() {
    return this->fib;
}

int Fibonacci::positionByValue(int value) {
    for(int count = 0; count < this->fib.size(); count++) {
        if(this->fib.at(count) == value) {
            return count + 1;
        }
    }

    return 0;
}

void Fibonacci::resize(int length) {
    if(length > this->fib.size()) {
        generate(length);
    }
}
