#include <iostream>

namespace custom {
    void greet() {
        std::cout << "Hello from custom namespace!" << std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    custom::greet();
    return 0;
}