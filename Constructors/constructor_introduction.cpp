#include <iostream>
#include <cstring>

using namespace std;

//Creating constructors
//syntax : create a method without datatype inside a class in the name of the class
/*
 class Myclass{
	Myclass()
	{
		}}
*/	

class Vehicle{
    public:	
		int cc;
		int modelnumber;

		//creating the constructor	
		Vehicle(){
			cc = 350;
			modelnumber = 1233;
		}
};


int main()

{   
    //Creating object for the class
	Vehicle v;

	cout << "cc: "<< v.cc << endl << "modelnumber: "<< v.modelnumber;
	return 1;
}

