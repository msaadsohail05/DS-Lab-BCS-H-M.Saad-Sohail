//Muhammad Saad Sohail    24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,flag =0,search;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int array1[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the value for index "<<i<<": ";
		cin>>array1[i];
	}
	cout<<"Enter the value to be searched: ";
	cin>>search;
	for(int j=0;j<n;j++){
		if(array1[j] == search){
			cout<<"Value found at position: "<<j<<endl;
			flag = 1;
		}
	}
	if(flag == 0){
		cout<<"Search value is not present inside the array"<<endl;
	}
	
}
