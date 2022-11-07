#include <iostream>
using namespace std;

bool search( int num[], int s, int k){

	for(int i=0; i< s; i++){
	    
		if (num[i]==k){
			return 1;
		}

	}
	return 0;
	
}


int main()
{

	cout<<"Enter size of array:"<<endl;
	int size;
	cin>>size;
	int arr[100];
	cout<<"Enter elements:"<<endl;
	for(int i=0; i < size; i++){
		cin>> arr[i];
	}
	
	cout<<"Enter key to look for:"<<endl;
	int key;
	cin>>key;

	bool found= search(arr, size, key);

	if (found){
		cout<<"Key is present"<<endl;
	}

	else{
		cout<<"Key is absent"<<endl;
	}

	return 0;
}