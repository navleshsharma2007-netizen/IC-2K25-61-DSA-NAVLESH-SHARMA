#include <iostream>
#define MAX 5  
using namespace std;
class stac{
    int a[MAX],top;
    int x;
    public:
    stac();
    void push();
    void pop();
    void display();
};
stac::stac(){
    for(int i=0;i<MAX;i++){
        a[i]=0;
    }
    top=-1;
}
void stac::display(){
    if(top==-1){
        cout<<"stack has no element";
    }
    else{
    for(int i=top;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}
void stac::push(){
    if(top==MAX-1)
       cout<<"stack overflows";
    else{
        int x;
        cout<<"enter element"<<endl;
        cin>>x;
            top++;
            a[top]=x;
            
    }
}
void stac::pop(){
    if(top==-1)
         cout<<"stack underflows"<<endl;
    else{
        x=a[top];
        cout<<"item popped is "<<x<<" ";
        top--;
    }
}
int main(){
    stac s;
    int choice;
    char c;
do{
    cout<<"\n 1.push 2.pop 3.display"<<endl;
    cin>>choice;
    switch (choice){
        case 1:s.push();break;
        case 2:s.pop();break;
        case 3:s.display();break;
    }
    cout<<"Do you want to continue? ";
    cin>>c;
}while(c=='y'||c=='Y');
return 0;
}
