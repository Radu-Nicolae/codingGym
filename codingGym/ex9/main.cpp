#include <iostream>

using namespace std;

//Caesar's Cipher
/*Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher (check Resources
 * tab for more info) shifts each letter by a number of letters. If the shift takes you past the end of the alphabet,
 * just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Create a function that takes a string s (text to be encrypted) and an integer k (the rotation factor). It should return
an encrypted string.

Example

// m -> o
// i -> k
// d -> f
// d -> f
// l -> n
// e -> g
// -    -
// O -> Q
// u -> w
// t -> v
// z -> b

caesarCipher("Always-Look-on-the-Bright-Side-of-Life", 5)
➞ "Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj"

caesarCipher("A friend in need is a friend indeed", 20)
➞ "U zlcyhx ch hyyx cm u zlcyhx chxyyx"*/

void printCode(string code, int shift){
    char newCode[code.size()];
    for (int i = 0; i <= code.size(); i++){
        if (code[i] > 64 && code[i] < 91){
            if ((code[i] + shift) > 90){
                newCode[i] = code[i] + shift - 65;
            } else {
                newCode[i] = code[i] + shift;
            }
        } else if (code[i] > 96 && code[i] < 123){
            if ((code[i] + shift) > 122){
                newCode[i] = code[i] - 26 + shift;
            } else {
                newCode[i] = code[i] + shift;
            }
        } else {
            newCode[i] = code[i];
        }
    }
    cout << newCode;
}

// w 4
// 119 -> 97
// 97-122 range

int main() {
    string word;
    int shift;

    cout << "Enter the word: ";
    cin >> word;
    cout << "Enter the shift: ";
    cin >> shift;

    printCode(word, shift);
}
