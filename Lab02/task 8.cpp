//Muhammad Saad Sohail  24K-0549

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of days: ";
    cin>>n;
    cout<<"Enter number of readings per day: ";
    cin>>m;

    double** temp = new double*[n];
    for(int i = 0; i < n; i++){
        temp[i] = new double[m];
    }

    for(int i=0;i<n;i++){
        cout<<"Enter temperatures for Day"<<i+1<<":"<<endl;
        for(int j=0;j<m;j++){
            cout<<"  Time "<<j+1<<": ";
            cin >> temp[i][j];
        }
    }

    double* avg = new double[n];
    for(int i=0;i<n;i++){
        double sum = 0;
        for(int j=0;j<m;j++){
            sum += temp[i][j];
        }
        avg[i] = sum / m;
    }

    int hottest=0,coldest=0;
    for(int i=1;i<n;i++){
		if(avg[i]>avg[hottest]){
            hottest=i;
        }
        if(avg[i]<avg[coldest]){
            coldest=i;
        }
    }
    cout<<"Daily Average Temperatures:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Day "<<i+1<<": "<<avg[i]<<endl;
    }

    cout<<"Hottest Day: Day "<<hottest+1<<" with average "<<avg[hottest]<<endl;
    cout<<"Coldest Day: Day "<<coldest+1<<" with average "<<avg[coldest]<<endl;

    for(int i=0;i<n;i++){
        delete[] temp[i];
    }
    delete[] temp;
    delete[] avg;

    return 0;
}
