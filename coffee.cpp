#include<iostream>
using namespace std;
int main(){
int a;
cout<<"chose your favorite beverage the following list!"<<endl;
cout<<"1.coffee  2.Tea  3.coke  4.orangejuice!"<<endl;
int coffee = 0;
int tea = 0;
int coke = 0;
int orangejuice = 0;
int y = 1;
while (y != -1){
     cout<<"plz input the favorite beverage of person #"<<endl;
     cin>> a;
     cout<<"chose 1,2,3,or4 from the above menu or -1 to exit program"<<endl;
     cout<< "" <<endl;
     cin>> y;

if (y == 1){
  coffee += 1;
}

else if (y == 2){
      tea += 1;

}
else if (y == 3){
      coke += 1;
}
else if (y == 4){
      orangejuice += 1;
}
}
cout<<"beverage          Number of votes!"<<endl;
cout<<"**********************************"<<endl;
cout<<"coffee        "<< coffee<<endl;
cout<<"tea           "<< tea<<endl;
cout<<"coke          "<< coke<<endl;
cout<<"orange juice  "<< orangejuice<<endl;

   return 0;
}
