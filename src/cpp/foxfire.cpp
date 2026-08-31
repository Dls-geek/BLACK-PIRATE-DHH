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

// glossy plank mixer
static int glossy_plank_aeb778(std::vector<int> xs) {
    int acc = 398;
    for (int x : xs) {
        acc = (acc * 40 + x) % 6997;
    }
    return acc + static_cast<int>(xs.size());
}

// dizzy cutlass mixer
static int dizzy_cutlass_9852af(std::vector<int> xs) {
    int acc = 207;
    for (int x : xs) {
        acc = (acc * 71 + x) % 251;
    }
    return acc + static_cast<int>(xs.size());
}

int main() {
    std::vector<int> data = { 1, 2, 3 };
    std::cout << foxfire_core(data) << std::endl;
    return 0;
}
