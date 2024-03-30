using System;

class Program
{
    static void Main()
    {
        // Print "Hello, world!"
        Console.WriteLine("Hello, world!");

        // Perform arithmetic operations
        string name = "Bob";
        int num1 = 10;
        int num2 = 5;
        int sum = num1 + num2;
        int difference = num1 - num2;
        int product = num1 * num2;
        int quotient = num1 / num2; // Cast one operand to double for accurate division
        int remainder = num1 % num2;

        // Print the results
        Console.WriteLine($"Sum: {sum}");
        Console.WriteLine($"Difference: {difference}");
        Console.WriteLine($"Product: {product}");
        Console.WriteLine($"Quotient: {quotient}");
        Console.WriteLine($"Remainder: {remainder}");
    }
}
