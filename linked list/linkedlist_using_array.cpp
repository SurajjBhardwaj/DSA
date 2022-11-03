#include<iostream>
using namespace std;

struct Node{
	public:
	int data;
	struct Node *next;
}*first=NULL;
 
 
void create(int arr[],int n){
	
	int i;
	struct Node *temp,*last;
	first=new Node;
	first->data=arr[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		temp=new Node;
		temp->data=arr[i];
		temp->next=NULL;
		
		last->next=temp;
		last=temp;
		
	}
}

void display(struct Node *s){
	
	cout<<"your linkedlist is : ";
	while(s!=NULL){
		cout<<s->data<<"->";
	    s=s->next;
	    
	    if(s->next==NULL){
			cout<<s->data<<endl;
			s=s->next;
		}
			}
	
}

int main(){
 int n;
 cout<<"enter the size of the linkedlist ";
 cin>>n;
 cout<<endl;
 int A[n];
 for(int i=0;i<n;i++){
 	cout<<"enter "<<i+1<<"th element of the linkedlist ";
	 cin>>A[i];
	 cout<<endl;
 }
 
 create(A,n);
 display(first);
 
 
	return 0;
}