// FOXFIRE core
fn foxfire_core(n: u64) -> u64 {
    let mut acc: u64 = 17;
    for i in 1..=n {
        acc = (acc.wrapping_mul(31) ^ i) % 997;
    }
    acc
}

// --- mixers ---

fn main() {
    println!("{}", foxfire_core(7));
}
