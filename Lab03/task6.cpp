// Muhammad Saad Sohail   24K-0549

#include <iostream>
#include <string.h>

using namespace std;

class SNode{
	public:
		int data;
		SNode* next;
		SNode* child;
		SNode(int val){
			data = val;
			next = NULL;
			child = NULL;
		}	
		
		
	
};



class Singly{
	public:
		SNode* head;
		SNode* tail;
		Singly(){
			head = NULL;
			tail = NULL;
		}
		void insertAtStart(int d){
			SNode* n = new SNode(d);
			if(head == NULL){
				head = tail = n; 
			}
			else{
				n->next = head;
				head = n;	
			}
			cout<<"Node inserted at the start"<<endl;	
		}
		
		void insertAtEnd(int d){
			SNode* newNode= new SNode(d);
			if(head == NULL){
				head = newNode;
				tail = newNode;
			}
			else{
				tail->next = newNode;
				tail = newNode;
				cout<<"Node inserted"<<endl;	
			}			
		}
		void displayAllNodes(){
			cout<<"Displaying all nodes:- "<<endl;
			SNode* temp = head;
			while(temp != NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
			cout<<"List completed!"<<endl;
		}
		void sortLinkedList(){
			cout<<"Sorting this list:-"<<endl;
			if(head == NULL){
				cout<<"The list is empty!"<<endl;
			}
			else{
				SNode* current;
	    		SNode* index;
	    		int temp;
	    		for(current = head; current !=NULL; current = current->next){
	    			for(index = current->next;index != NULL; index= index->next){
	    				if(current->data > index->data){
	    					temp = current->data;
	    					current->data = index->data;
	    					index->data = temp;
						}
	    				
					}
				}
			}
			cout<<"List has been sorted!"<<endl;	
		}
		SNode* flatten(SNode* head){
        if(!head) return NULL;

        SNode* current=head;
        while(current){
            if(current->child){
                SNode* nextNode =current->next;
                SNode* childList =flatten(current->child);

                current->next =childList;
                current->child =NULL;
                while (tail->next) tail =tail->next;
                tail->next =nextNode;
            }
            current =current->next;
        }
        return head;
    }
    
};



int main(){
	int flag,count=0,sort;
	int val;
	Singly list1;
	cout<<"Operations of linked list 1"<<endl;
	cout<<"Enter 1 to insert a node or 0 to not insert a node: ";
	cin>>flag;
	if(flag==1){
		int f;
		cout<<"Enter the value to be inserted: ";
		cin>>val;
		list1.insertAtStart(val);
		count +=1;
		cout<<"Enter 1 to display all nodes or 0 to not display all node: ";
		cin>>f;
		if(f==1){
			list1.displayAllNodes();
		}
		cout<<"Enter 1 to insert another node or 0 to not insert a node: ";
		cin>>flag;
	}
	while(flag == 1){
		int f;
		cout<<"Enter the value to be inserted: ";
		cin>>val;
		list1.insertAtEnd(val);
		count +=1;
		cout<<"Enter 1 to display all nodes or 0 to not display all node: ";
		cin>>f;
		if(f==1){
			list1.displayAllNodes();
		}			
		cout<<"Enter 1 to insert another node or 0 to not insert a node: ";
		cin>>flag;		
	}
	cout<<"Enter 1 to sort this linked list: ";
	cin>>sort;
	if(sort==1){
		list1.sortLinkedList();	
		list1.displayAllNodes();	
	}
	SNode* node2 = list1.head->next;
    node2->child = new SNode(4);
    node2->child->next = new SNode(5);

    list1.head = list1.flatten(list1.head);

    cout << "Flattened List:\n";
    list1.displayAllNodes();
	
	return 0;
}
