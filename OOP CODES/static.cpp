#include<iostream>

using namespace std;

void func()
{
    static int i = 0;
    cout << i << endl;
    i++;
}


int main()
{
    for(int j = 0; j < 5; j++)
        func();
}