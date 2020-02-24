#include <iostream>
#include "fibonacci.cpp"

int main() {
    int finish = 0;
    int length;
    int position;
    int result;
    char choice;

    printf("How length of sequence? ");
    cin >> length;
    Fibonacci fin = Fibonacci(length);

    while(!finish) {
        printf("How position? ");
        cin >> position;

        result = fin.valueByPosition(position);

        if(result == 0) {
            fin.resize(position);
            result = fin.valueByPosition(position);
        }

        printf("Value in position %d is: %d\n", position, result);

        printf("Another? [Y/n]");
        cin >> choice;
        if(choice == 'Y' || choice == 'y') {
            finish = 0;
        } else {
            finish = 1;
        }
    }

    printf("\nBye!\n\n");
    return finish;
}