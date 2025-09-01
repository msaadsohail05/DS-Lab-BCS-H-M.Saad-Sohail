//M.Saad Sohail  24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int size,flag;
	cout<<"Enter the number of months: ";
	cin >> size;
	int* array1 = new int[size];
	
	
	for(int i=0;i<size;i++){
		int sum=0;
		cout<<"Enter your expenses for the month"<<i+1<<": ";
		cin>>array1[i];
	}
	cout<<"Displaying expenses for all months: "<<endl;
	for(int i=0;i<size;i++){
		cout<<array1[i]<<endl;
	}
	cout<<"Enter 1 if u want to resize array: "
	cin>>flag;
	while(flag ==1){
		int size1; 
		cout<<"Enter the number of additional months: ";
		cin>>size1
		int size2 = size + size1;
		int* array2 = new int[size2];
		for(int i=0;i<size;i++){
			array2[i] = array1[i];			
		}
		delete [] array1;
		for(int j=size;j<size2;j++){
			cout<<"Enter your expenses for the month"<<j+1<<": ";
			cin>>array2[j]	
		}
		cout<<"Displaying expenses for all months: "<<endl;
		for(int i=0;i<size2;i++){
			cout<<array2[i]<<endl;
		}
		
		cout<<"Enter 1 if u want to resize array: "
		cin>>flag;
	}
	
	delete [] array1; 	
	return 0;
}
