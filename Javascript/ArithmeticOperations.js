//creates two variables
var a = 1.2;
var b = 2.3;

// prints the values in the first message
console.log("Arithmetic operations with " + a + " and " + b);
console.log("---------------------------------------");

// creates a variable to get the return of sum function
var sum = sum(a, b);

//prints the sum value
console.log("Sum (" + a + " + " + b + "):" + sum);

// creates a variable to get the return of subtraction function
var sub = subtraction(a, b);

//prints the sub value
console.log("Subtraction (" + a + " - " + b + "):" + sub);

// creates a variable to get the return of multiplication function
var mul = multiplication(a, b);

//prints the mul value
console.log("Multiplication (" + a + " * " + b + "):" + mul);

// creates a variable to get the return of division function
var div = division(a, b);

//prints the div value
console.log("Division (" + a + " / " + b + "):" + div);

// Adds two params and returns the result.     
function sum(a, b)
{
    // returns the sum of parameters
    return a + b;
}

// Subtracts two params and returns the result.  
function subtraction(a, b)
{
    // returns the subtraction of parameters
    return a - b;
}

// Multiplies two params and returns the result.
function multiplication(a, b)
{
    // returns the multiplication of parameters
    return a * b;
}

// Divides two params and returns the result.
function division(a, b)
{
    // checks if the second parameter is zero, avoiding division by zero error
    if(b == 0)
    {
        console.log("Error: Division by zero");
        return 0;
    }                

    // returns the division of parameters
    return a / b;
}