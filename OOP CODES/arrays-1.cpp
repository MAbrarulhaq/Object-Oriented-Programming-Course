#include<iostream>

using namespace std;

int main()
{
    int size = 5;
    int numbers[size];

    for (int i = 0; i < size; i = i + 1)
        cin >> numbers[i];

    for (int i = 0; i < size; i = i + 1)
        cout << numbers[i] << endl;
}