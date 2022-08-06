#include <iostream>
using namespace std;

/*Create a function that takes a string and returns the first character that repeats. If there is no repeat of a character, return "0".

Examples
        firstRepeat("legolas") ➞ "l"

firstRepeat("Gandalf") ➞ "a"

firstRepeat("Balrog") ➞ "0"

firstRepeat("Isildur") ➞ "0"
// Case sensitive "I" not equal to "i"*/


char firstRepeat(std::string input){
    char letter;
    bool didFound;
    for (int i = 0; i < input.size(); ++i) {
        letter = input[i];
        didFound = false;
        for (int j = (i + 1); j < input.size(); ++j) {
            if (input[j] == letter){
                didFound = true;
                break;
            }
        }
        if (didFound){
            break;
        }
    }

    if (didFound){
        return letter;
    } else {
        return '0';
    }
}

int main() {
    string userInput;
    cin >> userInput;

    cout << firstRepeat(userInput);

    return 0;
}
