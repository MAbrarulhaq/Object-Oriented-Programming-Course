#include <iostream>
using namespace std;

class Engine{
	public:
		void start(){
			cout<<"The engine has been started."<<endl;
		}
		void reverse(){
			cout<<"Car is in reverse."<<endl;
		}
		void stop(){
			cout<<"The car has stopped."<<endl;
		}
};
class Wheel{
	private:
		int wheel;
	public:
		void inflate(){
			cout<<"The wheels has been inflated."<<endl;
		}
};
class Window{
	private:
		int win;
	public:
		void rollUp(){
			win=1;
			cout<<"window has been rolled up."<<endl;
	}
		void rollDown(){
			win=0;
			cout<<"window is rolled down."<<endl;
		}
};
class Door{
	private:
		Window winOne;
	public:
		void open(){
			winOne.rollUp();
	}
		void close(){
			winOne.rollDown();
			
		}
		void openDoor(){
			cout<<"The door has been opened."<<endl;
		}
		void closeDoor(){
			cout<<"The door is closed."<<endl;
		}
};
class Car{
	private:
		Engine e1;
		Wheel w[4];
		Door d[4];
		string model;
	public:
		void runEngine(){
			e1.start();
		}
		void stopEngine(){
			e1.stop();
		}
		void reverseEngine(){
			e1.reverse();
		}
		void inflateWheel(){
			for (int i=0; i<4;i++){
				w[i].inflate();	
			}
		}
		void openDoor(){
			for (int i=0; i<4; i++){
				d[i].openDoor();
			}
		}
		void closeDoor(){
			for (int i=0; i<4; i++){
				d[i].closeDoor();
			}
		}
		void openWin(){
			for (int i=0; i<4; i++){
				d[i].open();
			}	
		}
		void closeWin(){
			for (int i=0; i<4; i++){
				d[i].close();
			}
		}
		void setModel(string n){
			model=n;
		}
		string getModel(){
			return model;
		}
};

int main(){
	Car car;
	car.setModel("Honda");
	int k;
		cout<<"Enter the function you want to perform: "<<endl;
		cout<<"1 TO RUN ENGINE, 2 TO OPEN DOORS, 3 TO OPEN WINDOWS, 4 TO INFLATE WHEELS"<<endl;
		cout<<"5 TO REVERSE ENGINE, 6 TO CLOSE WINDOWS, 7 TO CLOSE DOORS "<<endl;
		cout<<"8 TO STOP ENGINE AND 9 TO GET MODEL"<<endl;
		cout<<"hit 99 to end the program."<<endl;
		cin>>k;
	while(k!=99){
		switch(k){
			case 1:
				car.runEngine();
				break;
			case 2:
				car.openDoor();
				break;
			case 3:
				car.openWin();
				break;
			case 4:
				car.inflateWheel();
				break;
			case 5:
				car.reverseEngine();
				break;
			case 6:
				car.closeWin();
				break;
			case 7:
				car.closeDoor();
				break;
			case 8:
				car.stopEngine();
				break;
			case 9:
				car.getModel();
				break;
			default:
				break;
		}
		cout<<"Enter the function you want to perform: "<<endl;
		cout<<"PRESS 1 TO RUN ENGINE, 2 TO OPEN DOORS, 3 TO OPEN WINDOWS, 4 TO INFLATE WHEELS"<<endl;
		cout<<"PRESS 5 TO REVERSE ENGINE, 6 TO CLOSE WINDOWS, 7 TO CLOSE DOORS "<<endl;
		cout<<"8 TO STOP ENGINE AND 9 TO GET MODEL"<<endl;
		cout<<"hit 99 to end the program."<<endl;
		cin>>k;
	}
}
