//M. Saad Sohail  24K-0549

#include<iostream>
#include<string>

using namespace std;

int main(){
    int categories;
    cout<<"Enter number of categories: ";
    cin>>categories;

    string* categoryNames = new string[categories];
    int* bookCount = new int[categories];
    int** books = new int*[categories]; 

    for(int i=0;i<categories;i++){
        cout<<"Enter name for category "<<i+1<<": ";
        getline(cin, categoryNames[i]);
		cin.ignore();
        cout<<"Enter number of books in "<<categoryNames[i]<<": ";
        cin>>bookCount[i];
        books[i] = new int[bookCount[i]];

        cout<<"Enter book IDs for "<<categoryNames[i]<<":\n";
        for(int j=0;j<bookCount[i];j++){
            cout<<"  Book "<<j+1<<": ";
            cin>>books[i][j];
        }
        cin.ignore(); 
    }

    cout<<"Displaying Library Book Records";
    for(int i=0;i<categories;i++){
        cout<<categoryNames[i]<<": ";
        for(int j=0;j<bookCount[i];j++){
            cout<<books[i][j]<<" ";
        }
        cout<<endl;
    }

    int searchID;
    cout<<"Enter a book ID to search: ";
    cin>>searchID;

    bool found = false;
    for(int i=0;i<categories;i++){
        for(int j=0;j<bookCount[i];j++){
            if(books[i][j] == searchID){
                cout<<"Book ID "<<searchID<<" found in category: "<<categoryNames[i]<<endl;                      
                found = true;
            }
        }
    }
    if(!found){
        cout<<"Book ID "<<searchID <<" not found in any category."<<endl;
    }

    for(int i=0;i<categories;i++){
        delete[] books[i];
    }
    delete[] books;
    delete[] bookCount;
    delete[] categoryNames;

    return 0;
}
