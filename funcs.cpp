#include <iostream>
#include <time.h>
#include "Funcs.h"

void quickSort(int arr[], int a, int b)
{
    int new_a = a;
    int new_b = b;
    int halfPoint = arr[(b + a) / 2];
    while (new_a < new_b)
    {
        while (arr[new_a] < halfPoint) new_a++;
        while (arr[new_b] > halfPoint) new_b--;
        if (new_a <= new_b) mySwap(arr[new_a++], arr[new_b--]);
    }
    if (new_b > 0) quickSort(arr, 0, new_b);
    if (new_a < b) quickSort(arr, new_a, b);
}

void mySwap(int &a, int &b)
{
    if (&a != &b)
    {
        a += b;
        b = a - b;
        a = a - b;
    }
}

void showMass(const int arr[], int N)
{
    for (int i = 0; i < N; i++) std::cout << arr[i] << " ";
}

void fillArrayByRand(int arr[], int N, int divRandNumber, int sumRandNumber)
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % divRandNumber + sumRandNumber;
    }
}

