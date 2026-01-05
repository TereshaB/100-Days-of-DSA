#include <iostream>
#include <vector>
#include <algorithm>

// Divide and Conquer helper function
int findMaxDivideConquer(const std::vector<int>& arr, int left, int right) {
    // Base case: only one element
    if (left == right) {
        return arr[left];
    }
    
    // Base case: two elements
    if (right == left + 1) {
        return std::max(arr[left], arr[right]);
    }
    
    // Divide: find middle point
    int mid = left + (right - left) / 2;
    
    // Conquer: recursively find max in left and right halves 
    int maxLeft = findMaxDivideConquer(arr, left, mid);
    int maxRight = findMaxDivideConquer(arr, mid + 1, right);
    
    // Combine: return the maximum of both halves
    return std::max(maxLeft, maxRight);
}

// Main function to find maximum element
int findMaximum(const std::vector<int>& arr) {
    if (arr.empty()) {
        throw std::runtime_error("Array is empty!");
    }
    return findMaxDivideConquer(arr, 0, arr.size() - 1);
}

int main() {
    // Test array with numbers
    std::vector<int> numbers = {12, 35, 1, 10, 34, 99, 23, 45, 67, 88, 15, 7};
    
    std::cout << "Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    try {
        int maximum = findMaximum(numbers);
        std::cout << "Maximum element: " << maximum << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    // Additional test cases
    std::cout << "\n--- Additional Test Cases ---\n";
    
    // Single element
    std::vector<int> single = {42};
    std::cout << "Single element array {42}: " << findMaximum(single) << std::endl;
    
    // Negative numbers
    std::vector<int> negative = {-5, -2, -10, -1, -8};
    std::cout << "Negative numbers array: " << findMaximum(negative) << std::endl;
    
    // Large array
    std::vector<int> large = {100, 50, 200, 75, 150, 250, 125};
    std::cout << "Large numbers array: " << findMaximum(large) << std::endl;
    
    return 0;
}