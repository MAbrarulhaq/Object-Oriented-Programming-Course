#include<iostream>

using namespace std;

class clockType
{
    private:
        int hr;
        int min;
        int sec;
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const;
        void printTime() const;
        
};

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
    clockType ct;
    ct.setTime(6, 55, 32);
    ct.printTime();
    int h, m, s;
    ct.getTime(h, m, s);
    cout << h << "\t" << m << "\t" << s << endl;
}