Explanation (Step by Step)
1. #include <iostream>

This line allows the program to take input and show output.

Without this, cin and cout will not work.

2. using namespace std;

Saves us from writing std:: again and again.

Makes the code shorter and easier.

3. int main() {

This is where the program starts running.

Every C++ program must have main().
4. int number;

Creates a variable named number.

It will store the number entered by the user.

5. cout << "Enter a number: ";

Prints a message on the screen.

Asks the user to enter a number.

6. cin >> number;

Takes input from the user.

Stores the input value inside number.

7. if (number % 2 == 0)

% means remainder.

If a number divided by 2 gives remainder 0, it is even.8. cout << "Even number";

This runs only if the number is even.

9. else

Runs when the if condition is false.

10. cout << "Odd number";

Prints when the number is odd.

11. return 0;

Ends the program.

Tells the computer the program ran successfully.

EXPLANATION OF PATTERN PRINT PROGRAM 

1. #include <iostream>

Allows input and output operations (cout).

2. using namespace std;

Lets us use cout and endl directly.

3. int main() {

Program execution starts here.
4. int i, j;

Two integer variables:

i → controls rows

j → controls columns (stars)🔁 Outer Loop (Rows)
for (i = 1; i <= 5; i++)


Runs 5 times → creates 5 rows.

Each loop = one new line of the pattern.
🔁 Inner Loop (Stars)
for (j = 1; j <= i; j++)


Prints stars in each row.

Number of stars depends on the row number:

Row 1 → 1 star

Row 2 → 2 stars

Row 3 → 3 stars

Printing the Star
cout << "* ";


Prints one star followed by a space.

Runs multiple times in one row.
New Line
cout << endl;


Moves the cursor to the next line after finishing one row.

return 0;

Ends the program successfully.
