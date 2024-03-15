

## References Links
    https://www.w3schools.com/cpp/default.asp
    ChatGPT

## What is C++ Programming
    GhatGPT
    C++ programming refers to the process of writing, compiling, and executing programs using the C++ programming language. C++ is a powerful, high-level programming language developed by Bjarne Stroustrup in 1983 as an extension of the C programming language.

## Some key features of C++ include:
    GhatGPT
    Object-Oriented Programming (OOP): C++ supports object-oriented programming paradigms, allowing developers to create classes and objects to model real-world entities, encapsulate data, and implement inheritance, polymorphism, and encapsulation.

    Strong Typing: C++ is a statically typed language, meaning that variables must be declared with their data types before use. This helps catch errors at compile-time and improves code reliability.

    Low-level Manipulation: C++ provides low-level features such as pointers, memory management, and direct access to hardware, making it suitable for systems programming and performance-critical applications.

    Standard Template Library (STL): C++ includes a powerful standard library known as the Standard Template Library (STL), which provides a collection of reusable data structures (such as vectors, lists, maps, and queues) and algorithms (such as sorting, searching, and manipulating) that can greatly simplify programming tasks.

    Portability: C++ code can be compiled and executed on various platforms and operating systems, including Windows, macOS, Linux, and embedded systems.

    Community and Support: C++ has a large and active community of developers, extensive documentation, and numerous resources (books, tutorials, forums, etc.) available for learning and support.



## Program Structure
    #include <iostream>
    using namespace std;
    int main()
    {
        cout << "Hello World"; // prints Hello World
        return 0;
    }

    Details
        1. headers :: the header <iostream>.
        2. using namespace std; :: tells the compiler to use the std namespace.
        3. int main()  :: is the main function where program execution begins.
        4. cout <<  ::  Displayed text on the screen.
        6. return 0;  ::terminates main() function and causes it to return the value 0 to the calling process.

    Compile & Execute C++
        Linux
            $ g++ main.cpp
            $ ./main
    Task
        Create a program to show your Name, RegNumber, your course and more 

## Comments 
    Single-line Comments
        // This is a comment
    Multi-line Comments 
        /* comment */

## Variables / Data Types
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false

    Syntax
        type variableName = value;

    Single Variables
        int a = 10 
        cout << a;

    Declare Multiple Variables
        int x = 5, y = 6, z = 50;
        cout << x + y + z;

     Identifiers
        Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
        int minutesPerHour = 60;

        The general rules for naming variables are:
            Names can contain letters, digits and underscores
            Names must begin with a letter or an underscore (_)
            Names are case-sensitive (myVar and myvar are different variables)
            Names cannot contain whitespaces or special characters like !, #, %, etc.
            Reserved words (like C++ keywords, such as int) cannot be used as names

        Constants
            "constant", which means unchangeable and read-only
            const int myNum = 15;  // myNum will always be 15
            myNum = 10;  // error: assignment of read-only variable 'myNum'

## User Input
    int x; 
    cout << "Type a number: "; 
    cin >> x; 
    cout << "Your number is: " << x; 
    task
        create a Simple Calculator from input values

##  Operators
    Arithmetic [ + - * / % ++ -- ]
    Assignment [ = , += , -= , *= , /= , %= , &= , |= , >>= <<=]
    Comparison [ == , != , > , <, >=, , <=]
    Logical [ && , || , ! ]

## Strings
    header file
        #include <string>
        string greeting = "Hello"; // Example

    Concatenation
        string firstName = "John ";
        string lastName = "Doe";
        string fullName = firstName + lastName;
        cout << fullName;

    Numbers and Strings
        int x = 10;
        int y = 20;
        int z = x + y;

        string x = "10";
        string y = "20";
        string z = x + y; 

    Access Strings
        indexing []
        string myString = "Hello";
        cout << myString[0]; // Outputs H

        Change String Characters
            string myString = "Hello";
            myString[0] = 'J';
            cout << myString; // Outputs Jello instead of Hello

    User Input Strings
        cin :: considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word
        getline() :: function to read a line of text. It takes cin as the first parameter, and the string variable as second:

        string firstName;
        cout << "Type your first name: ";
        cin >> firstName; // get user input from the keyboard
        cout << "Your name is: " << firstName;

        string fullName;
        cout << "Type your full name: ";
        getline (cin, fullName);
        cout << "Your name is: " << fullName;

    String Namespace
        The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects
        #include <iostream>
        #include <string>

        int main() {
        std::string greeting = "Hello";
        std::cout << greeting;
        return 0;
        }

## Conditions and If Statements
    if , else , else if , switch

    Syntax
        if (condition) {
        // block of code to be executed if the condition is true
        }

        if (condition) {
        // block of code to be executed if the condition is true
        } else {
        // block of code to be executed if the condition is false
        }

        if (condition1) {
        // block of code to be executed if condition1 is true
        } else if (condition2) {
        // block of code to be executed if the condition1 is false and condition2 is true
        } else {
        // block of code to be executed if the condition1 is false and condition2 is false
        }
    Short Hand If...Else (Ternary Operator)
        Syntax
            variable = (condition) ? expressionTrue : expressionFalse;
            Instead of writing:
                int time = 20;
                if (time < 18) {
                cout << "Good day.";
                } else {
                cout << "Good evening.";
                }
            To simple code
                int time = 20;
                string result = (time < 18) ? "Good day." : "Good evening.";
                cout << result;
    switch
        switch(expression) {
        case x:
            // code block
            break;
        case y:
            // code block
            break;
        default:
            // code block
        }

        int day = 4;
        switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        }

## Loops
    While Loop , Do While , For loop , 

    while 
        while (condition) {
        // code block to be executed
        }
        int i = 0;
        while (i < 5) {
        cout << i << "\n";
        i++;
        }

    Do/While Loop
        do {
        // code block to be executed
        }
        while (condition);
        int i = 0;
        do {
        cout << i << "\n";
        i++;
        }
        while (i < 5);

    For Loop
        for (statement 1; statement 2; statement 3) {
        // code block to be executed
        }
        for (int i = 0; i < 5; i++) {
        cout << i << "\n";
        }
## Break and Continue
    break , continue  key word
        
        break
            for (int i = 0; i < 10; i++) {
            if (i == 4) {
                break;
            }
            cout << i << "\n";
            }

        continue
            for (int i = 0; i < 10; i++) {
            if (i == 4) {
                continue;
            }
            cout << i << "\n";
            }