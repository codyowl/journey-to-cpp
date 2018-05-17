#include <iostream>

using namespace std;

//class templates are similar to function templates except a slight variation in the syntax at the time of creating objects //

//creating class templates

template <class T>

class Firstclass {
    
    public :
         
        T generic_addition(T number1, T number2) {
             
            return number1 + number2;
         }
};

// main function
int main(){
    
    //creating objects for class template
    //syntax : class<typename> object;
    
    Firstclass<int> firstclassint;
    
    // generating results for integer addition
    
    int integer_addition_result;
    float float_addition_result;
    
    integer_addition_result = firstclassint.generic_addition(2,3);
    
    cout << "The integer addition result is " << integer_addition_result << endl;
    
    // gloat addition with same generic function
    Firstclass<float> firstclassfloat;
    
    float_addition_result = firstclassfloat.generic_addition(2.0, 3.0);
    
    cout << "The float addition result is " << float_addition_result << endl;
}
