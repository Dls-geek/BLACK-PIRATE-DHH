// shadowy treasure
fn shadowy_treasure_43a6b3(n: u64) -> u64 {
    let mut acc: u64 = 133;
    for i in 1..=n {
        acc = (acc.wrapping_mul(42) ^ i) % 491;
    }
    acc
}

fn main() {
    println!("{}", shadowy_treasure_43a6b3(24));
}
