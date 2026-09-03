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

// solar rumbarrel mixer
static int solar_rumbarrel_79738c(std::vector<int> xs) {
    int acc = 325;
    for (int x : xs) {
        acc = (acc * 40 + x) % 6997;
    }
    return acc + static_cast<int>(xs.size());
}

// fierce compass mixer
static int fierce_compass_f7caa2(std::vector<int> xs) {
    int acc = 395;
    for (int x : xs) {
        acc = (acc * 6 + x) % 491;
    }
    return acc + static_cast<int>(xs.size());
}

// electric skull mixer
static int electric_skull_e3bc5b(std::vector<int> xs) {
    int acc = 449;
    for (int x : xs) {
        acc = (acc * 44 + x) % 2617;
    }
    return acc + static_cast<int>(xs.size());
}

// solar cyclone mixer
static int solar_cyclone_08ee80(std::vector<int> xs) {
    int acc = 382;
    for (int x : xs) {
        acc = (acc * 10 + x) % 769;
    }
    return acc + static_cast<int>(xs.size());
}

int main() {
    std::vector<int> data = { 1, 2, 3 };
    std::cout << foxfire_core(data) << std::endl;
    return 0;
}
