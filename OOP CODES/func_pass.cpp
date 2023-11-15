#include<iostream>

using namespace std;

void func_val(int num) // pass by value
{
    cout << "Before changing the value: " << num << endl;
    num = 1;
    cout << "After changing the value: " << num << endl;
}

void func_ref(int &num) // pass by reference
{
    cout << "Before changing the value: " << num << endl;
    num = 0;
    cout << "After changing the value: " << num << endl;
}

int main()
{
    int num = 9;
    cout << "Before function call: " << num << endl;
    func_val(num); 
    cout << "After function call: " << num << endl;

    cout << "Before function call: " << num << endl;
    func_ref(num); 
    cout << "After function call: " << num << endl;
   // func_val(num);
}