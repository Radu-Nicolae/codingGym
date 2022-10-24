#include <iostream>
#include <vector>

/*Making a Box
        makeBox(5) ➞ [
"#####",
"#   #",
"#   #",
"#   #",
"#####"
]

makeBox(3) ➞ [
"###",
"# #",
"###"
]*/

void printBox(int size){
    for (int i = 0; i < size; ++i) {
        std::cout << "#";
    }
    std::cout << std::endl;
    for (int i = 0; i < size - 2; ++i) {
        std::cout << "#";
        for (int j = 0; j < size - 2; ++j) {
            std::cout << " ";
        }
        std::cout << "#";
        std::cout << std::endl;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << "#";
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the box: ";
    std::cin >> size;

    printBox(size);

    return 0;
}
