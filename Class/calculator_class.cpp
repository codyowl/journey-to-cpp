#include <iostream>

using namespace std;

class Calculator{
    public:
        int add(int number1, int number2){
            return number1 + number2;
        }
        
        int subtract(int number1, int number2){
            return number1 - number2;
        }
        
        int multiply(int number1, int number2){
            return number1 * number2;
        }
};

//main function

int main(){
    
    //creating class instance
    Calculator calc;
    
    //accessing Calculator methods with the instance
    
    cout <<"The addition function result is " << calc.add(2,3) << endl;
    
    cout <<"The subtraction function result is " << calc.subtract(3,2) << endl;
    
    cout <<"The multiply function result is " << calc.multiply(3,3) << endl;
}