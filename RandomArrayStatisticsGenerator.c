//******************************************************************
//** Written by..: Antonio Urdaneta
//** Date Written: 8/31/2022
//** Purpose.....: Fill up array with ramdon size and ramdom numbers
//******************************************************************


#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define PAUSE myPause()

int randNum();
int randSpace();
void displayArray(int[], int);
int largestValue(int[], int);
int smallestValue(int[], int);
double averageValue(int[], int);
void quit();
int main() {
	int array[SIZE] = { 0 };
	int eSize = 0; 
	eSize = randSpace();
	int i;
	int randSpace();
	int randNumb();
	int large;// not used
	int small;
	double average;
	
	for (i = 0; i < eSize; i++) 
		array[i] = randNum();

	 displayArray(array, eSize);
	 
	 printf("\n\nStats summary:\n");
	 printf("\nThe largest value of array is %i.\n", largestValue(array, eSize));// displays largest value 

	 small = smallestValue(array, eSize);
	 printf("\nThe smallest value of array is %i.\n", small);// display smallest value

	 average =  averageValue(array, eSize);
	 printf("\nThe average value of array is %.2f\n", average);// display average value

	 quit();
}// end of main

int randSpace() {
	int result = 0;
	result = 500 + rand() % (1000 - 500 + 1);


	return result; 
}// end of random space

int randNum() {
	int result = 0;
	result = -5 + rand() % (999 - (-5) + 1);


	return result; 
}// end of random number generator

void displayArray(int array[], int eSize) {
	int i;
	for (i = 0; i < eSize; i++) {
		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%i\t", array[i]);
	}
}// end of display

int largestValue(int array[], int eSize) {
	int result = 0;
	int i;
	for (i = 0; i < eSize; i++) {
		if (array[i] > result) {
			result = array[i];

		}
		
	}
	return result;
}// end of finding out largest value

int smallestValue(int array[], int eSize) {
	int result = 1000000000;
	int i;
	for (i = 0; i < eSize; i++) {
		if (array[i] < result) {
			result = array[i];
		}
		
	}
	return result;
}// end of finding out smallest value

double averageValue(int array[], int eSize) {
	double result = 0;
	int total = 0;
	for (int i = 0; i < eSize; i++) {
		total += array[i];

	}
	result = total / eSize;

	return result; 
}// end of getting average


void quit() {
	printf("\nPress enter to quit....\n");
	getchar();



}//end of quit method
