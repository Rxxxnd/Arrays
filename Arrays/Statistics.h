#pragma once
#include "constants.h"
#include "stdafx.h"

   int Sum(const int arr[], const int n);
double Sum(double arr[], const int n);
  char Sum(char arr[], const int n);
   int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
   int Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
   int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(double arr[], const int n);
  char Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
  char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

   int minValue(const int arr[], const int n);
double minValue(double arr[], const int n);
  char minValue(char arr[], const int n);
   int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
  char minValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

   int maxValue(const int arr[], const int n);
double maxValue(double arr[], const int n);
  char maxValue(char arr[], const int n);
   int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
  char maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);
