#include <iostream>
#include <string>

using namespace std;

//union and structures are similar, group of elements of different datatypes.
//only difference is union will take same memory allocation for the all the elemets while structure is not.
//union will take the largest memory which is of the largest member of it.
/* syntax : union UNIONNAME{
               definitions;
	}
	calling union:
		 unionname object
*/			

union College {
	string name;
	int number;
};


// main function
int main() {
	College college;
	college.name = "IIT";
	college.number = 2;

	College college2;
	college.name = "MIT";
	college.number = 3;

	cout << "The First union values are: " << college.name << "," << college.number;
	cout << "The second union values are: " << college.name << "," << college.number;
}

//Note : Incase of union it will allocate only one value at a time.
