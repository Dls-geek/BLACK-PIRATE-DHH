#!/usr/bin/env bash
# rusty spyglass
set -euo pipefail

rusty_spyglass_c7a7e9() {
    local n=$1 acc=77 i
    for ((i = 1; i <= n; i++)); do
        acc=$(( (acc * 95 + i) % 4483 ))
    done
    echo "$acc"
}

rusty_spyglass_c7a7e9 12
