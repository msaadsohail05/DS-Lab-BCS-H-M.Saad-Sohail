//M.Saad Sohail  24K-0549

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int size,c;
	cout<<"Enter the number of departments: ";
	cin >> size;
	int** array1 = new int*[size];
	int highest[size];
	float avg[size];
	
	
	for(int i=0;i<size;i++){
		int sum=0;
		cout<<"Enter the number of employees: ";
		cin>>c;
		array1[i] = new int[c];
		for(int j=0;j<c;j++){
			int h=0;
			cout<<"Enter the salary for employee "<<j+1<<": ";
			cin>> array1[i][j];
			avg[i] += array1[i][j];
			if(j == c-1){
				avg[i] = avg[i] / c;
			}
			if(array1[i][j] > h){
				h = array1[i][j];
			}
			highest[j]= h;
		}
	}
	float high =0;
	int index;
	cout<<"Displaying highest avg: "<<endl;
	for(int i=0;i<size;i++){
		if(avg[i]>high){
			high = avg[i];
			index = i;
		}
	}
	cout<<"Department "<<index<<" has the highest avg salary of "<<high<<"."<<endl;
	
	cout<<"Displaying the highest salary of each department:-"<<endl;
	for(int i=0;i<size;i++){
		cout<<i+1<<" "<<highest[i]<<endl;
	}
	for(int i=0;i<size;i++){
		delete array1[i];
	}
	delete [] array1; 	
	return 0;
}
