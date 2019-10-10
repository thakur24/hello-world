using System;

namespace ArithmeticOperations
{
    /// <summary>
    /// This class performs mathematical operations.
    /// </summary>
    class Operations
    {
        /// <summary>
        /// Adds two double params and returns the result.
        /// </summary>        
        public double Sum(double a, double b)
        {
            // returns the sum of parameters
            return a + b;
        }

        /// <summary>
        /// Subtracts two double params and returns the result.
        /// </summary>  
        public double Subtraction(double a, double b)
        {
            // returns the subtraction of parameters
            return a - b;
        }

        /// <summary>
        /// Multiplies two double params and returns the result.
        /// </summary>  
        public double Multiplication(double a, double b)
        {
            // returns the multiplication of parameters
            return a * b;
        }

        /// <summary>
        /// Divides two double params and returns the result.
        /// </summary> 
        public double Division(double a, double b)
        {
            // checks if the second parameter is zero, avoiding DivisionByZero exception
            if(b == 0)
            {
                Console.WriteLine("Error: Division by zero");
                return 0;
            }                

            // returns the division of parameters
            return a / b;
        }
    }
}