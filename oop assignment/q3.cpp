#include <iostream>
using namespace std ;

void timeOnJob ( int arvHr , int arvMin , bool arvIsAM ,int depHr , int depMin , bool depIsAM)
{
	int arvTimeInMin ;
	int depTimeInMin ;
	int timeOnJobInMin ;
	if((arvIsAM==true && depIsAM==true) || (arvIsAM==false && depIsAM == false)){
    	cout<<"invalid  input."<<endl;}
	else if ( arvIsAM == true && depIsAM == false )
	{
		arvTimeInMin = arvHr * 60 + arvMin ;
		depTimeInMin = depHr * 60 + depMin ;
		timeOnJobInMin = (720 - arvTimeInMin ) + depTimeInMin ;
		cout<<"time spent on job: "<<endl;
		cout<<timeOnJobInMin/60<<" hour(s) and"<<timeOnJobInMin%60<<" minutes"<<endl;
	}
	else if(arvTimeInMin <= depTimeInMin){
		timeOnJobInMin= depTimeInMin - arvTimeInMin;
		cout<<"Time spent on job: "<<timeOnJobInMin%60<<" hours and "<<timeOnJobInMin%60<<" minutes."<<endl;	
	}
    else
    cout<<"Invalid Input."<<endl;
    
	}


int main(){
	
	string employeeName;
	int arrivalHr;
	int departureHr;
	int departureMin;
	bool departureAM;
	char response;
	char isAM;
	int arrivalMin;
	bool arrivalAM;
	
	cout<<"This porgram calculates the total time spent by an employee on the job."<<endl;
	cout<<"To run the program, enter (y/Y)";
	cin>>response;
	
	while(response == 'y'|| response == 'Y'){
		
		cout<<"Enter employees name: ";
		cin>>employeeName;
		cout<<employeeName<<endl;
		
		cout<<"Enter (Y/y) if arrival is before 12AM: ";
		cin>>isAM;	
		if (isAM ==  'y' || isAM == 'Y'  ){
		arrivalAM = true ;}
        else
        arrivalAM = false ;	
		cout<<"Enter arrival hour: ";
		cin>>arrivalHr;
		cout<<"Enter arrival Minutes: ";
		cin>>arrivalMin;

		
		cout<<"Enter (y/Y) if departure is before 12PM";
		cin>>isAM;	
		if(isAM=='y' || isAM=='Y'){
		departureAM=true;}
		else
		departureAM=false;	
		cout<<"enter departure hour: ";
		cin>>departureHr;
		cout<<"enter departure minutes: ";
		cin>>departureMin;
		
		timeOnJob(arrivalHr, arrivalMin, arrivalAM, departureHr, departureMin, departureAM);
		

		
		cout<<"Wish to run the program again?(Y/y) only";
		cin>>response;
	}
}