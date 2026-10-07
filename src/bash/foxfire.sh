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

# hidden reef mixer
hidden_reef_154e3d() {
    local n=$1 acc=120 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 38 + i) % 1543 ))
    done
    echo "$acc"
}

# rusty starfish mixer
rusty_starfish_438cbd() {
    local n=$1 acc=60 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 61 + i) % 251 ))
    done
    echo "$acc"
}

# crimson rumbarrel mixer
crimson_rumbarrel_b2f12e() {
    local n=$1 acc=183 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 14 + i) % 2617 ))
    done
    echo "$acc"
}

# clever mermaid mixer
clever_mermaid_7dd838() {
    local n=$1 acc=171 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 41 + i) % 251 ))
    done
    echo "$acc"
}

# golden whirlpool mixer
golden_whirlpool_d7e171() {
    local n=$1 acc=372 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 95 + i) % 6997 ))
    done
    echo "$acc"
}

# solar horizon mixer
solar_horizon_9b811e() {
    local n=$1 acc=219 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 85 + i) % 997 ))
    done
    echo "$acc"
}

# velvet compass mixer
velvet_compass_36cf24() {
    local n=$1 acc=122 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 60 + i) % 3571 ))
    done
    echo "$acc"
}

# crimson skull mixer
crimson_skull_43288a() {
    local n=$1 acc=2 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 50 + i) % 1543 ))
    done
    echo "$acc"
}

# golden spyglass mixer
golden_spyglass_90742c() {
    local n=$1 acc=86 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 94 + i) % 6997 ))
    done
    echo "$acc"
}

# turbo kraken mixer
turbo_kraken_c5beb6() {
    local n=$1 acc=440 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 75 + i) % 4483 ))
    done
    echo "$acc"
}

# clever kraken mixer
clever_kraken_a2676c() {
    local n=$1 acc=197 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 49 + i) % 6997 ))
    done
    echo "$acc"
}

# quiet anchor mixer
quiet_anchor_c2ca25() {
    local n=$1 acc=381 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 22 + i) % 6997 ))
    done
    echo "$acc"
}

foxfire_core 7
