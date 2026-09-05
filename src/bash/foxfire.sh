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

foxfire_core 7
