#include <iostream>

using namespace std;

//Message from Space
//        You have received an encrypted message from space. Your task is to decrypt the message with the following simple rules:
//
//Message string will consist of capital letters, numbers, and brackets only.
//When there's a block of code inside the brackets, such as [10AB], it means you need to repeat the letters AB for 10 times.
//Message can be embedded in multiple layers of blocks.
//Final decrypted message will only consist of capital letters.
//Create a function that takes encrypted message str and returns the decrypted message.
//
//Examples
//        spaceMessage("ABCD") ➞ "ABCD"
//
//spaceMessage("AB[3CD]") ➞ "ABCDCDCD"
//// "AB" = "AB"
//// "[3CD]" = "CDCDCD"
//
//spaceMessage("IF[2E]LG[5O]D") ➞ "IFEELGOOOOOD"

string getMessage(){
    cout << "Enter the message: ";
    string message;
    cin >> message;
    return message;
}

int main() {
    string message = getMessage();
    string newMessage = "";

    int i = 0;

    //IF[2E]LG[5O]D"

    while (i < (message.size())){
        while (message[i] != '[' && i < message.size()){if (message[i] == ']') break;
            newMessage += message[i];
            i++;
        }
        if (i == message.size()) break;
        char charNo = message[i+1];

        int number = 0;
        i++;
        while (message[i] >= 48 && message[i] <= 57){
            number = number * 10 + (message[i] - 48);
            i++;
        }


        string toBeCopied;
        int j = 0;
        while (message[i] != ']'){
            toBeCopied += message[i];
            j++;
            i++;
        }
        while (number > 0){
            newMessage += toBeCopied;
            number--;
        }
        if (message[i] == ']'){
            i++;
        }

    }

    cout << newMessage;
}
