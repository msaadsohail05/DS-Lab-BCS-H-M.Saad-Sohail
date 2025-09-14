//Muhammad Saad Sohail    24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int array1[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the value for index "<<i<<": ";
		cin>>array1[i];
	}
	//displaying array
	cout<<"Displaying unsorted array:-"<<endl;

	for(int j=0;j<n;j++){
		cout<<array1[j]<<endl;
	}
	//sorting
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(array1[j] > array1[j+1]){
				int temp = array1[j];
				array1[j] = array1[j+1];
				array1[j+1] = temp;
			}
		}
	}
	//displaying array
	cout<<"Displaying sorted array:-"<<endl;
	for(int j=0;j<n;j++){
		cout<<array1[j]<<endl;
	}
}
