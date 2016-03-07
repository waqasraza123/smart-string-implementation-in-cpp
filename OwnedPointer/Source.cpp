// Main function for Owned Pointers

#include "StringBuffer.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	StringBuffer* obj = new StringBuffer();
	StringBuffer* obj2 = new StringBuffer();
	
	obj2 = obj;
	// Appending characters
	obj->append('a');
	obj->append('b'); 
	obj->append('c'); 
	obj->append('d'); 
	obj->append('e');
	cout << "Owned Pointer Implementation " << std::endl;
	cout<<"Printing Original: "<<endl;
	
	obj->print(); 
	cout<<endl;
	
	cout << "Original Length Before Append =" << obj->length() << std::endl;
	obj2->append('T');
	
	// Checking Length Function
	cout << "OldOwner Length after Append =" << obj->length() << std::endl;
	cout << "NewOwner Length after Append =" << obj2->length() << std::endl;
	// Checking CharAt Function
	cout<<"Printing OldOwner: "<<endl;
	obj->print();
	cout<<endl;
	cout<<"Printing NewOwner: "<<endl;
	obj2->print(); 

	return 0;
}

