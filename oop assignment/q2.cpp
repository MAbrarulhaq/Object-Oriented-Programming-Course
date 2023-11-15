#include <iostream>
#include <cmath>

using namespace std;
void func1();
void func2(int& a,int& b,double& c);


void func1()
{
 cout << "To run the program, enter 1." << endl;
 cout << "To exit the pogram, enter 99." << endl;
 cout << "Enter 1 or 99: ";
}
void func2(int &a, int &b, double &c)
{
 cout << "value for a is: ";
 cin >> a;
 cout << "value for b is:";
 cin >> b;

 if (a >= b)
  c = pow(a, b);

 else if (a < b)
  c = pow(b,a);

 else if (b = 0 && a!= 0)
  c = sqrt(abs(a));

 else if (a = 0 && b != 0)
  c = sqrt(abs(b));

 else
  c = 0;
}
int main()
{
 int num1, num2;
 double num3;
 int choice;

 do {
  func1();
  cin >> choice;
  cout << endl;
  if (choice == 1)
  {
   
   func2(num1, num2, num3);
  cout << "first number inputed:"<<num1 <<endl<<"2nd number inputed :"<<  num2 <<endl <<"The final output :"<< num3 << endl;
  }
 } 
 while (choice != 99);
 return 0;
}