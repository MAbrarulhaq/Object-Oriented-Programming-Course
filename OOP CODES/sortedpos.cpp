#include<iostream>

using namespace std;

int elem = 5;

int position(int sorted[], int val)
{
    int pos = 0;
    for (int i = 0; i < elem; i++)
    {
        if(val < sorted[i])
            break;
        pos = i + 1;
    }
    return pos;
}

int main()
{
    int arr[6];
    arr[0] = 2;
    arr[1] = 5;
    arr[2] = 7;
    arr[3] = 9;
    arr[4] = 11;

    cout << position(arr, 15) << endl;
}