#include <iostream>
#include <cstring>

using namespace std;

//Declaring class
/* Syntax class classname{
   public :
          variable declarations
          function declarations
		}
 */

class Calculator{
    public:
		int add(int a, int b){
			int c = a + b;
			return c;
		};
};

int main()

{   
	//Creating objects for class
	//syntax : classname objectname;
	Calculator c;

	//Accessing methods or declarations in a class
	//syntax objectname.functionname()

	int result;	

	result = c.add(2,3);

	cout <<"The result is : "<< result << endl;
	
	return 0;

}
