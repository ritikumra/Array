#include <iostream>
using namespace std;
 
void reverse(int num[], int n){
	int start=0;
	int end= n-1;

	while(start<=end){

		swap(num[start], num[end]);
		start++;
		end--;
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
	
	reverse(arr,size);

	

    cout<<"Reversed array:"<<"";
    printarray(arr,size);


	return 0;
}