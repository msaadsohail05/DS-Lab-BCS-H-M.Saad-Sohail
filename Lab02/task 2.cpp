//M.Saad Sohail  24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int size,r,c,row,col;
	cout<<"Enter number of rows: ";
	cin >> r;
	cout<<"Enter the number of columns: ";
	cin>>c;
	int** array1 = new int*[r];
	
	for(int i=0;i<r;i++){
		array1[i] = new int[c]{0};
	}
	
	cout<<"Enter the row number you want to update: ";
	cin>>row; 
	cout<<"Enter the column number you want to update: ";
	cin>>col;	
	int flag =0;
	
	for(int i =0; i<r;i++){
		if(i == row){
			for(int j=0;j<c;j++){
				if(j==col){
					flag =1;
				}
			}
		} 				
	}
	if(flag == 1){
		cout<<"Enter the updated value: ";
		cin>>array1[row-1][col-1];
	}
	for(int i =0; i<r;i++){
		for(int j=0;j<c;j++){
			cout<<array1[i][j]<<" ";
		}
		cout<<endl; 				
	}
	for(int i=0;i<r;i++){
		delete array1[i];
	}	
	delete[] array1;	
	return 0;
}
