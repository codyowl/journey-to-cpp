#include <iostream>

using namespace std;

int a ;

int *b ;

int main() {
    a = 20;
    b = &a;
    
    cout << "Before changing the value " << endl;
    cout << "The address of a is " << b << endl;
    cout << "The vale of a is " << *b << endl;
    
    cout << "After changin the value " << endl;
    //assigning 30 to b
    
    a = 30;
    cout << "The address of a is" << b << endl;
    cout << "The value of a which is assigned to b is" << *b << endl;
    cout << "The value of b is" << a << endl;
    
}
