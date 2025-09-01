//M.Saad Sohail  24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int size,r,c;
	cout<<"Enter number of rows: ";
	cin >> r;
	cout<<"Enter the number of columns: ";
	cin>>c;
	int** array1 = new int*[r];
	
	for(int i=0;i<r;i++){
		array1[i] = new int[c]{0};
	}
	//data entry
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter data for position "<<i<<" "<<j<<": ";
			cin>>array1[i][j];
		}
	}
	cout<<endl;	
	cout<<"Displaying in normal form:-"<<endl;
	for(int i =0; i<r;i++){
		for(int j=0;j<c;j++){
			cout<<array1[i][j]<<" ";
		}
		cout<<endl; 				
	}
    cout<<"Displaying in compressed form:-"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(array1[i][j]!=0){
                cout<<i<<" "<<j<<" "<<array1[i][j]<<endl;
            }
        }
    }
	for(int i=0;i<r;i++){
		delete array1[i];
	}	
	delete[] array1;	
	return 0;
}
