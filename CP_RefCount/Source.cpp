// Main function for Copy on write implementation with reference counting

#include "StringBuffer.h"
#include <cstdlib>
#include <cstring>
#include <iostream>



using namespace std;

int main(int argc, char** argv) {
	//create a smart string
	//    String ss;
	//create a smart string with const char*
	char* hello = "hello";
	StringBuffer* obj = new StringBuffer("Testing", 7);
	StringBuffer* obj2 = new StringBuffer();

	*obj2 = *obj;
	// Checking Append Fucntion
	obj2->append('A'); // 1st character append to obj 2
	obj2->append('B'); // 2nd character appedn to obj 2
	// Checking Length Function
	cout << "COW with Reference Counting "<< std::endl;
	cout << "Original Obj Length =" << obj->length() << std::endl;
	cout << "Copy Obj Length =" << obj2->length() << std::endl;
	std::cout << "new ss charAt 0 = " << obj->charAt(0) << std::endl;
	std::cout<<"Printing Original: "<<std::endl;
	obj->print();
	std::cout<<endl;
	std::cout<<"Printing Copy: "<<std::endl;
	obj2->print();

	//getchar();
	return 0;
}

