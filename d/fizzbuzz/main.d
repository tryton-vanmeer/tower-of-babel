import std.stdio;

void main()
{
    foreach (i; 0 .. 101)
    {
        if (i % 15 == 0)
        {
            writeln("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            writeln("Fizz");
        }
        else if (i % 5 == 0)
        {
            writeln("Buzz");
        }
        else
        {
            writeln(i);
        }
    }
}
