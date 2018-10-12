#include<iostream>
using namespace std;

void f(int a1[],int a2[], int arr[])
{

	for(int i=0; i<9; i++)
	{
	if(i<5)	arr[i]=a1[i];
	else	arr[i]=a2[i-5];
	
	cout << arr[i] << "   ";
	}

}


int main()
{

int a1[5] = {1,2,3,4,5};
int a2[4] = {6,7,8,9};
int arr[9];

f(a1,a2,arr);

cout << endl;

return 0;
}
