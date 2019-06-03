#include "iostream"
using namespace std;

int const n=5;
int Q[n];
int rear=-1, front=-1, k=0;

void enqueue(int value){
	
	if(rear == n){
		rear = 0;
	}
	else if(k==0){
		rear = rear + 1;
	}
		
	if(front==rear){
		cout<<"can't keep this value ,Queue is Full! \n";
		k=1;
		
	} else {
		Q[rear] = value;
		if(front == -1)
			front = 0;
	}
}

void dequeue(){
	if(front == -1){
		cout<<"Now Empty Queue! \n";
	}else{
		
		if(front == rear){
			front = -1;
			rear = -1;
		} else {
			if(front == n){
				front = 0;
			}else {
				front = front + 1;
			}
		
		}
	}
	k=0;
	
}

void displayQueue(){
	
	int i;
	if(front <= rear){
		for(int j=front; j<=rear; j++){
			cout<<Q[j]<<"  ";
		}
	}else {
		i= front;
		while(i<n){
			cout<<Q[i]<<"  ";
			i++;
		}
		
		i=1;
		while(i <= rear){
			cout<<Q[i]<<"  ";
			i++;
		}
	}
	
	cout<<"; \n";
}

int main(){
	char ord;
	int add;
do{

	cout<<"order: ";
	cin>>ord;
	
	switch (ord) {
	
		case 'i':
			cout<<"\t Enter add Queue: ";
			cin>>add;
			enqueue(add);
			break;
	
		case 'o':
			cout<<" \t Dequeue \n";
			dequeue();
			break;
	
		case 'd':
			cout<<"\t Show Queue: ";
			displayQueue();
			break;
	
	
	}
	
}while(ord != 'q');


}











