
#include<iostream>
#include<array> //  at()
using namespace std;
int main()
{
	// Initializing the array elements
	array<int,6> ar = {1, 2, 3, 4, 5, 6};

	// Printing array elements using at()
	cout << "The array elements are (using at()) : ";
	for ( int i=0; i<6; i++)
	cout << ar.at(i) << " ";
	cout << endl;

		// Printing array elements using operator[]
	cout << "The array elements are (using operator[]) : ";
	for ( int i=0; i<6; i++)
	cout << ar[i] << " ";
	cout << endl;

	return 0;

}
