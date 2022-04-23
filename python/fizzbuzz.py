#!/usr/bin/env python3

MODULUS_WORDS = {15: "FizzBuzz", 3: "Fizz", 5: "Buzz"}

for i in range(1, 101):
    output = f"{i}"

    for modulus in MODULUS_WORDS:
        if i % modulus == 0:
            output += f": {MODULUS_WORDS[modulus]}"
            break

    print(output)
