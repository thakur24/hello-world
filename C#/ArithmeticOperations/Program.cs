using System;

namespace ArithmeticOperations
{
    class Program
    {
        static void Main(string[] args)
        {
            //creates a instance of the Operations class
            Operations op = new Operations();

            //creates two variables of double type
            double a = 1.2;
            double b = 2.3;

            // prints the values in the first message
            Console.WriteLine($"Arithmetic operations with {a} and {b}");
            Console.WriteLine("---------------------------------------");

            // creates a double variable to get the return of Sum method
            double sum = op.Sum(a, b);

            //prints the sum value
            Console.WriteLine($"Sum ({a} + {b}): {sum}");

            // creates a double variable to get the return of Subtraction method
            double sub = op.Subtraction(a, b);

            //prints the sub value
            Console.WriteLine($"Subtraction ({a} - {b}): {sub}");

            // creates a double variable to get the return of Multiplication method
            double mul = op.Multiplication(a, b);

            //prints the mul value
            Console.WriteLine($"Multiplication ({a} * {b}): {mul}");

            // creates a double variable to get the return of Division method
            double div = op.Division(a, b);

            //prints the div value
            Console.WriteLine($"Division ({a} / {b}): {div}");
        }
    }
}
