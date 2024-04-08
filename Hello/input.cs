using System;

class Program
{
    static void Main(string[] args)
    {
        // Declare and initialize the two numbers
        int num1 = 10;

        while(num1 > 20){
            int num2 = 20;
            Console.WriteLine($"num1 {num1} > num2 {num2}");

            num2=num2 +1;
        }

        int day = 1;

        switch (day)
        {
            case 1:
             Console.WriteLine("Today is Monday");
             break;
            case 2:
             Console.WriteLine("Today is Tuesday");
             break;
            case 3:
             Console.WriteLine("Today is Wednesday");
             break;
            
            default:
                         Console.WriteLine("Please enter from 1 to 3");
                         break;

        }       
        // Add the two numbers
        int sum = num1 + num2;

        // Print the sum
        Console.WriteLine($"The sum of {num1} and {num2} is: {sum}");
    }

    int fun(int x){
<<<<<<< HEAD
\        return num1>x ? 1 : 0;
=======
        int num1;
        return num1>x ? 1 : 0;
>>>>>>> fcd9619c7ab55bcd950ea05b5d7aeaf40081b912
    }
    int num1;

}