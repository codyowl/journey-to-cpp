#include <iostream>

using namespace std;

class Baseclass {
    public :
        int first_function() {
            cout << "Text from first function";
        }
};

int main(){
    
    //inheriting base class
    
    //syntax => class subclassname : access_specifier superclassname
    
    class Subclass : public Baseclass{
        
    };
    
    //creating object for Subclass
    
    Subclass sub;
    
    //accessing baseclass function with the object created for subclass
    
    sub.first_function();
    
}