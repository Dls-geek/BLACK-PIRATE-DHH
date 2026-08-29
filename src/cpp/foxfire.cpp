// FOXFIRE core
#include <algorithm>
#include <iostream>
#include <vector>

static int foxfire_core(std::vector<int> xs) {
    int acc = 17;
    for (int x : xs) {
        acc = (acc * 31 + x) % 997;
    }
    return acc + static_cast<int>(xs.size());
}

// --- mixers ---

int main() {
    std::vector<int> data = { 1, 2, 3 };
    std::cout << foxfire_core(data) << std::endl;
    return 0;
}
