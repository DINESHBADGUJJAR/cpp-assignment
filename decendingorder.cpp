#include<iostream>
using namespace std;
void main()
{
	int a[5], i,j,temp=0;
	cout << "\n Enter teh edata" << endl;
	for (i = 0; i < 5; i++)
	{
		cin >> a[i];

	}
	for (j = 0; j < 5; j++) {


		for (i = 0; i < 5; i++)
		{
			if (a[i] < a[i + 1])
			{
				
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;

			}

		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << "\t" << a[i];
	}

}

