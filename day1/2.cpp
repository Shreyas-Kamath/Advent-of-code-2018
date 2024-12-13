#include <iostream>
#include <string>
#include <fstream>
#include <unordered_set>

int main() {
    std::string line; int sum{};
    std::ifstream in("sample.txt"); std::unordered_set<int> unique;
    while (std::getline(in, line)) {
        sum += std::stoi(line);
        if (unique.contains(sum)) break;
        else unique.insert(sum);
        }
    std::cout << sum;
}