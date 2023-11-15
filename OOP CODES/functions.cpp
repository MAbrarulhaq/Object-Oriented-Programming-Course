#include<iostream>
#include<string.h>

using namespace std;

void sum()
{
    int a;
    int b;
    cout<<"Value of a: ";
    cin >> a;
    cout<<"Value of b: ";
    cin >> b;
    cout << "sum = "<< a + b <<endl;
}

int sum2(int a, int b)
{
    return a + b;
}

void checkVal(int val)
{
    cout << "Inside the function (before modification): " << val <<endl;
    val = 9;
    cout << "Inside the function (after modification): " << val <<endl;
}

int main()
{
    int val = 7;
    cout << "In main (before function call): " << val <<endl;
    checkVal(val);
    cout << "In main (after function call): " << val <<endl;
}
