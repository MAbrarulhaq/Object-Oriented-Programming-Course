#include<iostream>

using namespace std;

int main()
{
    int num = 10;
    int *p=&num;
    p = &num;
    cout << *p <<endl;   
      
}
