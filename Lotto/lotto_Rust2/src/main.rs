use rand::Rng;
use std::collections::HashSet;

fn main() {
    let mut rng = rand::thread_rng();

    let mut lottonum_set = HashSet::new();
    while lottonum_set.len() < 5 {
        let next = rng.gen_range(1, 91); // 91 nincs benne
        lottonum_set.insert(next);
    }

    let mut lottonum: Vec<_> = lottonum_set.iter().collect();
    lottonum.sort();
    println!("{:?}", lottonum);
}
