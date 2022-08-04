#include <iostream>

using namespace std;

//Create a function that creates a box based on dimension n.
//
//Examples
//        makeBox(5) ➞ [
//"#####",
//"#   #",
//"#   #",
//"#   #",
//"#####"
//]
//
//makeBox(3) ➞ [
//"###",
//"# #",
//"###"
//]
//
//makeBox(2) ➞ [
//"##",
//"##"
//]
//
//makeBox(1) ➞ [
//"#"
//]

void printFullLine(int size){
    for (int i = 0; i < size; ++i) {
        cout << "#";
    }
}

void printContent(int size){
    cout << endl;
    for (int i = 0; i < size - 2; ++i) {
        cout << "#";
        for (int j = 0; j < size - 2; ++j) {
            cout << " ";
        }
        cout << "#" << endl;
    }
}

int main() {
    int size;
    cout << "enter the size of the box: ";
    cin >> size;

    if (size > 1) {
        printFullLine(size);

        printContent(size);

        printFullLine(size);
    } else if (size == 1){
        cout << "#";
    } else {
        cout << "Error";
    }
}
