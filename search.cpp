#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == target) {
            return mid; // Element found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Element not found
}

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int targetElement = 5;
    int result = binary_search(myVector, targetElement);

    if (result != -1) {
        std::cout << "Element " << targetElement << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Element " << targetElement << " not found in the vector." << std::endl;
    }

    return 0;
}
