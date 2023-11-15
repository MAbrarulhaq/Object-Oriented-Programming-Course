#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,i,d,y;
cout<<"Enter the number!";
cin>> a;
int digit = 0;
int sum = 0;
d=a;
y = d;

while(d>0){
    d = d/10;
    digit++;
}

while (a>0){
    i = a%10;
    sum += pow(i,digit);
    a = a/10;

}

if (y == sum){
    cout<<"aramstrong number!";
}
else{
   cout<<"not aramstrong number!";

}

}
