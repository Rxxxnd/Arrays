#include <iostream>
#include <Windows.h>

//  !!!! NEED TO FIX:  'number_of_shifts' - identifier not found & undeclared  @  909'th  line !!!!

const int ROWS = 5;
const int COLS = 8;

//----------- protos --------------
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 256);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100); //for one-dim array;
template <typename T> void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100); //for two-dim array;

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void UniqueRand(T arr[], const int n);
template <typename T> void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void Print(const T arr[], const int n);  //for one-dim array;
template <typename T> void Print(const T arr[ROWS][COLS], int const ROWS, int const COLS); // for two-dim array;

   int Sum(const int arr[], const int n);
double Sum(double arr[], const int n);
  char Sum(char arr[], const int n);
   int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
   int Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
   int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
   
template <typename T> T Sum(T arr[], const int n); //for one-dim array;
template <typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS); //for two-dim array;

double Avg(const int arr[], const int n);
double Avg(double arr[], const int n);
  char Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
  char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> double Avg(T arr[], const int n); // for one-dim array;
template <typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS); //for two-dim array; 

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void Sort(T arr[], const int n); // for one-dim array;
template <typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS); //for two-dim array;

   int minValue(const int arr[], const int n);
double minValue(double arr[], const int n);
  char minValue(char arr[], const int n);
   int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
  char minValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> T minValue(T arr[], const int n); // for one-dim array;
template <typename T> T minValue(T arr[ROWS][COLS], const int ROWS, const int COLS); //for two-dim array;

   int maxValue(const int arr[], const int n);
double maxValue(double arr[], const int n);
  char maxValue(char arr[], const int n);
   int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
  char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> T maxValue(T arr[], const int n); //for one-dim array;
template <typename T> T maxValue(T arr[ROWS][COLS], const int ROWS, const int COLS); //for two-dim array;

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);

template <typename T> void shiftLeft(T arr[], const int n, const int number_of_shifts); //for one-dim array;

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);

template <typename T> void shiftRight(T arr[], const int n, const int number_of_shift); //for one-dim array;

void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 256);

template <typename T> void Search(T arr[], const int n); // for one-dim array;
template <typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100); //for two-dim array;

//#define ARRAYS_1
#define ARRAYS_2

void main()
{
#ifdef ARRAYS_1
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "Random generated array: " << std::endl;
	FillRand(arr, n, 0, 5);
	//UniqueRand(arr, n); //unique rand
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
	/*  int number_of_shifts;
		std::cout << "\nEnter shifting times: "; std::cin >> number_of_shifts;
		shiftLeft(arr, n, number_of_shifts);
		Print(arr, n);
		shiftRight(arr, n, number_of_shifts);
		Print(arr, n);
	*/
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
//================Functions================== 
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//rand();
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 10;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template <typename T> void FillRand(T arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
template <typename T> void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

//----------------Print----------------------
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

template <typename T> void Print(const T arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
template <typename T> void Print(const T arr[ROWS][COLS], int const ROWS, int const COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

//----------------Sum------------------------
   int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		sum /= 10;
	}
	return sum;
}
  char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		sum /= 10;
	}
	return sum;
}
   int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
   int Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
   int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

 template <typename T> T Sum(const T arr[], const int n)
   {
	   T sum = 0;
	   for (int i = 0; i < n; i++)
	   {
		   sum += arr[i];
	   }
	   return sum;
   }
 template <typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
   {
	   T sum = 0;
	   for (int i = 0; i < ROWS; i++)
	   {
		   for (int j = 0; j < COLS; j++)
		   {
			   sum += arr[i][j];
		   }
	   }
	   return sum;
   }

//--------------Average----------------------
double Avg(const int arr[], const int n)
{
 return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
 return Sum(arr, n) / n;
}
  char Avg(char arr[], const int n)
{
 return Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
 return  (double)Sum(arr, ROWS,COLS) / (ROWS*COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}
  char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (char)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

 template <typename T> double Avg(T arr[], const int n)
  {
	  return (double)Sum(arr, n) / n;
  }
 template <typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
 {
	 return  (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
 }

//----------------Min------------------------
   int minValue(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
	 if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
	 if (arr[i] < min)min = arr[i];
	}
	return min;
}
  char minValue(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
	 if (arr[i] < min)min = arr[i];
	}
	return min;
}
   int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  int min = 0;
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
		   if (arr[i][j] < min)min = arr[i][j];
		  }
	  }
	  return min;
  }
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
 {
	 double min = 0;
	 for (int i = 0; i < ROWS; i++)
	 {
		 for (int j = 0; j < COLS; j++)
		 {
			 if (arr[i][j] < min)min = arr[i][j];
		 }
	 }
	 return min;
 }
  char minValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template <typename T> T minValue(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template <typename T> T minValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

//----------------Max------------------------
   int maxValue(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
} 
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
  char maxValue(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
	 if (arr[i] > max)max = arr[i];
	}
	return max;
}
   int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS)
 {
  int max = 0;
  for (int i = 0; i < ROWS; i++)
  {
	  for(int j = 0; j < COLS; j++)
	  {
		  if (arr[i][j] > max)max = arr[i][j];
	  }
  }
  return max;
}
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  double max = 0;
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  if (arr[i][j] > max)max = arr[i][j];
		  }
	  }
	  return max;
  }
  char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  char max = 0;
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  if (arr[i][j] > max)max = arr[i][j];
		  }
	  }
	  return max;
  }

  template <typename T> T maxValue(T arr[], const int n)
  {
	  T max = arr[0];
	  for (int i = 0; i < n; i++)
	  {
		  if (arr[i] > max)max = arr[i];
	  }
	  return max;
  }
  template <typename T> T maxValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
  {
	  T max = 0;
	  for (int i = 0; i < ROWS; i++)
	  {
		  for (int j = 0; j < COLS; j++)
		  {
			  if (arr[i][j] > max)max = arr[i][j];
		  }
	  }
	  return max;
  }

//---------------Sorting----------------------
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//counter 'i' selected element, for placing min value of sorted elements;
		for (int j = i + 1; j < n; j++)
		{
			//Counter 'j' iterate elements for min element;
			//arr[i] - selected element;
			//arr[j] - iterable element;
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			double temp = arr[i];
			if (arr[j] < arr[i])
			{
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - selected elementds
					//arr[k][l] - sorting elements
					if (arr[i][j] > arr[k][l])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	std::cout << "Array sorted with: " << iterations << " iterations." << std::endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					double temp = arr[i][j];
					
					if (arr[i][j] > arr[k][l])
					{
						arr[i][j] = arr[k][l];
						arr[k][l] = temp;

					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
				}
			}
		}
	}
	
}

template <typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			T temp = arr[i];
			if (arr[j] < arr[i])
			{
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
template <typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					double temp = arr[i][j];

					if (arr[i][j] > arr[k][l])
					{
						arr[i][j] = arr[k][l];
						arr[k][l] = temp;

					}
				}
			}
		}
	}
}

//--------------Shift-L--------------------
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}

template <typename T> void shiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
//--------------Shift-R--------------------
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

template <typename T> void shiftRight(T arr[], const int n, const int number_of_shift)
{

	for (int i = 0; i < number_of_shifts; i++)
	{
		T temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}
}

//---------------UnqRnd--------------------
void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)  
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)  // left part of array, from arr[0] to selected arr[i] 
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++) 
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++) 
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
            {
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true; //supposing that number is uniaue

				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;

				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			}
				while (!unique);
		}
	}

}
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;

				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}

template <typename T> void UniqueRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
template <typename T> void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}

//---------------Search--------------------
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)printf("element %i repeatred %i times\n", arr[i], std::cout);
		if (count)std::cout << "Element: " << arr[i] << " repeated " << count << " times." << std::endl;
	}
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)std::cout << "Element: " << arr[i] << " repeated " << count << " times." << std::endl;
	}
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)printf("element %i repeatred %i times\n", arr[i], std::cout);
		if (count)std::cout << "Element: " << arr[i] << " repeated " << count << " times." << std::endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;  // met before or not
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)continue;
			}
			int count = 0;  
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Value %i repeated %i times\n", arr[i][j], count);
		}
	}
}
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)continue;
			}
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Value %i repeated %i times\n", arr[i][j], count);
		}
	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)continue;
			}
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Value %i repeated %i times\n", arr[i][j], count);
		}
	}
}

template <typename T> void Search(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)std::cout << "Element: " << arr[i] << " repeated " << count << " times." << std::endl;
	}
}
template <typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)continue;
			}
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Value %i repeated %i times\n", arr[i][j], count);
		}
	}
}