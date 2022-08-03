#include <iostream>

using namespace std;

//Create a function that takes an array and finds the integer which appears an odd number of times.
//
//Examples
//findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1
//
//findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5
//
//findOdd([10]) ➞ 10
//Notes
//There will always only be one integer that appears an odd number of times.



int main() {
    cout << "How many elements will you enter in the array? Your answer:";
    int size, element;
    cin >> size;
    int arr[size], emptyArray[size];


    for (int i = 0; i < size; ++i) {
        cout << "Enter the element number " << i << ": ";
        cin >> element;
        arr[i] = element;
    }

    int i = 0;
    int counter = 0;
    do {
        counter = 0;
        element = arr[i];
        for (int j = 0; j < size; ++j) {
            if (arr[j] == element){
                counter++;
            }
        }
        if (counter % 2 == 0) break;
        i++;
    } while (true);

    if (counter == 0){
        cout << "there is no such number";
        return 0;
    }
    cout << "the number is " << element;

}
