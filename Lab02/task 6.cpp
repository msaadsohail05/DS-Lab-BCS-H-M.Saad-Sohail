//Muhammad Saad Sohail  24K-0549

#include <iostream>
#include <string.h>
using namespace std;

class SafePointer{
    int* ptr; 

	public:
	    SafePointer(): ptr(nullptr) {}
	    
	    void setValue(int value){
	        if(ptr == nullptr){
	            ptr = new int;
	        }
	        *ptr =value;
	    }
	
	    int getValue(){
	        if(ptr == nullptr){
	            cout<<"Error: Attempt to access uninitialized pointer!" <<endl;
	            return 0;
	        }
	        return *ptr;
	    }
	
	    void release(){
	        delete ptr;
	        ptr = nullptr;
	    }
	    ~SafePointer(){
	        delete ptr;
	    }
};

int main() {
    SafePointer marks[5];

    marks[0].setValue(85);
    marks[1].setValue(90);
    marks[2].setValue(78);
    marks[3].setValue(92);
    marks[4].setValue(88);

    cout<<"Marks of students: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"Student "<<i + 1<<": "<<marks[i].getValue()<<endl;
    }
    for(int i=0;i<5;i++){
        marks[i].release();
    }

    return 0;
}
