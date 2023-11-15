#include <iostream>

using namespace std;

int main() {
    int arr[] = {2, 5, 1, 6, 7};
    int *p1 = arr; // &arr[0], &arr
    int *p2 = &arr[4];
    
    cout << (p2 - p1) << endl;
    

    return 0;
}