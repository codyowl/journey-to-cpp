#include <iostream>

using namespace std;

//structure declaration
struct Book {
    char name[30];
    char author[30];
};

//main function
int main(){
    Book book{
        "Digital Fortress",
        "Dan brown",
    };
    
    Book book2{
        "Time Machine",
        "H.G Wells",
    };
    
    //First book details
    cout << "First book name :" << book.name << endl;
    cout << "First book author: " << book.author << endl;
    
    //Second book details
    cout << "Second book name :" << book2.name << endl;
    cout << "Second book author :" << book2.author << endl;
}
