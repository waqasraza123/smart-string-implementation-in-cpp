// Copied Pointers Implementation

#include "StringBuffer.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//create a smart string
	//create a smart string with const char*

	StringBuffer* obj = new StringBuffer();
	StringBuffer* obj2(obj);

	obj->append('A');
	obj->append('B');
	obj->append('C');
	obj->append('D');
	obj->append('E');
	cout << "Copied Pointers" << std::endl;
	cout << "Original Object  Length =" << obj->length() << std::endl;
	std::cout << "Original Object 1 charAt 0 = " << obj->charAt(0) << std::endl;
	cout<<"Printing Copy: "<<endl;
	
	obj2->print();
	obj2->append('X');
	cout<<std::endl;
	cout << "Copy Object Length =" << obj2->length() << std::endl;
	cout<<endl;
	cout<<"Printing charAt 5 of Copy: "<<obj2->charAt(5)<<std::endl;
	delete obj;
	

	//getchar();
	return 0;
}

