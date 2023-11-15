#include<iostream>

using namespace std;

int main()
{
    const int r = 2;
    const int c = 3;
    int mat[r][c] = {{2, 5, 1}, 
                    {112, 56, 0}};

    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
            cout << mat[i][j] << "\t";

        cout << endl;
    }
    
    int sum = 0;

    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
            sum += mat[i][j];
    }
    
    cout << "Sum of the matrix is " << sum << endl;
}