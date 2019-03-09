// Array of objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Declaring Arrays of Objects -- http://people.cs.vt.edu/kafura/cs2704/arrays.html
//best advice - https://stackoverflow.com/questions/1088622/how-do-i-create-an-array-of-strings-in-c
//awesome newboston c prog tutorial - structures - https://www.youtube.com/watch?v=VMFKz7Klx7I

typedef struct Frame{
	char name[10];
	char a[10];
	int b;
	int c;
	int d;
	int e;
}frame;

int main()
{
	frame Bucky;
	strcpy(Bucky.a, "window1");
	Bucky.b = 10;
	Bucky.c = 40;
	Bucky.d = 100;
	Bucky.e = 75;

	printf("Window frame no: %s, %d, %d, %d, %d\n", Bucky.a, Bucky.b, Bucky.c, Bucky.d, Bucky.e );
	
	/*
	frame Roberts;
	frame emma;
	frame mackey;

	char frameArray[3] = { Roberts, emma, mackey };  //no suitable conversion function from "frame" to "char" exists
	*/


/*
	char frameArray[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Enter name of user[%d]", &i + 1);
		scanf("%s", frame.name);   //frame is a type, not a constructor object, therefore limitations of strcut is that it has to be statically pre-defined, cos unable to dynamically assign/construct one @ runtime.
		printf("user name is: %d", frame.name);
		//frame[i].b = 10;
		//frame[i].c = 40;
		//frame[i].d = 100;
		//frame[i].e = 75;
	}
*/
	return 0;
}



/*
//nd a constructor for Frame, structure not compatible, unable to achieve  -  do the cpp way  https://stackoverflow.com/questions/537244/default-constructor-in-c
//Error msg for the below code:  no suitable constructor exists to convert from "const char[9]" to "Frame"


int main()
{
	//Frame windowList[5];     // initialize an array of size 5, to hold frame objects

	frame windowList[5] = { frame("Window 0", 0, 100, 100, 100),
							frame("Window 1", 25,100, 100, 100),
							frame("Window 2", 50, 100, 100, 100),
							frame("Window 3", 75, 100, 100, 100),
							frame("Window 4", 100, 100, 100, 100)
						  }
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("Window Frame num %s", &windowList.a,);
	}

	return 0;
}
\
*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
