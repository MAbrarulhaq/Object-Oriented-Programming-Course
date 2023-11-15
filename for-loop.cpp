#include<iostream>

using namespace std;

void tableOf(int num, int till)
{
    for (int i = 1; i <= till; i = i + 1)
        cout << num << " x " << i << " = " << num * i << endl;
}

int main()
{
    tableOf(2, 10);
    // int limit = 10;

    // for (int i = 0; i < limit; i = i+1)
    //     cout << i << endl;

    // This is an infinite loop. The following parts are optional in a for loop:
    //  1. initialization
    //  2. condition
    //  3. expression
    // 4. body of the loop 
    // for ( ; ; )
    // {    }
    
    
}