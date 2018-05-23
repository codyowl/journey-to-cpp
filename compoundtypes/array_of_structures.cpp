#include <iostream>

using namespace std;

//structure declaration
struct Car {
    char Brandname[30];
    char Type[30];
    char color[20];
};

/* Syntax :
   structurename objectname[size] {
       {value1, value2, .....},
       {value1, value2, .....},
   }; */
   
// main function
int main() {
    Car car[3] {
        {"Honda", "Petrol", "Red"},
        {"Maruti", "Diesel", "Yellow"},
    };
    
    //Accessing values
    // syntax objectname[index].elementname
    cout << "First structure details: " << endl;
    cout << "Brand :" << car[0].Brandname << endl;
    cout << "Type :" << car[0].Type << endl;
    cout << "Color:" << car[0].color << endl;
    
    cout << "Second structure details:" << endl;
    cout << "Brand :" << car[1].Brandname << endl;
    cout << "Type :" << car[1].Type << endl;
    cout << "Color :" << car[1].color << endl;
}
   
