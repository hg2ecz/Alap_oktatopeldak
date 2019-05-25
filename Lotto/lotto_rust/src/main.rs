use rand::Rng;

fn main() {
    let mut rng = rand::thread_rng();

    let mut lottonum = vec![];
    while lottonum.len() < 5 {
        let next = rng.gen_range(1, 91); // 91 nincs benne
        if !lottonum.contains(&next) {
            lottonum.push(next);
        }
    }

    lottonum.sort();
    println!("{:?}", lottonum);
}
