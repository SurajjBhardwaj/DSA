#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    
    queue<string> q;
    q.push("love");
    q.push("youu");
    q.push("programming");
    
    cout<<"before pop : ";
    cout<<q.front()<<"      ";
    cout<<"size is "<<q.size()<<endl;//to know the size of stack s
    
    cout<<"after pop : ";
    q.pop();
    cout<<q.front()<<"      ";
    cout<<"size is "<<q.size()<<endl;//to know the size of stack s
    
    
    cout<<"after another  pop : ";
    q.pop();
    cout<<q.front()<<"      ";
    cout<<"size is "<<q.size()<<endl;//to know the size of stack s
    
    //trying something new
    q.push("rajan");    
    cout<<"after a  push  : ";
    q.pop();
    cout<<q.front()<<"      ";
    cout<<"size is "<<q.size()<<endl;//to know the size of stack s
    
    cout<<"after one more  pop : ";
    q.pop();
    cout<<q.front()<<"      ";
    cout<<"size is "<<q.size()<<endl;//to know the size of stack s
    

    return 0;
}

