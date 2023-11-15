#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "No Arg. Constructor Called." << endl;
        value = -1;
    }
    A(int value)
    {
        cout << "One Arg. Constructor Called." << endl;
        A::value = value;
    }
    void setVal(int value)
    {
        A::value = value;
    }
    int getVal(void)
    {
        return value;
    }

private:
    int value;
};

int main()
{
    A o1;
    cout << "value = " <<o1.getVal() <<endl;
    A o2(5);
    cout << "value = " <<o2.getVal() <<endl;
    A o3;
    o3 = A(9);
    cout << "value = " <<o3.getVal() <<endl;
    //A o4(2, 5); // error
}