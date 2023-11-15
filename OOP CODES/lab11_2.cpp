#include <iostream>
using namespace std;

class DoB{
	private:
		int month,day,year;
	public:
		DoB(int d=1, int m=1, int y=2022){
			if (m<1 or m>12){
				month=1;
				day=1;
				year=2022;
			}
			else{
				month=m;
				if(d>0){
					if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12){
						if(d<=31){
							day=d;
							if(y>=1900 and y<=2022){
								year=y;
							}
							else{
								year=2022;
							}
						}
						else{
							day=1;
						}
					}
					else{
						if(d<=30){
							day=d;
							if(y>=1900 and y<=2022){
								year=y;
							}
							else{
								year=2022;
							}
						}
						else{
							day=1;
						}
					}
				}
				else{
					day=1;
				}
			}
		}
		void print();
};
void DoB::print(){
	cout<<"date of birth is: "<<day<<"/"<<month<<"/"<<year<<endl;
} 

struct Name{
	string firstName, lastName;
};
class Person{
	private:
		Name n1;
		DoB d1;
		char gender;
	public:
		Person(string firstN="Abrar", string secondN="ulhaque", char g='M', int d=9, int m=10, int y=2001){
			gender=g;
			n1.firstName=firstN;
			n1.lastName=secondN;
			d1=DoB(d,m,y);
		}
		void setGender(char a){
			gender=a;
		}
		void setFirstName(string a){
			n1.firstName=a;
		}
		void setLastName(string b){
			n1.lastName=b;
		}
		void setDoB(int d, int m, int y){
			d1=DoB(d,m,y);
		}
		void printData();
};
void Person::printData(){
	cout<<"The name is: "<<n1.firstName<<" "<<n1.lastName<<endl;
	cout<<"The gender is: "<<gender<<endl;
	d1.print();
}
int main(){
	Person p1;
	p1.setGender('M');
	p1.setFirstName("hamza");
	p1.setLastName("hassan");
	p1.printData();
}
