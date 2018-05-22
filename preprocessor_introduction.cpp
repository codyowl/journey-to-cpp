#include <iostream>
using namespace std;

/* Preprocessor process few information before the compilation starts.for 
 * example "#include" is a preprocessor.
 * list of preprocessor:
 *             #define
 *             #if
 *             #else
 *             and more...
 */

//Here we are going to use #define preprocessor
//"#define" preprocessor will create a constant called macro
//syntax : #define CONSTANTNAME REPLACEMENTVALUE

#define ipaddress 192.168.32.0
#define PI 3.14



//main function
int main() {
	cout << "The ipaddress is" << ipaddress << endl;
	cout << "The pi value is" << PI << endl;

	return 0;
}
 
