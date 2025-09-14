//Muhammad Saad Sohail    24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,flag =0,search;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int left = 0, right = n-1;
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
	while(left <= right){
		int mid = left + (right-left) /2;
		if(array1[mid] == search){
			cout<<"Value found at position: "<<mid<<endl;
			flag = 1;
			break;
		}
		else if(array1[mid] > search){
			right = mid -1;
		}
		else if(array1[mid] < search){
			left = mid +1;
		}
	}
	if(flag == 0){
		cout<<"Search value is not present inside the array"<<endl;
	}
}
