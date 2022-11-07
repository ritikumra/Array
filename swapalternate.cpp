#include <iostream>
using namespace std;

void alternate(int num[], int n){
	for( int i=0; i<n;i+=2){
		if( i+1 < n){
			swap( num[i], num[i+1]);
		}
	}
}


void printarray( int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
	cout<<"Enter size of array(<100):"<<endl;
	int size;
	cin>>size;
	int arr[100];
	cout<<"Enter elements:"<<endl;
	for(int i=0; i < size; i++){
		cin>> arr[i];
	}
	


		alternate(arr,size);
		cout<<"Result:"<<"";
		printarray(arr,size);




	return 0;



}