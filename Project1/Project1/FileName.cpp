#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void removeDuplicates(std::vector<T>& vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

int main() {
    std::vector<int> numbers = { 1, 1, 3, 1, 4, 2, 5, 6, 3, 7 };

    std::cout << "Before removing duplicates:" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    removeDuplicates(numbers);

    std::cout << "After removing duplicates:" << std::endl;
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}