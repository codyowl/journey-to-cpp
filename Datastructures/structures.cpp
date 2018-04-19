#include <iostream>
#include <cstring>

using namespace std;

//Structure definition
//syntax :
/* struct <structure_name> {
	    datatype varialbename1;
	    datatype variablename2;
	}; */
   
struct Vehicle {
	char Brandname[50];
	char Enginetype[50];
	char Modelname[50];
};
	
int main()
{
	//calling structure
	struct Vehicle v1;
	struct Vehicle v2;

	// structure v1 specification
	strcpy(v1.Brandname,"Honda");
	strcpy(v1.Enginetype,"Petrol");
	strcpy(v1.Modelname,"sedan");

	// structure v2 specification
	strcpy(v2.Brandname,"Maruti");
	strcpy(v2.Enginetype,"Diesel");
	strcpy(v2.Modelname,"sedan");

	//printing first structure info 
	cout << "v1 brandname: " << v1.Brandname << endl;
	cout << "v1 engine type: " << v1.Enginetype << endl;
	cout << "v1 model name: " << v1.Modelname << endl;

	//printing second structure info
	cout << "v2 brandname: " << v2.Brandname << endl;
	cout << "v2 engine type: " << v2.Enginetype << endl;
	cout << "v3 model name: " << v2.Modelname << endl;

	return 0;

}	

	

