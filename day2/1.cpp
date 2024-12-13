#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

bool has_2(const std::unordered_map<char, int>& tracker){
    for (auto& pair: tracker){
        if (pair.second == 2) return true;
    }
    return false;
}

bool has_3(const std::unordered_map<char, int>& tracker){
    for (auto& pair: tracker){
        if (pair.second == 3) return true;
    }
    return false;
}

int main() {
    int count_2{}; int count_3{};
    std::ifstream in ("data.txt");
    std::vector<std::string> vec;
    std::string line;

    while (std::getline(in, line)){
        vec.push_back(line);
    }
    in.close();

    for (const std::string& sequence: vec){
        std::unordered_map<char, int> tracker;
        for (const char& ch : sequence){
            tracker[ch]++;
        }
        if (has_2(tracker)) count_2++;
        if (has_3(tracker)) count_3++;        
    }
    std::cout << count_2 * count_3;
}