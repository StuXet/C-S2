#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));

    const int size = 1000;
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 1000 + 1;
    }

    sort(arr, arr + size);

    for(int j = 0; j < size; j++)
    {
    	cout << arr[j] << endl;
	}
}
