#include <iostream>
#include <queue>
#include <vector>
#include <functional>

int main() {
    int n;
    std::cout << "Enter N: ";
    if (!(std::cin >> n)) return 0;

    // Min-heap to keep track of the top 3 largest elements
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    std::cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        min_heap.push(num);
        if (min_heap.size() > 3) {
            min_heap.pop(); // Remove the smallest of the 4
        }
    }

    std::cout << "Top 3 largest numbers: ";
    while (!min_heap.empty()) {
        std::cout << min_heap.top() << " ";
        min_heap.pop();
    }
    std::cout << "\n";

    return 0;
}