for (number in [...Array(101).keys()]) {
    if (number % 5 == 0 && number % 3 == 0) {
        console.log(`${number}: FizzBuzz`);
    } else if (number % 3 == 0) {
        console.log(`${number}: Fizz`);
    } else if (number % 5 == 0) {
        console.log(`${number}: Buzz`);
    } else {
        console.log(number);
    }
}