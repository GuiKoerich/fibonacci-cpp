#include <vector>
using namespace std;

class Fibonacci {
    private:
        vector<int> fib{1, 1};

        void generate(int length) {
            for(int count = this->fib.size(); count < length; count++) {
                this->fib.push_back(this->fib.at(count - 2) + this->fib.at(count - 1));
            }
        }
    
    public:
        Fibonacci(int length);
        int valueByPosition(int position);
        vector<int> sequence();
        int positionByValue(int value);
        void resize(int lenth);
};