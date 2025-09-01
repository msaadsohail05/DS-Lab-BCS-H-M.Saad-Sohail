//Muhammad Saad Sohail 24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int size,pos;
	cout<<"Enter size: ";
	cin >> size;
	int* array1 = new int[size]{0};
	
	cout<<"Enter the position u want to update: ";
	cin>>pos;	
	int flag =0;
	
	for(int i =0; i<size;i++){
		if(i = pos){
			flag =1;
		} 				
	}
	if(flag == 1){
		cout<<"Enter the updated value: ";
		cin>>array1[pos-1];
	}
	for(int i =0; i<size;i++){
		cout<<array1[i]<<endl; 				
	}	
	delete[] array1;	
	return 0;
}
