#include <iostream>
#include <vector>

using IntVector = std::vector<int>;

int main() {
    IntVector numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}