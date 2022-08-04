#include <iostream>
#include <math.h>

using namespace std;

//Create a function to find only the root value of x in any quadratic equation ax^2 + bx + c. The function will take three arguments:
//
//a as the coefficient of x^2
//b as the coefficient of x
//c as the constant term

// Notes
//Quadratic equation is always guaranteed to have a root.
//Check the Resources tab for more information on quadratic equations.
//Calculate only the root that sums the square root of the discriminant, not the one that subtracts it.
//Round the value / return only integer value.

double getSumRoot(int a, int b, int c){
    int delta = b*b - 4 * a * c;

    return ((b * -1 + sqrt(delta)) / 2 * a);

}

int main() {
    //ax^2 + bx + c
    cout << "The equation looks like: ax^2 + bx + c" << endl;
    int a, b, c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    cout << endl << "The result is " << getSumRoot(a, b, c);
}
