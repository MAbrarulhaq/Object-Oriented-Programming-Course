#include <iostream>
using namespace std;

//declaring a class named Time
class TimeType{
	int hour;
	int minute;
	int second;
	
	public://declaring construtor functions
		TimeType();
		TimeType(int hour, int minute, int second);
		
		//declaring member funtions
		void display();
		void addTime(TimeType x, TimeType y);
		TimeType operator + (const TimeType& t);
};
//initilizing consturtor fuctions
TimeType::TimeType(){
	this->hour = 0;
	this->minute = 0;
	this->second = 0;
}
TimeType::TimeType(int hour, int minute, int second){
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

//initializing member functions
void TimeType::display(){
	cout<<"time: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
}
//adding two time objects and storing new time in third object
void TimeType::addTime(TimeType x ,TimeType y){
	int totalTimeX = ((x.hour*3600)+(x.minute*60) + x.second);
	int totalTimeY =  ((y.hour*3600)+(y.minute*60) + y.second);
	int totalTime = totalTimeX + totalTimeY;
	this->hour = totalTime / 3600;
	this->minute = (totalTime % 3600) / 60;
	this->second = (totalTime % 3600)%60;
}	
TimeType TimeType::operator + (const TimeType& t){
	TimeType temp;
	int totalTimeX = ((this->hour*3600)+(this->minute*60) + this->second);
	int totalTimeY =  ((t.hour*3600)+(t.minute*60) + t.second);
	int totalTime = totalTimeX + totalTimeY;
	temp.hour = totalTime / 3600;
	temp.minute = (totalTime % 3600) / 60;
	return temp;
}
int main(){
	//declaring time objects
	TimeType t1(1,3,20),t2(2,61,70),t3;
	//adding two time objects
	t3.addTime(t1,t2);
	//displaing the values
	t3.display();
}
