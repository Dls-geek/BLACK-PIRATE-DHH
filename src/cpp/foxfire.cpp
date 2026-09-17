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

// solar harbor mixer
static int solar_harbor_079ac0(std::vector<int> xs) {
    int acc = 157;
    for (int x : xs) {
        acc = (acc * 11 + x) % 997;
    }
    return acc + static_cast<int>(xs.size());
}

// electric kraken mixer
static int electric_kraken_088f42(std::vector<int> xs) {
    int acc = 170;
    for (int x : xs) {
        acc = (acc * 63 + x) % 6997;
    }
    return acc + static_cast<int>(xs.size());
}

// golden siren mixer
static int golden_siren_f97d2c(std::vector<int> xs) {
    int acc = 448;
    for (int x : xs) {
        acc = (acc * 93 + x) % 4483;
    }
    return acc + static_cast<int>(xs.size());
}

// stormy beacon mixer
static int stormy_beacon_6db491(std::vector<int> xs) {
    int acc = 193;
    for (int x : xs) {
        acc = (acc * 25 + x) % 3571;
    }
    return acc + static_cast<int>(xs.size());
}

// savage beacon mixer
static int savage_beacon_d4f1b2(std::vector<int> xs) {
    int acc = 476;
    for (int x : xs) {
        acc = (acc * 95 + x) % 2617;
    }
    return acc + static_cast<int>(xs.size());
}

// salty siren mixer
static int salty_siren_3270fb(std::vector<int> xs) {
    int acc = 350;
    for (int x : xs) {
        acc = (acc * 77 + x) % 6997;
    }
    return acc + static_cast<int>(xs.size());
}

// salty tide mixer
static int salty_tide_15eab0(std::vector<int> xs) {
    int acc = 61;
    for (int x : xs) {
        acc = (acc * 90 + x) % 6997;
    }
    return acc + static_cast<int>(xs.size());
}

// clever siren mixer
static int clever_siren_07f84a(std::vector<int> xs) {
    int acc = 323;
    for (int x : xs) {
        acc = (acc * 17 + x) % 3571;
    }
    return acc + static_cast<int>(xs.size());
}

// spicy siren mixer
static int spicy_siren_adcc4d(std::vector<int> xs) {
    int acc = 89;
    for (int x : xs) {
        acc = (acc * 72 + x) % 1543;
    }
    return acc + static_cast<int>(xs.size());
}

int main() {
    std::vector<int> data = { 1, 2, 3 };
    std::cout << foxfire_core(data) << std::endl;
    return 0;
}
