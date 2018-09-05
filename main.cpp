#include <iostream>
#include "Funcs.h"

using namespace std;

int main()
{
    int N;
    cout << "Input N: ";
    cin >> N;
    int arr[N];

    fillArrayByRand(arr, N);

    quickSort(arr, 0, N - 1);

    cout << endl;
    showMass(arr, N);
    return 0;
}
