#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int searchValue)
{
	int x= 0;
	int a= size - 1;

	int b;

	while(x<=a)
	{

		b = (x+a)/2;


		if(searchValue==array[b])
		{
			return b;
		}
		else if(searchValue>array[b])
		{
		x=b+1;
		}
		else
		{
			a=b-1;
		}
	}
	return -1;
}

int main()
{
	int a[]= {4, 9, 16, 25, 36, 49, 64, 81};

	int userValue;

	cout << "Enter an integer:" <<endl;
	cin>> userValue;

	int result = binarySearch(a, 8, userValue);

	if(result>=0)
	{
		cout<< a[result] << "is at"
		" element with index " << result << endl;
	}

	else
	{
		cout<< userValue << " was not found. " <<endl;

	}
}
