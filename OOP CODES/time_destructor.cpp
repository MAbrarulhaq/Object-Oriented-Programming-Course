#include<iostream>

using namespace std;

class clockType
{
    private:
        int hr;
        int min;
        int sec;
    public:
        clockType(int h = 0, int m = 0, int s = 0);
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const;
        void printTime() const;
        ~clockType()
        {
            cout << "Destructor Called!" << endl;
        }
        
};
clockType::clockType(int h, int m, int s)
{
    hr = h;
    min = m;
    sec = s;
}

void clockType::setTime(int h, int m, int s)
{
    hr = h;
    min = m;
    sec = s;
}

void clockType::getTime(int& h, int& m, int& s) const
{
    h = hr;
    m = min;
    s = sec;
}

void clockType::printTime() const
{
    cout << hr << ":" << min << ":" << sec << endl;
}

int main()
{
    // clockType ct;
    // ct.setTime(6, 55, 32);
    // ct.printTime();
    // int h, m, s;
    // ct.getTime(h, m, s);
    // cout << h << "\t" << m << "\t" << s << endl;
    // clockType c1(9,7,46);
    // c1.printTime();
    // cout << "End" << endl;

    clockType empTime[3];
    int h, m, s;
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter Employee " << (i + 1) << " time: ";
        h=4;
        m=5;
        s=3;
        empTime[i].setTime(h, m, s); 
    }

    for(int i = 0; i < 3; i++)
    {
        cout << "Employee " << (i + 1) << " time: ";
        empTime[i].printTime(); 
    }
}