#include <iostream>

using namespace std;

//global variable
int samevariable = 100;


//main function
int main() {
    
    //local variable
    int samevariable = 200;
    
    cout << "The same variable value is " << samevariable << endl;
    
    //to acess the global variable
    //syntax ::global_variable_name
    
    cout << "After using the scope of resolution operator" << endl;
    
    cout << "The same variable value is " << ::samevariable;
}
