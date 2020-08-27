/* This file includes basic methods and functons from C language. I also documented the questions and answers for the relative chapter of the book.
-What other built in types are there other than the ones listed?
Listed(void, char, int, long, float, double)
Not listed(signed char, short, long long, unsigned "all integer types", long double, _Complex types, _Imaginary types, enumerated, derived types [array, structure, union, function, pointer, atomic])

-Conditional operators other than < and >:
<=, >=, ==, !=

-What's the += operator and what it does?
+= is a short syntax for x = x + y (in x += y), meaning "equals itself plus parameter"

-What is the "do" loop and how does it work?
The "do" loop executes an statement while an expression is true. The expression is evaluated once after every statement execution. It is an alternative for a "while" or "for" loop when the expression validation has to be executed after the statement.

-What is the "switch" statement and how does it work?
The switch statement executes an operation depending on the value of the expression received as argument. As in other statements it may receive a "break" keyword that will stop the loop once a condition prior to it is met.

-What is the keyword "continue" and what does it do?
"continue" is used inside loops to cause the remainder portion of the code inside the loop to be skipped when certain condition is met. Differently than "break", "continue" dosn't completely stops the loop.

-What is the "typedef" specifier and what does it do?
The "typedef" specifier creates an alias for a type that will be declared mor times on your code. This is higly applicable on comples type definitions to shorten and ease the syntax. For example, by declaring "typedef unsigned long long UINT64i" UINT64 is now an alias for the type "unsigned long long" and can be used to declare this type further on your code.
*/
#include <stdio.h>

int main() {
	// for loop
	for(int i = 0; i < 5; i++) {
		puts("Hello world!");
	}

	// while loop
	int o = 10;
	while(o > 0) {
		puts("Hello World While!");
		o -= 1;
	}
	
	// A function declaration that prints "Hello World" n number of times.
	int multiHelloWorld(int x) {
		for(int i = 0; i < x; i++)  {
			puts("Hello world multiple times");
		}
		return 0;
	}

	multiHelloWorld(3);
}

