#include <iostream>

using namespace std;

int main() {
    int num = 6;
    float n = 3.1459;
    void *p = &n;
    p = &num;
    //cout<<p<<endl;
    
    cout << *(int*)p << endl; // error
    return 0;
}