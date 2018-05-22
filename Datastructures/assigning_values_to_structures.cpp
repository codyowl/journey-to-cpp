#include <iostream>
#include <string>

using namespace std;

//creating structures
/* syntax : struct STRUCTURE_NAME {
            definitions...
}*/

struct Restaurant {
	string name;
	int number;
};


//main function 
int main() {
	struct Restaurant restaurant;

	
	restaurant.name = "saravana bhavan";
	restaurant.number = 25;

	struct Restaurant restaurant2;

	restaurant2.name = "vasantha bhavan";
	restaurant2.number = 30;
	
	cout << "First structure's details: " << restaurant.name << "," << restaurant.number << endl;
	cout << "Second structure's details: " << restaurant2.name << "," << restaurant2.number << endl;

}
