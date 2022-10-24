#include <iostream>
#include <vector>

/*Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
// "p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"*/

std::string tweakLetters (std::string word, std::vector<int> shiftingNumbers){
    for (int i = 0; i < word.size(); ++i) {
        if ((word.at(i) + shiftingNumbers.at(i)) > 'z'){
            word.at(i) = word.at(i) + shiftingNumbers.at(i) - 26;
        } else if ((word.at(i) + shiftingNumbers.at(i)) < 'a'){
            word.at(i) = word.at(i) + shiftingNumbers.at(i) + 26;
        } else {
            word.at(i) = word.at(i) + shiftingNumbers.at(i);
        }
    }

    return word;
}

int main() {
    std::string word;
    std::cout << "Enter the word: ";
    std::cin >> word;

    std::cout << "Enter the shifting: ";
    std::vector<int> shiftingNumbers(word.size());

    for (int i = 0; i < shiftingNumbers.size(); ++i) {
        std::cin >> shiftingNumbers.at(i);
    }

    word = tweakLetters(word, shiftingNumbers);
    std::cout << "The new word is: " << word;
    return 0;
}
