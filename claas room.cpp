#include <iostream>
using namespace std;

class Room{
	private: 
	double length;
	double breath;
	public:
		Room(){
			length =6.9;
			breath =4.2;
		}
		Room(double l,double b){
			length=6.9;
			breath=4.2;
		}
		Room(double len) {
			length =len;
			breath =7.2;
		}
		
		double calculateArea(){
			return length * breath;
		}
};
int main (){
	Room room1, room2(8.2,6.6),room3(8.2);
	
	cout << "when no argument is passed:"<< endl;
	cout<<"Area of room = "<< room1.calculateArea() << endl;
	
	cout << "\nWhen (8.2,6.6) is passed:"<< endl;
	cout<<"Area of room = "<< room1.calculateArea() << endl;
	
	cout << "\nwhen breath is fixed to 7.2 and (8.2) is passed :"<< endl;
	cout<<"Area of room = "<< room1.calculateArea() << endl;
	return 0;
	}

