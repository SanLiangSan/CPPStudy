#include <iostream>
#include <vector>
#include <string>

// 简单的加法函数
int add(int a, int b) {
    return a + b;
}

// 打印字符串数组内容
void printVector(const std::vector<std::string>& items) {
    std::cout << "Items in vector: ";
    for (const auto& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "=== Hello, VS Code C++ Demo on macOS! ===" << std::endl;

    int x = 5;
    int y = 7;
    std::cout << "Sum of " << x << " + " << y << " = " << add(x, y) << std::endl;

    std::vector<std::string> fruits = {"Apple", "Banana", "Cherry"};
    printVector(fruits);

    std::cout << "Program executed successfully ✅" << std::endl;
    return 0;
}
