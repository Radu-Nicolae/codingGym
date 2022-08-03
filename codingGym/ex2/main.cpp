#include <iostream>

using namespace std;

/*
You work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels,
 1 car body, and 2 figures of people to be placed inside. Given the total number of wheels, car bodies and figures available,
 how many complete toy cars can you make?

Examples
cars(2, 48, 76) ➞ 0
// 2 wheels, 48 car bodies, 76 figures

cars(43, 15, 87) ➞ 10

cars(88, 37, 17) ➞ 8
 *
 */

double minOf3Numbers(int n1, int n2, int n3){
    if (n1 <= n2 && n1 <= n3){
        return n1;
    } else if (n2 <= n1 && n2 <= n3){
        return n2;
    }
    return n3;
}

int main() {
    int wheels;
    int bodies;
    int figures;

    cout << "Enter the number of wheels: ";
    cin >> wheels;
    cout << "Enter the number of car bodies: ";
    cin >> bodies;
    cout << "Enter the number of figures: ";
    cin >> figures;

    cout << endl << "there can be built a total number of " << minOf3Numbers(wheels / 4, figures / 2, bodies) << " cars";
}


