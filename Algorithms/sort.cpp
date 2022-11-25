#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size)
{
	for (int i = 0; i < array_size; i++)
		cout << a[i] << " ";
}

// Driver code
int main()
{
	int array[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	
	// size of the array
	int size = sizeof(array) / sizeof(array[0]);
	cout << "The array before sorting is : \n";
	
	// print the array
	show(array, size);

	// sort the array
	sort(array, array + size);

	cout << "\n\nThe array after sorting is :\n";
	
	// print the array after sorting
	show(array, size);

	return 0;
}
