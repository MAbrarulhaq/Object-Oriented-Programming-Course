#include<iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int width;

public:
    void set_len(int a)
    {
        length = a;
    }
    void set_wid(int a)
    {
        width = a;
    }
    int get_len()
    {
        return length;
    }
    int get_wid()
    {
        return width;
    }
    int area()
    {
        return width * length;
    }
};

int main()
{
    int L, W;
    rectangle g1;
    cout << "Enter the length and width of rectangle(L, W) ";
    cin >> L >> W;
    g1.set_len(L);
    // illegal g1.length=L; //because, length is private
    g1.set_wid(W);
    // illegal g1.width=W; //because width is private
    cout << "Length:" << g1.get_len() << endl;
    cout << "Width:" << g1.get_wid() << endl;
    cout << "Area: " << g1.area() << endl;
    return 0;
}