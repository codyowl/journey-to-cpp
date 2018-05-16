#include <iostream>

using namespace std;

//function declaration and definition

//addition
int add(int firstnumber, int secondnumber){
    int final_result;
    final_result = firstnumber + secondnumber;
    return final_result;
}

//subtraction
int subtract(int firstnumber, int secondnumber){
    int subtract_result;
    subtract_result = firstnumber - secondnumber;
    return subtract_result;
}

//multiplication
int multiply(int firstnumber, int secondnumber){
    int multiply_result;
    multiply_result = firstnumber * secondnumber;
    return multiply_result;
}

//main function
int main(){
    
    //variable declartation to call the function
    int add_function_result_getter;
    int subtract_function_result_getter;
    int multiply_function_result_getter;
    
    add_function_result_getter = add(2,3);
    cout << "The addition result is " << add_function_result_getter << endl ;
    
    subtract_function_result_getter = subtract(3,2);
    cout << "The subtraction result is " << subtract_function_result_getter << endl ;
    
    multiply_function_result_getter = multiply(3,3);
    cout << "The multiplication result is" << multiply_function_result_getter << endl ;
}