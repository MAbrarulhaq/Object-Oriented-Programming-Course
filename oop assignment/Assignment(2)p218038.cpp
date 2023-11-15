#include <iostream>
using namespace std;

class Room{
    protected:
        int roomNo;
        string type;
        int rent;
        string status;
        int checkOutTime;
        int CheckInTime;
    
    public:
    // constructor fucntion for room class 
        Room(){
            this->roomNo = 0;
            this->rent = 0;
            this->status = "free";
            this->type = "null";
        	checkOutTime=0;
        	CheckInTime=0;
        }
        // setter function for room class to set the values
        void setData(int roomNo, string status,int checkOutTime,int CheckInTime){
//            this->rent = rent; // assigning the values to varibles;
            this->roomNo = roomNo;
//            this->type = type;
            this->status = status;
            this->checkOutTime=checkOutTime;
            this->CheckInTime=CheckInTime;
        }
        // function to get data from the class
        int getRoomNo(){
            return this->roomNo;
        } 
        int getRent(){
            return this->rent;
        }
        string getStatus(){
            return this->status;
        }
        string getType(){
            return this->type;
        }
         int getCheckInTime(){
             return this->CheckInTime;
         }
         int getcheckOutTime(){
             return this->checkOutTime;
         }
         void settypeandrent(int rent,string type){
         	this->rent=rent;
         	this->type=type;
         	
		 }

};

//hotel class
class Hotel : public Room{
    private:
        string nameOfHotel;
        string location;
        string nameOfOwner;
        Room rooms[10];
        static int bookingId;

    public:
        //constructor for the hotel class
        Hotel(){
            this->nameOfHotel = "null";
            this->location = "null";
            this->nameOfOwner = "null";
            bookingId++;
        }
        void setroomsrentandtype(){
        	for(int i=0;i<4;i++){
        		this->rooms[i].settypeandrent(2000,"Basic");
			}
        	for(int i=4;i<7;i++){
        		this->rooms[i].settypeandrent(3000,"Standard");      		
			}
        	for(int i=7;i<10;i++){
          		this->rooms[i].settypeandrent(4000,"Exclusive");     		
			}
		}
        void setData(string nameOfHotel, string location, string nameOfOwner,int roomNo, string status,int checkOutTime,int CheckInTime){
            this->nameOfHotel = nameOfHotel;
            this->location = location;
            this->nameOfOwner = nameOfOwner;
            cout<<"name of the owner:"<<this->nameOfOwner<<endl;
            cout<<"name of the hotel:"<<this->nameOfHotel<<endl;
            cout<<"location of the hotel:"<<this->location<<endl;
            rooms[roomNo].setData(roomNo,status,checkOutTime,CheckInTime);

        }
        void checkin(int roomno){
        	cout<<"checked in time "<<this->rooms[roomno].getCheckInTime()<<endl;
		}
		void checkout(int bookingid){
        	cout<<"checkout in time "<<this->rooms[bookingid].getcheckOutTime()<<endl;
		}
        void getAvailRoom(){
            for(int i = 0;i<= 9;i++){
                if(this->rooms[i].getStatus() == "free"){
                    cout << "room No: " << i+1 << endl;
                    cout << "room type: " << rooms[i].getType() << endl;
                    cout << "room rent: " << rooms[i].getRent() << endl;
                }
            }
        }
        void showRoomSummary(int roomNo){
        	if(this->rooms[roomNo].getStatus()=="free"){
        		cout<<"Room  number "<<roomNo<<" is free "<<endl;
			}
			else{
				cout<<"Room number" <<roomNo<<"is occupied"<<endl;
				cout<<"this is checked in time "<<this->rooms[roomNo].getCheckInTime()<<endl;
			}
            cout << "the status of the room is: " << rooms[roomNo].getStatus() << endl;
            cout << "check in Time: " << rooms[roomNo].getCheckInTime()<<endl;
        
         }

        //setter and getter of the hotel class

};
//int roomNo, int rent, string status, string type
int Hotel::bookingId = 0;
int main(){
	Hotel h1;
	h1.setroomsrentandtype();
	h1.setData("serena","isl","Abrar ul haque",1,"Occupied",12,23);
    
	h1.setData("serena","isl","Abrar ul haque",2,"Occupied",12,23);
	h1.setData("serena","isl","Abrar ul haque",3,"Occupied",12,23);
	h1.setData("serena","isl","Abrar ul haque",4,"Occupied",12,23);
	h1.setData("serena","isl","Abrar ul haque",5,"Occupied",12,23);
	h1.setData("serena","isl","Abrar ul haque",6,"Occupied",12,23);
	h1.setData("serena","isl","Abrar ul haque",7,"Occupied",12,23);
	h1.setData("serena","isl","Abrar ul haque",8,"Occupied",12,23);
	h1.showRoomSummary(1);
	h1.checkin(1);
	h1.checkout(1);
	h1.getAvailRoom();
	
    
}