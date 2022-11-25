
#include<iostream>
#include<array> // for front() and back()
using namespace std;
int main()
{
	
	array<int,6> array = {1, 2, 3, 4, 5, 6};

	cout << "The number of array elements is : ";
    cout << array.size() << endl;
    
	cout << "First element of array is : ";
	cout << array.front() << endl;


	cout << "Last element of array is : ";
	cout << array.back() << endl;

	return 0;

}
