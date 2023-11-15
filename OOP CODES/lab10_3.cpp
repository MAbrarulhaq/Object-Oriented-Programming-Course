#include <iostream>
using namespace std;

class restrictedarea{
	private:
		string Name, Rank;
		int Id;
		static int count;
		bool palindrome(int a){
	     int n, digit, rev = 0;
	     n = a;
	     do
	     {
	         digit = a % 10;
	         rev = (rev * 10) + digit;
	         a = a/ 10;
	     } while (a != 0);
	     if (n == rev)
	         return true;
	     else
	         return false;
	}
	public:
		void identify(){
			cout<<"Enter the officer's ID here: ";
			cin>>Id;
			cout<<"Enter the name of the officer: ";
			cin>>Name;
			cout<<"Enter the Rank of the officer: ";
			cin>>Rank;
			if((palindrome(Id))==true){
				cout<<"You are not allowed to enter."<<endl;
			}
			else{
				cout<<"You are allowed to enter."<<endl;
					count++;
			}
		}
		static void getCounter(){
			cout<<"The number of officers entered are: "<<count<<endl;
		}
		
};

int restrictedarea::count=0;


int main(){
	restrictedarea::getCount();
	
	restrictedarea A1;
	
	int l=4;
	while(l!=3){
		switch(k){
			case 1:
				A1.identify();
				break;
			case 2:
				A1.getCounter();
				break;
		}
		cout<<"please select the desired option: "<<endl<<"1.Enter Id"<<endl<<"2.Get count"<<endl<<"3.Exit"<<endl;
		cin>>l;
	}
}

