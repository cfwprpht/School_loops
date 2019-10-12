// school_loop.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main() {
	/* C++ */
	// Simple 'while' loop. (Head driven loop)
	std::cout << "Simple 'while' loop.\n";

	int z = 5;
	while (true) {
		std::cout << "\rSchool Loop counter: ";		
		std::cout << z;
		Sleep(1000);
		if (z == 0) break;                // Don't forget to break this loop!
		z--;
	}

	// Basic 'for' loop. (Head driven loop)
	std::cout << "\n\nBasic 'for' loop.\n";

	for (int i = 5; i > -1; i--) {
		std::cout << "\rSchool Loop counter: ";
		std::cout << i;
		Sleep(1000);
	}

	// 'for' each 'ELEMENT' in 'ARRAY'.
	std::cout << "\n\n'for' each 'ELEMENT' in 'ARRAY'.\n";

	int numberArray[] = { 5, 4, 3, 2, 1, 0, };
	for (int singleNumber : numberArray) {
		std::cout << "\rSchool Loop counter: ";
		std::cout << singleNumber;
		Sleep(1000);
	}

	// 'do' WHAT 'while' CONDITION. (Foot driven loop)
	std::cout << "\n\n'do' WHAT 'while' CONDITION.";

	std::string input;
	do {
		std::cout << "\nPlease Enter 'exit' to continue...\nEnter: ";
		std::cin >> input;
	} while (input.compare("exit"));
	
	
	/* pure c */
	/*// Simple 'while' loop. (Head driven loop)
	printf("Simple 'while' loop.\n");

	int z = 5;
	while (1) {
		//printf("\33[2K\rSchool Loop counter: %d", z);
		printf("\rSchool Loop counter: %d", z);
		Sleep(1000);
		if (z == 0) break;
		z--;		
	}

	// Basic 'for' loop. (Head driven loop)
	printf("\n\nBasic 'for' loop.\n");

	for (int i = 5; i > -1; i--) {
	    printf("\rSchool Loop counter: %d", i);
		Sleep(1000);
	}

// Althought there is no 'foreach' integration in pure c, we can use so called 'macros' to define what shall be done 'inline' of the code.
#define foreach(item, array) \
    for(int keep = 1, \
            count = 0,\
            size = sizeof (array) / sizeof *(array); \
        keep && count != size; \
        keep = !keep, count++) \
      for(item = (array) + count; keep; keep = !keep)

// Now we can use the macro 'foreach', define a 'item' and a 'array' to use and then the 'for' loops, which are defined above in the 'foreach',
// will be injected into the code for us, by the compiler.

    // 'for' each 'ELEMENT' in 'ARRAY'.
	printf("\n\n'for' each 'ELEMENT' in 'ARRAY'.\n");

	int numberArray[] = { 5, 4, 3, 2, 1, 0, };
	foreach(int *singleNumber, numberArray) {
	    printf("\rSchool Loop counter: %d", *singleNumber);
		Sleep(1000);
	}

	// 'do' WHAT 'while' CONDITION. (Foot driven loop)
	printf("\n\n'do' WHAT 'while' CONDITION.");

	char input[4096];
	do {
		memset(input, 0, sizeof(input)); // Make sure that the string ends with a '0' since c/c++ use 'null termination' for strings. So just clear the whole buffer before using it.
	    printf("\nPlease Enter 'exit' to continue...\nEnter: ");
		scanf_s("%s", input, sizeof(input));
	} while (strcmp(input, "exit"));
	*/
	
	return 0;
}
