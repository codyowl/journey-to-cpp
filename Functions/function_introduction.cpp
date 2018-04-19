#include <iostream>
#include <cstring>

using namespace std;

//If a function is defined over here then its a global funciton
// syntax :  return_datatype functionname(datatype argument_name)

int add(int a, int b)

{
	int returnvalue = a + b;
	return returnvalue;
}
		

int main()

{   
	int result;

	//Function calling
	//syntax : function_name(arguments)

	result = add(2,3);

	cout <<"The added value is :" << result << endl;

}	

	

