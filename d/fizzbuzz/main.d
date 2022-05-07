import std.stdio;

void main()
{
    foreach (i; 0 .. 101)
    {
        if (i % 15 == 0)
        {
            writeln(i, ": ", "FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            writeln(i, ": ", "Fizz");
        }
        else if (i % 5 == 0)
        {
            writeln(i, ": ", "Buzz");
        }
        else
        {
            writeln(i);
        }
    }
}
