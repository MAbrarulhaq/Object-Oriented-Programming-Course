#include<iostream>

using namespace std;

struct point
{
    int x, y;
};

void userinput(point& p)
{
    cout << "Enter values of x and y ";
    cin >> p.x >> p.y;
}

void graphpoint(char grid[][15], point p)
{
    grid[p.y][p.x] = '*';
    cout << p.y << "\t" << p.x << endl;
}

void printgrid(char grid[][15], int rows, int cols)
{
    for (int i = 0; i < rows; i = i + 1)
    {
        for (int j = 0; j < cols; j = j + 1)
            cout << grid[i][j];
        cout << endl;   
    }
}

int main()
{
    const int rows = 5;
    const int cols = 15;
    char grid[rows][cols];

    for (int i = 0; i < rows; i = i + 1)
    {
        for (int j = 0; j < cols; j = j + 1)
            grid[i][j] = '-';   
    }

    point p1;
    userinput(p1);
    graphpoint(grid, p1);
    printgrid(grid, rows, cols);
}