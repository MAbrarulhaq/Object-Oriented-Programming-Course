#include<iostream>

using namespace std;

class A
{
    private: int x;
    protected: int y;
    public: int z;
    void print()
    {
        cout << "Class A" << endl;
    }
};

class B:private A
{
    private: int w;
    public:
        void setValues()
        {
            // x = 7; // Not Allowed
            y = 2;
            z = 1;
        }
};

int main()
{
    B ObjB;
    ObjB.setValues();
    ObjB.print(); 
    ObjB.z = 0;
    cout << "Finished!" << endl;
}