#include <Windows.h>
#include "stdafx.h"
#include "constants.h"
#include "fillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shifts.h"
#include "UniqueRand.h"
#include "Search.h"


#define ARRAYS_1
#define ARRAYS_2

void main()
{
#ifdef ARRAYS_1
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "Random generated array: " << std::endl;
	FillRand(arr, n, 0, 5);
	UniqueRand(arr, n); //unique rand
	Print(arr, n);
	std::cout << "Sum of all elements: " << Sum(arr, n) << std::endl;
	std::cout << "\nAverage of array: " << Avg(arr, n) << std::endl;
	std::cout << "\nMin element of array: " << minValue(arr, n) << std::endl;
	std::cout << "\nMax elemnts of array: " << maxValue(arr, n) << std::endl;

	std::cout << "\nSearching for identical elements of array: " << std::endl;
	Search(arr, n);
	Print(arr, n);

	std::cout << "\nSorted array: " << std::endl;
	Sort(arr, n);
	Print(arr, n);
	  int number_of_shifts;
		std::cout << "\nEnter shifting times: "; std::cin >> number_of_shifts;
		shiftLeft(arr, n, number_of_shifts);
		Print(arr, n);
		shiftRight(arr, n, number_of_shifts);
		Print(arr, n);
	
	//const int SIZE = 10;
	//double d_arr[SIZE];
	//FillRand(d_arr, SIZE);
	//Print(d_arr, SIZE);
	//FillRand(c_arr, SIZE);
	//Print(c_arr, SIZE);
	//double sum[SIZE];
	//Print(d_arr, SIZE);
	//char sum[SIZE];
	//Print(c_arr, SIZE);
	//Avg(d_arr, n);
	//Print(d_arr, SIZE);
	//Avg(c_arr, n);
	//Print(c_arr, SIZE);
	//minValue(d_arr, n);
	//Print(d_arr, SIZE);
	//minValue(c_arr, n);
	//Print(c_arr, SIZE);
	//maxValue(d_arr, n);
	//Print(d_arr, SIZE);
	//maxValue(c_arr, n);
	//Print(c_arr, SIZE);


#endif // ARRAYS_1 

	Sleep(200);
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 0, 100);
	Search(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	Sleep(200);
	std::cout << std::endl;
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);

	Sleep(200);
	std::cout << std::endl;
	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);

	Sleep(200);
	std::cout << "\nSum of elements of array: " << Sum(i_arr_2, ROWS, COLS) << std::endl;

	Sleep(200);
	std::cout << "\nAverage of array: " << Avg(i_arr_2, ROWS, COLS) << std::endl;
	Sleep(200);
	std::cout << "\nSorted array: " << std::endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);

	std::cout << "\n-------------------------\n" << std::endl;
	std::cout << "Unique random array: \n" << std::endl;
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	std::cout << "\nSorted unique random array: " << std::endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
}


