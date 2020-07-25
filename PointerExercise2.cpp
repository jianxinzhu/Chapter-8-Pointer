/*    name: jianxin zhu
      date: july/24/2020
    
    
    For each of the following, write a single statement that performs the specified task.
    Assume that long variables value1 and value2 have been declared and value1 has been initialized to 200000.
    
 */
 
 #include<iostream>
using namespace std;

int main()
{
	long value1 = 200000, value2;

	// Declare the variable charPtr to be a pointer to an object of type char. 
	char* charPtr = nullptr;

	//Assign the address of variable var2 to pointer variable charPtr.
	char var2 = '0';
	charPtr = &var2;

	//Display the value of the object pointed to by charPtr.
	cout << *charPtr << endl;

	//Assign the value of the object pointed to by charPtr to variable var1. 
	char var1 = 'B';
	charPtr = &var1;

	//Display the value of var1.

	cout << var1 << endl;

	//Display the address of var2.
	cout << &var2 << endl;
	
}
