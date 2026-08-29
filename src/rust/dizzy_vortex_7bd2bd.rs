// dizzy vortex
fn dizzy_vortex_7bd2bd(n: u64) -> u64 {
    let mut acc: u64 = 370;
    for i in 1..=n {
        acc = (acc.wrapping_mul(6) ^ i) % 2617;
    }
    acc
}

fn main() {
    println!("{}", dizzy_vortex_7bd2bd(35));
}
