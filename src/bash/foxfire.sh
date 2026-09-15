#!/usr/bin/env bash
# FOXFIRE core
set -euo pipefail

foxfire_core() {
    local n=$1 acc=17 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 31 + i) % 997 ))
    done
    echo "$acc"
}

# --- mixers ---

# brave horizon mixer
brave_horizon_7362a2() {
    local n=$1 acc=114 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 73 + i) % 997 ))
    done
    echo "$acc"
}

# spicy cannon mixer
spicy_cannon_a44f16() {
    local n=$1 acc=214 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 78 + i) % 6997 ))
    done
    echo "$acc"
}

# electric reef mixer
electric_reef_d2c40b() {
    local n=$1 acc=421 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 25 + i) % 2617 ))
    done
    echo "$acc"
}

# electric figurehead mixer
electric_figurehead_573465() {
    local n=$1 acc=453 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 87 + i) % 769 ))
    done
    echo "$acc"
}

# zen vortex mixer
zen_vortex_43ef1b() {
    local n=$1 acc=472 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 13 + i) % 1543 ))
    done
    echo "$acc"
}

foxfire_core 7
