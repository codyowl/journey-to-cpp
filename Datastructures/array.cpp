#include <iostream>
#include <cstring>

using namespace std;


int main()

{

	//Assigning values to array
	//syntax datatype arrayname[size] = {sequence of elements}

	int numbers[5] = {1,2,3,4,5};

	//Access by index
	cout <<"The first value of numbers is : "<< numbers[0] << endl;
	
	return 0;

	//Multidimensional array 
	//two dimenstional array
	//syntax : datatype arrayname[row][column]

	int numbers[2][3] = {
		//first row
		{2, 3, 4},
		{4, 5, 6},
		{7, 8, 9},
	};

	//Accessing two dimensional array by index
	cout <<"The second row , third column value is :" << numbers[2][3] << endl;

}	

	

