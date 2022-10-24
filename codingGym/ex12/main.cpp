#include <iostream>
#include <vector>

/*In recreational mathematics, a square array of numbers, usually positive integers, is called a magic square if the
 * sums of the numbers in each row, each column, and both main diagonals are the same.

Create a function that takes a square 2D array as an argument and returns a Boolean
 (if it is: true, if it isn't: false).*/

/*isMagicSquare([
[2, 7, 6],
[9, 5, 1],
[4, 3, 8]
]) ➞ true*/

int getMainDiagonalSum(std::vector<std::vector<int>> arr){
    int diagSum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        diagSum += arr.at(i).at(i);
    }

    return diagSum;
}

int getSecondDiagonalSum(std::vector<std::vector<int>> arr){
    int diagSum = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        diagSum += arr.at(i).at(i);
    }

    return diagSum;
}

int getColumnSum(std::vector<std::vector<int>> arr, int colIndex){
    int sum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        sum += arr.at(i).at(colIndex);
    }

    return sum;
}

int getRowSum(std::vector<std::vector<int>> arr, int rowIndex){
    int sum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        sum += arr.at(rowIndex).at(i);
    }

    return sum;
}

bool isMagicSquare(std::vector<std::vector<int>> arr){
    int mainSum = 0;

    //finding the main sum (any sum of the columns from the array)
    if (!arr.empty()){
        for (int i = 0; i < arr.size(); ++i) {
            mainSum += arr.at(0).at(i);
        }
    } else {
        return true;
    }

    //comparing rows and columns with the mainSum
    for (int i = 0; i < arr.size(); ++i) {
        if (getRowSum(arr, i) != mainSum){
            return false;
        }
        if (getColumnSum(arr, i) != mainSum){
            return false;
        }
    }

    //comparing the diagonals with the mainSum
    if (getMainDiagonalSum(arr) != mainSum || getSecondDiagonalSum(arr) != mainSum){
        return false;
    }

    return true;
}

void printVector(std::vector<std::vector<int>> arr){
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr.at(i).size(); ++j) {
            std::cout << arr.at(i).at(j) << "  ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> numbers;
    std::cout << "Enter the size of the vector: ";
    int vecSize, numInput;
    std::cin >> vecSize;

    std::vector<int> tempVector;

    for (int i = 0; i < vecSize; ++i) {
        tempVector.clear();
        std::cout << "Enter the column number " << i + 1 << ": ";
        for (int j = 0; j < vecSize; ++j) {
            std::cin >> numInput;
            tempVector.push_back(numInput);
        }
        numbers.push_back(tempVector);
        std::cout << "Your temp vector: " << std::endl;
        printVector(numbers);
    }

    std::cout << isMagicSquare(numbers);
    return 0;
}
