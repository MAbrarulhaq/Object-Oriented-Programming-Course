#include<iostream>

using namespace std;

class A
{
    private:
        int x;
    public:
        void setX(int x)
        {
            A::x = x;
        }
        void print()
        {
            cout << "x = " << x << endl;
        }
};

int main()
{
    A obj;
    obj.setX(9);
    obj.print();
}
