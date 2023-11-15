#include<iostream>

using namespace std;

void func(int arr[])
{
    arr[3] = 9;
}

int main()
{
    int num[] = {1, 2, 4, 0};
    cout << "Before function call" <<endl;
    for (int i = 0; i < 4; i = i + 1)
        cout << num[i] << "\t";
    
    func(num);

    cout << endl << "After function call" <<endl;
    for (int i = 0; i < 4; i = i + 1)
        cout << num[i] << "\t";
}