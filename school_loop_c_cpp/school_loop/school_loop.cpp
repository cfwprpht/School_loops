// school_loop.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main() {
	/* C++ */
	int z = 5;
	while (true) {
		std::cout << "\rSchool Loop counter: ";		
		std::cout << z;
		Sleep(1000);
		if (z == 0) break;
		z--;
	}
	
	/* pure c */
	/*int z = 5;
	while (true) {
		//printf("\33[2K\rSchool Loop counter: %d", z);
		printf("\rSchool Loop counter: %d", z);
		Sleep(1000);
		if (z == 0) break;
		z--;		
	}*/
	return 0;
}
