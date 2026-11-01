#include <iostream>
#define MAX 3
using namespace std;
struct element{
    int data ,priority,order;
};
class pri_queue{
    int d,p,o;
    element e[MAX];
    int front,rear;
    public:
    void insert();
    void display();
    void delete_e();
    pri_queue(){
        front=rear=-1;
    }
};
void pri_queue::insert(){
    if(rear==MAX-1)
        cout<<"queue overflows";
    else{
        cout<<"enter data,priority,order";
        cin>>d>>p>>o;
        if(front==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
        e[rear].data=d;
        e[rear].priority=p;
        e[rear].order=o;
        if(rear>0){
            element t;
            for(int i=front;i<rear;i++){
                for(int j=i+1;j<=rear;j++){
                    if(e[i].priority>e[j].priority){
                        t=e[i];
                        e[i]=e[j];
                        e[j]=t;
                    }
                    else{
                        if(e[i].priority==e[j].priority){
                            if(e[i].order>e[j].order){
                              t=e[i];
                              e[i]=e[j];
                              e[j]=t;
                            }
                        }
                    }
                }
            }
        }    
    }
}
void pri_queue::display(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
    }
    else{
    for(int i=front;i<=rear;i++){
        cout<<"priority"<<e[i].priority<<endl;
        cout<<"order"<<e[i].order<<endl;
        cout<<"data"<<e[i].data<<endl;
    }
}
}
void pri_queue::delete_e() {
    if(front == -1) {
        cout << "queue has no element";
    }
    else {
        cout << "deleted item: "
             << e[front].data << " "
             << e[front].priority << " "
             << e[front].order << endl;

        if(front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }
    }
}
int main(){
    pri_queue q;
    int choice;
    char c;
do{
    cout<<"\n  1.insert  2.delete_e 3.display"<<endl;
    cin>>choice;
    switch(choice){
        case 1:q.insert();break;
        case 2:q.delete_e();break;
        case 3:q.display();break;
    }
    cout<<"Do you want to continue";
    cin>>c;
}while(c=='y'||c=='Y');
return 0;
}
