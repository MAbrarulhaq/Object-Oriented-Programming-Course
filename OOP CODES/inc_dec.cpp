#include<iostream>

using namespace std;

int main()
{
    int a = 5;
    int b;
    int n = 2;

    //b = a * n++;
    
    b = a * ++n;
    cout << "b = " << b << ", n = " << n <<endl; 
    // cout << n << endl;

    // n++; // equivalent to n = n + 1, n += 1
 
    // cout << n << endl;
}