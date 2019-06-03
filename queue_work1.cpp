#include "iostream"
using namespace std;

int const n=4;
char Q[n];
int front=0, rear=0;

void enqueue(char x){
	if(rear==n-1){
		cout<<"\t can't keep info Because Queue Full!";
	} else {
		rear = rear + 1;
		Q[rear] = x;
		if(front == 0){
			front = 1;
		}
	}
}

void dequeue() {
	if(front==0){
		cout<<"\t Empty Queue!";
	} else {
		if(front == rear){
			front = 0;
			rear = 0;
		} else {
			front = front + 1;
		}
	}
}

void displayQueue(){
	for(int i=front; i<=rear; i++){
		cout<<Q[i]<<" ";
	}
}

int main(){
	char z, value;
	do{
	

	
	cout<<"order:";
	cin>>z;
	

		if(z=='i'){
			cout<<"\t Add Queue:";
			cin>>value;
			enqueue(value);
			cout<<endl;
		}else if(z=='o'){
			cout<<"\t Dequeue \n";
			dequeue();
			cout<<endl;
		}
		
		if(z=='d'){
		cout<<"\t Show Queue: ";
		displayQueue();
		cout<<endl;
		}
		

	}while(z!='q');

}




