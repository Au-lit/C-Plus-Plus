/* C++ implementation Odd Even Sort */
#include <iostream>
#include <vector>

void oddEven(vector<int>& arr) {
    bool sorted = false;
    int size = arr.size();
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < size - 1; i += 2)  // Odd
        {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }

        for (int i = 0; i < size - 1; i += 2)  // Even
        {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
    }
}

void show(const std::vector<int>& arr) {
    std::cout << '[';
    for (const auto& i : arr) std::cout << i << ", ";
    std::cout << ']';
}

int main() {
    int size = 0;
    int temp = 0;
    std::cout << "\nEnter the number of elements : ";
    std::cin >> size;

    std::vector<int> arr;

    std::cout << "\nEnter the unsorted elements : \n";

    for (int i = 0; i < size; ++i) {
        std::cin >> temp;
        arr.push_back(temp);
    }

    oddEven(arr);

    std::cout << "Sorted array\n";
    show(arr);
}
