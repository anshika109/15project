#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
	void deleteq(){
		if(front==-1)
		cout<<"underflow"<<endl;
		else if(front==rear){
			front=-1;
			rear=-1;
		}
		else
			front=front+1;
	}
int main(){
	int n,queue[10],i,data;
	cout<<"enter the no of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>data;
		if(rear==9)
		cout<<"overflow"<<endl;
		else if(front==-1){
			front=0;
			rear=0;
			queue[rear]=data;
		}
		else{
		rear=rear+1;
		queue[rear]=data;
		}
	}
	cout<<"inserted queue is:"<<endl;
	for(i=front;i<=rear;i++){
		cout<<queue[i]<<" ";
	}
	deleteq();
	cout<<"after deletion"<<endl;
	for(i=front;i<=rear;i++){
		cout<<queue[i]<<" ";
	}
	return 0;
}
