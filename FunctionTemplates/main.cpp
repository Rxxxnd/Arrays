#include<iostream>
#include "constans.h"
#include "FillRand.h"
#include "Print.cpp"
#include "Statistics.cpp"
#include "Sorting.cpp"
#include "Shifts.cpp"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n);
	//Print(arr, n);
	//cout << "Sum of all elements: " << Sum(arr, n) << endl;
	//cout << "Average of alements in array: " << Avg(arr, n) << endl;
	std::cout << "Min value in array:  " << minValueIn(arr, n) << std::endl;
	std::cout << "max value in array: " << maxValueIn(arr, n) << std::endl;
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	std::cout << "\nSum of all elements: " << Sum(d_arr, SIZE) << std::endl;
	std::cout << "\nAverage of array: " << Avg(d_arr, SIZE) << std::endl;
	std::cout << "\nMin value of of array: " << minValueIn(d_arr, SIZE) << std::endl;
	std::cout << "\nMax value of of array: " << maxValueIn(d_arr, SIZE) << std::endl;
	std::cout << std::endl;

	std::cout << "Sorted array: " << std::endl;
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);

	int number_of_shifts;
	std::cout << "Enter amount of shifts: "; std::cin >> number_of_shifts;
	shiftLeft(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}