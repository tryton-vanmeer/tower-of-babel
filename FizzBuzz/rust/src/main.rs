fn is_fizz(num: i32) -> bool {
    matches!(num, i if i % 3 == 0)
}

fn is_buzz(num: i32) -> bool {
    matches!(num, i if i % 5 == 0)
}

fn main() {
    for i in 1..=100 {
        match i {
            i if is_fizz(i) && is_buzz(i) => println!("FizzBuzz"),
            i if is_fizz(i) => println!("Fizz"),
            i if is_buzz(i) => println!("Buzz"),
            _ => println!("{i}"),
        }
    }
}
