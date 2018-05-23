#include <iostream> 

using namespace std;

/* syntax:
struct STRUCTURENAME {
    datatype variablename1;
    datatype variablename2;
} */

struct Restaurant {
    char name[30];
    int number;
};

//main function
int main(){
    //Assigning values to structures
    /*syntax :
    structurename objectname {
        value1,
        value2,
    } */
    
    Restaurant restaurant{
        "Saravana bhavan",
        2,
    };
    
    //Accessing values in structures
    //syntax : structure_object_name.elementname
    cout << "Restaurant name is : " << restaurant.name << endl;
    cout << "Restaurant number is :" << restaurant.number << endl;
}
