//M.Saad Sohail  24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int size,c;
	cout<<"Enter the number of students: ";
	cin >> size;
	int** array1 = new int*[size];
	float marks[size];
	
	
	for(int i=0;i<size;i++){
		int sum=0;
		cout<<"Enter the number of courses you are taking: ";
		cin>>c;
		array1[i] = new int[c];
		for(int j=0;j<c;j++){
			cout<<"Enter your marks for subject "<<j+1<<": ";
			cin>> array1[i][j];
			marks[i] += array1[i][j];
			if(j == c-1){
				marks[i] = marks[i] / c;
			}
		}
	}
	cout<<"Displaying all marks: "<<endl;
	for(int i=0;i<size;i++){
		cout<<marks[i]<<endl;
	}
		
	for(int i=0;i<size;i++){
		delete array1[i];
	}
	delete [] array1; 	
	return 0;
}
