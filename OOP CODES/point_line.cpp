#include<iostream>

using namespace std;

class point
{
    private:
        int x, y;
    public:
        void setPoint(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        void printPoint() const
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }      
};

class Line
{
    private:
        point p1, p2; // Composition (has-a)
    public:
        void setLine(int x1, int y1, int x2, int y2)
        {
            p1.setPoint(x1, y1);
            p2.setPoint(x2, y2);
        }
        void setLine(point p1, point p2)
        {
            this->p1 = p1;
            this->p2 = p2;
        }
        void printLine()
        {
            cout << "Starting point: ";
            p1.printPoint();
            cout << "Ending point: ";
            p2.printPoint();
        }
};

int main()
{
    Line l;
    l.setLine(2, 5, 7, 0);
    l.printLine();
}