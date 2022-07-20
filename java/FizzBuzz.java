import java.util.stream.IntStream;

public class FizzBuzz {
    public static void main(String[] args) {
        IntStream.range(0, 101).forEachOrdered(n -> {
            if (n % 3 == 0 && n % 5 == 0) {
                System.out.printf("%s: FizzBuzz\n", n);
            } else if (n % 3 == 0) {
                System.out.printf("%s: Fizz\n", n);
            } else if (n % 5 == 0) {
                System.out.printf("%s: Buzz\n", n);
            } else {
                System.out.println(n);
            }
        });
    }
}
