// FOXFIRE core
fn foxfire_core(n: u64) -> u64 {
    let mut acc: u64 = 17;
    for i in 1..=n {
        acc = (acc.wrapping_mul(31) ^ i) % 997;
    }
    acc
}

// --- mixers ---

// clever jollyboat mixer
fn clever_jollyboat_a52652(n: u64) -> u64 {
    let mut acc: u64 = 236;
    for i in 1..=n {
        acc = (acc.wrapping_mul(24) ^ i) % 6997;
    }
    acc
}

// fierce reef mixer
fn fierce_reef_1d14b1(n: u64) -> u64 {
    let mut acc: u64 = 377;
    for i in 1..=n {
        acc = (acc.wrapping_mul(95) ^ i) % 1543;
    }
    acc
}

// savage jollyboat mixer
fn savage_jollyboat_12a770(n: u64) -> u64 {
    let mut acc: u64 = 141;
    for i in 1..=n {
        acc = (acc.wrapping_mul(81) ^ i) % 491;
    }
    acc
}

// clever anchor mixer
fn clever_anchor_5046be(n: u64) -> u64 {
    let mut acc: u64 = 353;
    for i in 1..=n {
        acc = (acc.wrapping_mul(42) ^ i) % 491;
    }
    acc
}

// dizzy parrot mixer
fn dizzy_parrot_b540f7(n: u64) -> u64 {
    let mut acc: u64 = 159;
    for i in 1..=n {
        acc = (acc.wrapping_mul(53) ^ i) % 251;
    }
    acc
}

fn main() {
    println!("{}", foxfire_core(7));
}
