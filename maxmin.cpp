#include <iostream>
#include <climits>
using namespace std;

int maximumwala(int num[], int n){

	int maxi= INT_MIN;

	for(int i=0; i<n; i++){

		maxi=max(maxi,num[i]);
	}
	return maxi;
}

int minimumwala(int num[], int n){
	
	int mini= INT_MAX;

	for(int i=0; i<n; i++){
		mini =min(mini,num[i]);
	}
	return mini;
}
int main()
{
	int size;

	cout<<"Enter size of array(<100)"<< endl;

	cin>>size;

	int num[100];

	cout<<"Enter elements"<<endl;

	for( int i=0;i<size;i++){
		cin>> num[i];
	}

	cout<<"Maximum element is:"<< maximumwala(num,size)<<endl;
	cout<<"Minimum element is:"<< minimumwala(num,size)<<endl;







return 0;


	
}