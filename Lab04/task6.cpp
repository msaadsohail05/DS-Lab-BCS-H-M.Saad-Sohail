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
	float shrink = 1.3;
	int gap = n,comparisons=0,swaps=0;
	bool swap = true;
	while(gap > 1 || swap == true){
		gap = (int)(gap/shrink);
		if(gap < 1){
			gap = 1;
		}
		swap = false;
		for(int j=0;j+gap<n;j++){
			comparisons++;
			if(array1[j] > array1[j+gap]){
				int temp = array1[j];
				array1[j] = array1[j+gap];
				array1[j+gap] = temp;
				swap = true;
				swaps++;
			}
		}
	}
	
	//displaying array
	cout<<"Displaying sorted array:-"<<endl;
	for(int j=0;j<n;j++){
		cout<<array1[j]<<endl;
	}
	cout<<"Number of comparisons: "<<comparisons<<endl;
	cout<<"Number of swaps: "<<swaps<<endl;
}
