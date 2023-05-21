#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 3};
    std::vector<int> v2 = {2};

    std::vector<int> merged(v1.size() + v2.size());

    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), merged.begin());

    for (int i : merged) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
