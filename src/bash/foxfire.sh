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

foxfire_core 7
