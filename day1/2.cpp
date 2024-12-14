#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <unordered_set>

int main() {
    std::string line;
    std::ifstream in("input.txt"); std::vector<int> vec;

    while (std::getline(in, line)) vec.push_back(stoi(line));

    int sum{}; bool exit{false};

    std::unordered_set<int> seen;

    while (!exit){
        for (const int& num: vec){
            sum += num;
            if (seen.contains(sum)){
                exit = true;
                break;
            }
            else seen.insert(sum);
        }
    }

    std::cout << sum;
}