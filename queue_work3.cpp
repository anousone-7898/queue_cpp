#include "iostream"
using namespace std;

struct node{
	int info;
	node *link;
};

node *front = NULL, *rear = NULL, *p, *temp;

void enqueue(int value){
	
	p = new node;
	p->info = value;
	p->link = NULL;
	
	if(rear == NULL){
		front = p;
		rear = p;
	}else {
		rear->link = p;
		rear = p;
	}
	
}

void dequeue(){
	
	temp = front;
	front = front -> link;
	
	if(front == NULL){
		rear = NULL;
	}else {
		temp->link = NULL;
		delete(temp);
	}
	
	if(front == NULL && rear == NULL){
		cout<<"Queue Empty";
	}
	
}

void displayQueue(){
	
	p = front;
	while( p!= NULL){
		cout<< p->info <<"  ";
		p = p->link;
	}
	cout<<endl;
}


int main() {
	
	char choice;
	int add;
	
	do{
		
		
		
		cout<<"Choice: ";
		cin>>choice;
		
		switch(choice){
			case 'i':
						cout<<"\t Enter Q: ";
						cin>>add;
						enqueue(add);
						break;
			case 'o':
						cout<<"Out form Queue \n";
						dequeue();
						break;
			case 'd':	
						cout<<"Show Queue: ";
						displayQueue();
						break;
			default:	
						cout<<"Try Again \n";
						break;
		}
	
	
	
	}while( choice != 'q');
	
	
	
}
