int main(string[] args)
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            print("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            print("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            print("Buzz\n");
        }
        else
        {
            print("%i\n", i);
        }
    }

    return 0;
}