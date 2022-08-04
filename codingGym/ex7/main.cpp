#include <iostream>
#include <cmath>

using namespace std;

/*Given an integer, create a function that returns the next prime. If the number is prime, return the number itself.

Examples
        nextPrime(12) ➞ 13

nextPrime(24) ➞ 29

nextPrime(11) ➞ 11
// 11 is a prime, so we return the number itself.
Notes
        Note: 1 is not a prime.*/

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

    bool hasDivisors;
    int copyNumber = number;
    int copy;
    int divisor;

    while (true){
        copyNumber = number;
        divisor = 2;
        hasDivisors = false;
        while (divisor <= number / 2){
            if (copyNumber % divisor == 0){
                hasDivisors = true;
                break;
            } else {
                divisor++;
            }
        }

        if (!hasDivisors){
            cout << "The number is " << number;
            break;
        }
        number = copyNumber;
        number++;
    }
}