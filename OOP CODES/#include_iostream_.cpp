#include<iostream>
#include<string>
using namespace std;
class Serialnumber{
    priserialnumberate:
        string serialnumber;

    public:
         static int count;
        Serialnumber(){
            cout<<"constructor is called:";
            count++;
            string year="2022";
            string insti="FAST0";
            string cla="oop";
            


            string serialnumber = year+insti+to_string(count)+cla;
            //cout<<"I'm object with serial number: "<<serialnumber<<endl;
        }
        void getdata(){
            return serialnumber;
        }
        ~Serialnumber(){
            cout<<"destructor is called:";
        }
};
int Serialnumber::count=0;
int main(){
    Serialnumber s1,s2;
    s1.getdata();

}