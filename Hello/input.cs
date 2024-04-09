using System;

class Program
{


    static void Main(string[] args)
    {
        // Declare and initialize the two numbers
        int num1 = 10;
        
        while(num1 > 20){

        // int num1;
            int num2 = 20;
            
            Console.WriteLine($"num1 {num1} > num2 {num2}");

            num2=num2 +1;
        }
    
        int day = 1;
        string daadfy="wediend";
        int summmm;
        summmm=daadfy;

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
        string hello= "hello";
        // int sum = num1 + hello;

        // Print the sum
        Console.WriteLine($"The sum of {num1} and {num2} is: {sum}");
    }

    int fun(int x){
        int num1 = 10;
      return num1>x ? 1 : 0;
    }

}