using System;
using System.Linq;

namespace fizz_buzz
{
    class Program
    {
        static void Main(string[] args)
        {
            foreach (int num in Enumerable.Range(1,100))
            {
                if (num % 15 == 0)
                {
                    Console.WriteLine("FizzBuzz");
                }
                else if (num % 3 == 0)
                {
                    Console.WriteLine("Fizz");
                }
                else if (num % 5 == 0)
                {
                    Console.WriteLine("Buzz");
                }
                else
                {
                    Console.WriteLine(num);
                }
            }
        }
    }
}