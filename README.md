Random Array Statistics Generator
Introduction

This C program, authored by Antonio Urdaneta on 8/31/2022, serves the purpose of generating an array of random size and populating it with random numbers. The objective is to provide users with a versatile tool for statistical analysis on randomly generated data sets.
Usage

    The array is dynamically created with a random size between 500 and 1000 elements.
    Random numbers, ranging from -5 to 999, are then assigned to each element of the array.
    The program displays the generated array and provides key statistical information, including the largest value, smallest value, and average value.

Key Functions
1. randSpace()

    Generates a random size for the array, creating a dynamic space for diverse data sets.

2. randNum()

    Produces random numbers within the range of -5 to 999, offering variability in array elements.

3. displayArray(int array[], int eSize)

    Displays the generated array, presenting the data in a readable format.

4. largestValue(int array[], int eSize)

    Identifies and returns the largest value within the array.

5. smallestValue(int array[], int eSize)

    Determines and returns the smallest value within the array.

6. averageValue(int array[], int eSize)

    Calculates and returns the average value of the array.

7. quit()

    Prompts the user to press enter to quit, ensuring a controlled program termination.

Conclusion


