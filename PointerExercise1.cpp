/*  name: jianxin zhu
    date: july/24/2020
  
  
  (Write C++ Statements) For each of the following, write C++ statements that perform the specified task. 
   Assume that unsigned integers are stored in four bytes and that the starting address of the built-in array
   is at location 1002500 in memory. 
*/

#include<iostream>

using namespace std;

const int SIZE = 5;
int main()
{
	//declare a built-in array of type unsigned int called value 
	unsigned int value[SIZE] = { 2,4,6,8,10 };
	//declare a pointer vPtr that pointes to an object of type unsigned int
	unsigned int* vPtr = nullptr;

	//use for statement to display the elements of build-in array used subscript notation
	for (unsigned int i = 0; i < SIZE; i++)
	{
		cout << value[i] << " ";
	}

	//use two sparate statement assign the start address of build-in array value to vPtr
	vPtr = &value[0];
	vPtr = value;
	
	cout << endl;
	//use for statement to display the elements of build-in array used pointer-offset
	for (unsigned int i = 0; i < SIZE; i++)
	{
		cout << *(vPtr + i) << " ";
	}

	//use for statement to display the elements of build-in array used pointer-offset 
	//with build-in array name

	cout << endl;
	for (unsigned int i = 0; i < SIZE; i++)
	{
		cout << *(value + i) << " ";
	}

	//use for statement to display the elements of build-in array used subscripting the
	//pointer to the build-in array

	cout << endl;

	for (unsigned int i = 0; i < SIZE; i++)
	{
		cout << vPtr[i] << " ";
	}


	/*Refer to the fifth element
	 value[4]
	 *(vPtr+4)
	 *(value+4)
	 vPtr[4]
	 */

	//vPtr +3 = 1002500 + 3 *4 =1002512
	cout << "\nThe size of unsigned int: " << sizeof(unsigned int) << endl;

	//vPtr[4] -= 4 equal to vPtr[0];

	vPtr = &value[4];
	cout << "\nMinus 4 : " << *(vPtr - 4) << endl;


}
