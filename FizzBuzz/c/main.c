#include <stdbool.h>
#include <stdio.h>

bool is_fizz(int num) { return num % 3 == 0; }
bool is_buzz(int num) { return num % 5 == 0; }

int main() {
  for (int i = 1; i <= 100; i++) {
    if (is_fizz(i) && is_buzz(i)) {
      printf("FizzBuzz\n");
    } else if (is_fizz(i)) {
      printf("Fizz\n");
    } else if (is_buzz(i)) {
      printf("Buzz\n");
    } else {
      printf("%i\n", i);
    }
  }

  return 0;
}
