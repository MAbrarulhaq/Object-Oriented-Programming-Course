#include<iostream>

using namespace std;

class A
{
    public:
        static int x;
        int y;
        static void print();
        void func()
        {}
        A()
        {
            x = 1;
            y = 5;
        }
        ~A()
        {
            cout << "Object Destroyed, " << x << " " << y << endl;
        }
};
int A::x = 3;

void A::print()
{
    cout << "x = " << x <<endl;
    // cout << "y = " << y <<endl; // not allowed
}

int main()
{
    A::print();
    A o1, o2, o3;
}