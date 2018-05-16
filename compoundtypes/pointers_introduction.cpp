#include <iostream>

using namespace std;

int firstvariable;

int *pointervariable;

int main() {

firstvariable = 20;

//assigning variable's value to a pointer

//syntax : pointervariable = &variablename


pointervariable = &firstvariable;

cout <<"The address stored in pointervarialbe is " << *pointervariable << endl;

cout << "The value is " << pointervariable << endl;

}