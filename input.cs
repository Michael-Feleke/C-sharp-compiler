using System;

class Program
{
    // Recursive function to calculate factorial
    static int Factorial(int n)
    {
        if (n == 0)
            return 1;
        else
            return n * Factorial(n - 1);
    }

    static void Main(string[] args)
    {
        Console.Write("Enter a number to calculate its factorial: ");
        int number = Convert.ToInt32(Console.ReadLine());

        int factorial = Factorial(number);
        Console.WriteLine($"Factorial of {number} is: {factorial}");
    }
}
