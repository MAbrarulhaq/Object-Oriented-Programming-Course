#include<iostream>

using namespace std;

int max_arr(int n[], int s)
{
    int max = n[0];

    for (int i = 1; i < s; i = i + 1)
    {
        if(max < n[i])
            max = n[i];
    }
    return max;
}

float avg_arr(int n[], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i = i + 1)
        sum += n[i]; // sum = sum + n[i]

    float avg = (float)sum/s;
    return avg;
}

int main()
{
    int numbers[] = {33, 12, 1, 112, 9, 86};
    int size = sizeof(numbers)/sizeof(int);
    cout << "Max value is " << max_arr(numbers, size) << endl;
    cout << "Avg. of the array is " << avg_arr(numbers, size) << endl;
}