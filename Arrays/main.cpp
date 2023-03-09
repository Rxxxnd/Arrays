#include <iostream>
#include <Windows.h>
#define ARRAY_MIN_MAX_AVG
void main()
{
	/*const int n = 5;
	int arr[n] = {};
	arr[2] = 123;
	//std::cout << arr[2] << std::endl;
	//SIZE-1;
	//   n-1;
	std::cout << "Enter the elements of array: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{

		std::cout << i << "\t";
	}
	std::cout << std::endl;
	*/
	//========================================================
#ifdef ARRAY_MIN_MAX_AVG
	const int n = 5;
	int arr[n] = {};

	std::cout << "Enter the elements of array: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}

	std::cout << std::endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	Sleep(350);
	std::cout << "\nSum of all array elements: " << sum << std::endl;
	Sleep(350);
	std::cout << "Average of array: " << sum / n << std::endl;

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	int min = 0;
	int max = 0;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	Sleep(350);
	std::cout << "\nThe min element of array is: " << min << "\n";
	Sleep(450);
	std::cout << "The max element of array is: " << max << std::endl;
#endif // ARRAY_MIN_MAX_AVG;
}

