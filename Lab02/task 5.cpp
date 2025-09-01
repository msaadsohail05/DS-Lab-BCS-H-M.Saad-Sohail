//M.Saad Sohail  24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int r,c;
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
	cout<<"Displaying array1 matrix:-"<<endl;
	for(int i =0; i<r;i++){
		for(int j=0;j<c;j++){
			cout<<array1[i][j]<<" ";
		}
		cout<<endl; 				
	}
	//matrix 2
	int** array2 = new int*[r];
	
	for(int i=0;i<r;i++){
		array2[i] = new int[c]{0};
	}
	
	//data entry
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter data for position "<<i<<" "<<j<<": ";
			cin>>array2[i][j];
		}
	}
	cout<<endl;
	cout<<"Displaying Array2 matrix:-"<<endl;
	for(int i =0; i<r;i++){
		for(int j=0;j<c;j++){
			cout<<array2[i][j]<<" ";
		}
		cout<<endl; 				
	}
	
	//Addition of matrix
	int** addArray = new int*[r];
	
	for(int i=0;i<r;i++){
		addArray[i] = new int[c]{0};
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			addArray[i][j] = array1[i][j] + array2[i][j];
		}
	}
	cout<<endl;
	cout<<"Displaying addition matrix:-"<<endl;
	for(int i =0; i<r;i++){
		for(int j=0;j<c;j++){
			cout<<addArray[i][j]<<" ";
		}
		cout<<endl; 				
	}
	
	//Subtraction of matrix
	int** subArray = new int*[r];
	
	for(int i=0;i<r;i++){
		subArray[i] = new int[c]{0};
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			subArray[i][j] = array1[i][j] - array2[i][j];
		}
	}
	cout<<endl;
	cout<<"Displaying subtraction matrix:-"<<endl;
	for(int i =0; i<r;i++){
		for(int j=0;j<c;j++){
			cout<<subArray[i][j]<<" ";
		}
		cout<<endl; 				
	}
	
	//deletion of matrix1
	for(int i=0;i<r;i++){
		delete array1[i];
	}	
	delete[] array1;
	
	//deletion of matrix2
	for(int i=0;i<r;i++){
		delete array2[i];
	}	
	delete[] array2;
	
	//deletion of addArray
	for(int i=0;i<r;i++){
		delete addArray[i];
	}	
	delete[] addArray;
	
	//deletion of subArray
	for(int i=0;i<r;i++){
		delete subArray[i];
	}	
	delete[] subArray;
		
	return 0;
}
