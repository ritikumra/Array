#include <iostream>
using namespace std;

int sumof( int num[],int n){
    int sum=0;
	for( int i=0; i<n;i++)
		sum+=num[i];
		return sum;

	
}

int main()
{
	int arr[100];

	cout<<"Enter size of array"<<endl;
	int size;
	cin>>size;
	cout<<"Enter elements"<<endl;
	for(int i=0; i<size; i++){
		cin>> arr[i];
	}

	cout<<"Sum of all elements is:"<< sumof(arr, size)<<endl;

	return 0;
}