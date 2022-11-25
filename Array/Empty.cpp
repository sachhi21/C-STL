
#include<iostream>
#include<array> 
using namespace std;
int main()
{

	
	array<int,6> array;

	
	array<int,0> array1;

	array1.empty()? cout << "Array empty":
		cout << "Array not empty";
	cout << endl;

	
	array.fill(0);

	
	cout << "Array after filling operation is : ";
	for ( int i=0; i<6; i++)
		cout << array[i] << " ";

	return 0;

}
