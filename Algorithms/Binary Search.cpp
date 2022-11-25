#include <algorithm>
#include <iostream>

using namespace std;

void show(int array[], int arraysize)
{
	for (int i = 0; i < arraysize; ++i)
		cout << array[i] << ",";
}

int main()
{
	int array[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(array) / sizeof(array[0]);
	cout <<"The array is :"<<endl;
	show(array, asize);
	sort(array, array + asize);
	cout << "\n The array after sorting is :"<<endl;
	show(array, asize);
	if (binary_search(array, array + 10, 2))
		cout << "\nElement found in the array"<<endl;
	    
	else
		cout << "\nElement not found in the array"<<endl;
	if (binary_search(array, array + 10, 10))
		cout << "\nElement found in the array"<<endl;
	else
		cout << "\nElement not found in the array"<<endl;

	return 0;
}
