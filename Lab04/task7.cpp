//Muhammad Saad Sohail     24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int array1[n];
	int array2[n];
	int array3[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the value for index "<<i<<": ";
		cin>>array1[i];
	}
	for(int i=0;i<n;i++){
		array2[i] = array1[i];
		array3[i] = array1[i];
	}
	//displaying array
	cout<<"Displaying unsorted array:-"<<endl;

	for(int j=0;j<n;j++){
		cout<<array1[j]<<endl;
	}
	//sorting
	int gap,comparisons=0,swaps=0,comparisons1=0,swaps1=0,comparisons2=0,swaps2=0;
	for(gap=n/2;gap>0;gap /=2){
		for(int j=gap;j<n;j++){
			int temp = array1[j];
			int res = j;
			
			while(res>=gap &&array1[res-gap] > temp){
				comparisons++;
				array1[res] = array1[res-gap];
				res -= gap;
				swaps++;
			}
			array1[res] = temp;
			swaps++;
		}
	}
	
	//displaying array
	cout<<"Displaying sorted array:-"<<endl;
	for(int j=0;j<n;j++){
		cout<<array1[j]<<endl;
	}
	
	// bubble sorting
	cout<<"implementing bubble sort!"<<endl;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			comparisons1++;
			if(array2[j] > array2[j+1]){
				int temp = array2[j];
				array2[j] = array2[j+1];
				array2[j+1] = temp;
				swaps1++;
			}
		}
	}
	cout<<"Displaying sorted array:-"<<endl;
	for(int j=0;j<n;j++){
		cout<<array2[j]<<endl;
	}
	//insertion sort
	cout<<"implementing insertion sort!"<<endl;
	for(int i=0;i<n;i++){
		int key = array3[i];
		int j = i-1;
		
		while(j>=0 && array3[j] > key){
			comparisons2++;
			swaps2++;
			array3[j+1] = array3[j];
			j--;
		}
		array3[j+1] = key;
	}
	//displaying array
	cout<<"Displaying sorted array:-"<<endl;
	for(int j=0;j<n;j++){
		cout<<array3[j]<<endl;
	}
	cout<<"Number of comparisons of shell sort: "<<comparisons<<endl;
	cout<<"Number of swaps of shell sort: "<<swaps<<endl;
	cout<<"Number of comparisons of bubble sort: "<<comparisons1<<endl;
	cout<<"Number of swaps of bubble sort: "<<swaps1<<endl;
	cout<<"Number of comparisons of insertion sort: "<<comparisons2<<endl;
	cout<<"Number of swaps of insertion sort: "<<swaps2<<endl;
	
	return 0;
}
