#include<iostream>
using namespace std;

class DateOfBirth{
	private:
		int day;
		int month;
		int year;
	public:
		DateOfBirth(){
			this->day=1;
			this->month=1;
			this->year=2022;
		}
		DateOfBirth(int day,int month,int year){
			this->month=month;
			if(month<1 && month>12){
				month=1;
			}
			else{
					if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
						if(day>0 || day<=31){
							this->day=day;
						}
						else{
							this->day=1;
						}
					}
					else{
						if(day>0 || day<=30){
							this->day=day;
						}
						else{
							this->day=1;
						}
					}
				}
			if(year>=1900 && year<2022){
				this->year=year;
			}
			else{
				this->year=2022;
			}
		}
		void print(){
			cout<<"Date of Birth: "<<day<<"-"<<month<<"-"<<year<<endl;
			return;
		}
};

int main(){
	DateOfBirth d1,d2(31,7,2000);
	d1.print();
	d2.print();
}