// Muhammad Saad Sohail   24K-0549

#include <iostream>
#include <string.h>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(char val){
			data = val;
			next = NULL;
		}		
};

class Circular{
	public:
		Node* head;
		Node* tail;
		Circular(){
			head = NULL;
			tail = NULL;
		}
		void insertAtStart(int d){
			Node* n = new Node(d);
			if(head == NULL){
				head = tail = n; 
				tail->next = head;
			}
			else{
				n->next = head;
				head = n;
				tail->next = head;	
			}
			cout<<"Node inserted at the start"<<endl;	
		}
		
		void insertAtEnd(int d){
			Node* newNode= new Node(d);
			if(head == NULL){
				head = newNode;
				tail = newNode;
			}
			else{
				tail->next = newNode;
				tail = newNode;
				tail->next = head;
				cout<<"Node inserted"<<endl;	
			}			
		}
		void displayAllNodes(){
			cout<<"Displaying all nodes:- "<<endl;
			Node* temp = head;
			do{
				cout<<temp->data<<endl;
				temp = temp->next;
			}while(temp != head);
			cout<<"List completed!"<<endl;
		}
		void sortLinkedList(){
			cout<<"Sorting this list:-"<<endl;
			if(head == NULL){
				cout<<"The list is empty!"<<endl;
			}
			else{
				Node* current = head;
	    		Node* index = NULL;
	    		char temp;
	    		do{
			        index =current->next;
			        while(index !=head){
			            if(current->data >index->data){
			                temp = current->data;
			                current->data = index->data;
			                index->data = temp;
			            }
			            index = index->next;
			        }
			        current = current->next;
			    } while(current->next != head);
						}
			cout<<"List has been sorted!"<<endl;	
		}
		int josephus(int k){
	        if(head == NULL) return -1;
	
	        Node* prev = tail;
	        Node* current = head;
	        while(current->next != current){	            
	            for(int count=1;count<k;count++){
	                prev = current;
	                current = current->next;
	            }
	            cout << "Eliminating: " << current->data << endl;
	            prev->next = current->next;
	            if (current == head) {
	                head = current->next;
	            }
	            delete current;
	            current = prev->next; 
	        }
	        return current->data; 
    	}
};

int main(){
	Circular list1;
	int sur,N,k;
	cout<<"Enter the number of people: ";
	cin>>N;
	cout<<"Enter the value for k: ";
	cin>>k;
	for(int i=1;i<N;i++){
		list1.insertAtEnd(i);
	}
	sur = list1.josephus(k);
	cout<<"The survivor is: "<<sur<<endl;
	return 0;
}
