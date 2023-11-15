#include <iostream>

using namespace std;

int main() {
    // will only reverse the arrays with odd number of elements.
    int arr[] = {2, 5, 1, 6, 7};
    cout<<sizeof(arr)/sizeof(int)<<endl;
    int *start = arr; // &arr[0], &arr
    int *end = &arr[4];
    
    while(start != end)
    {
        //swapping values
        int temp = *start;
        *start = *end;
        *end = temp;
        start++; // next element
        end--; // previous element
    }
    
    for(int i = 0; i < 5; i++)
        cout << arr[i] << "\t";

    return 0;
}