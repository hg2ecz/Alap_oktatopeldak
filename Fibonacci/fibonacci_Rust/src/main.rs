fn main() {
    let args: Vec<String> = std::env::args().collect();
    let n: u64 = args[1].parse().unwrap();

    // nth. fibonacci number
    let x = (0..n).fold( (0, 1), |x, _| (x.0+x.1, x.0) ).0;

    println!("{}. fibonacci number is {}", n, x);
}
