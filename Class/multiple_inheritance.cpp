#include <iostream>

using namespace std;

class Firstclass {
    public:
        void first_function() {
            cout << "Text from first function" << endl ;
        }
};


class Secondclass {
    public:
        void second_function() {
            cout << "Text from second function" << endl ;
        }
};


class Thirdclass : public Firstclass, public Secondclass {
    public :
        void third_function() {
            cout << "Text from third function";
        }
};

int main() {
    Thirdclass thirdclass;
    
    thirdclass.first_function();
    thirdclass.second_function();
    thirdclass.third_function();
}
