using static System.Linq.Enumerable;

foreach (int element in Range(1, 100))
{
    if (element % 3 == 0 && element % 5 == 0)
    {
        Console.WriteLine("FizzBuzz");
    }
    else if (element % 3 == 0)
    {
        Console.WriteLine("Fizz");
    }
    else if (element % 5 == 0)
    {
        Console.WriteLine("Buzz");
    }
    else
    {
        Console.WriteLine(element);
    }
}
