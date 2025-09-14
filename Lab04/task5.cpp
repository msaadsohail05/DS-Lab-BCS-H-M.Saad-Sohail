//Muhammad Saad Sohail    24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,flag =0,search;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int low = 0, high = n-1;
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
	cout<<"implementing insertion sort!"<<endl;
	for(int i=0;i<n;i++){
		int key = array1[i];
		int j = i-1;
		
		while(j>=0 && array1[j] > key){
			array1[j+1] = array1[j];
			j--;
		}
		array1[j+1] = key;
	}
	//displaying array
	cout<<"Displaying sorted array:-"<<endl;
	for(int j=0;j<n;j++){
		cout<<array1[j]<<endl;
	}
	//searching
	cout<<"Enter the value to be searched: ";
	cin>>search;
	while(low<=high && search >= array1[low] && search <= array1[high]){
		if(low == high){
			cout<<"Value found at position: "<<low<<endl;
			flag = 1;		
		}
		int pos = low + ((search - array1[low]) * (high-low)) / (array1[high] - array1[low]);
		if(array1[pos]== search){
			cout<<"Value found at position: "<<pos<<endl;
			flag = 1;
			break;
		}
		if(array1[pos] < search){
			low = pos + 1;
		}
		if(array1[pos] > search){
			high= pos-1;
		}
	}
	if(flag == 0){
		cout<<"Search value is not present inside the array"<<endl;
	}
	return 0;
}
