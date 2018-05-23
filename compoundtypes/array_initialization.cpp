#include <iostream>

using namespace std;

//Initializing array is the concept of assigning values to an array at the time of 
//declaration

/* syntax :
   type 1 : datatype ARRAYNAME[ARRAYSIZE] = {list of array elements}
   type 2 : datatype ARRAYNAME[] = {list of array elements}
   Note : we can leave the bracket empty without specifying size as shows in type2. */
   
int marks[4] = {23, 24, 35, 45};

int book_page_number[] = {1,34,45,66,77,89};

//main function
int main() {
    cout << "The first element in marks arrays is" << marks[0] << endl;
    cout << "The first elements in book page number array is: " << book_page_number[0] << endl;
}
