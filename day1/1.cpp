#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string line; int sum{};
    std::ifstream in("input.txt");
    while (std::getline(in, line)) sum += std::stoi(line);
    std::cout << sum;
}