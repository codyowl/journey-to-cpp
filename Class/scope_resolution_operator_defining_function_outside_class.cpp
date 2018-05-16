#include <iostream>

using namespace std;

class Firstclass {
    
    public:
    
        //declaring two function
        int first_function();
        
        int second_function();
};

//function definition outside the class
    
    /*syntax :
    classname :: functionname {
        function definition
    } */
    
    int Firstclass :: first_function() {
        
        cout << "Text from first function" << endl;
    };
    
    int Firstclass :: second_function() {
        
        cout << "Text from second function";
    };
    

int main(){
    
    
    //createing object for the class
    Firstclass firstclass;
    
    //acessing the function which are defined outside the class
    
    firstclass.first_function();
    firstclass.second_function();
}