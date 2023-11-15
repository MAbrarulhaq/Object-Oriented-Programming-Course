#include<iostream>
using namespace std;
int main(){
int a,i,d;
cout<<"Enter the number!";
cin>> a;
int sum = 0;
d = a;
while (a>0){
    i = a%10;
    sum = sum*10+i;
    a = a/10;

}
if (d == sum){
  cout<<d<<" is a palindrome number!"<<endl;
}
else{
    cout<<d<<" is not a palindrome number!"<<endl;

}
    return 0;
}
