#include<iostream>
using namespace std;


void initialize(int &x, int &y, char &z){
    x=0;
    y=0;
    z=' ';

}
void getHoursRate(double &hours,double &rate){
    cout<<"Hours worked:";
    cin>>hours;
    cout<<"Rate per hour:";
    cin>>rate;
}
double paycheck(double &hours,double &rate,double &amount)
{
    if (hours<=40){
        amount=(rate*40);
    }
    else if(hours>40){
        amount=(rate*40)+(hours-40)*(rate*1.5);

    }
    return amount;
    
}
void printcheck(double hours,double rate,double amount){

cout<<"Hours worked:"<<hours<<endl;
cout<<"rate per hours:"<<rate<<endl;
cout<<"salary of a  person:"<<amount<<endl;
}
void funcOne(int &x, int &y){
    int a;
    cout<<"enter a number:";
    cin>>a;
    x=(x*2)+y-a;
    cout<<"value of x is now:"<<x<<endl;
    
}
void nextChar(char z){
    z=z+1;
    cout<<"the next charater is:"<<(char) z<<endl;

}
int main(){
    int x,y;
    char z;
    double rate,hours;
    double amount;
    initialize(x,y,z);
    getHoursRate(hours,rate);
    paycheck(hours,rate,amount);
    printcheck(hours,rate,amount);
    nextChar(z);
    funcOne( x,y);
    

}