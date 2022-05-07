namespace fizzbuzz
{
    class Program
    {
        static void Main(string[] args)
        {
            foreach (int num in Enumerable.Range(0, 101))
            {
                if (num % 15 == 0)
                {
                    Console.WriteLine("{0}: FizzBuzz", num);
                }
                else if (num % 3 == 0)
                {
                    Console.WriteLine("{0}: Fizz", num);
                }
                else if (num % 5 == 0)
                {
                    Console.WriteLine("{0}: Buzz", num);
                }
                else
                {
                    Console.WriteLine(num);
                }
            }
        }
    }
}