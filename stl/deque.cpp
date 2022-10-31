#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(5);
    int size=d.size();
    cout<<"before pop"<<endl;
    for(int i=0;i<size;i++){
        cout<<d.at(i)<<" ";
    }
    
    cout<<endl<<"size is : "<<d.size()<<endl;
    
    cout<<endl<<"after pop"<<endl;
    d.pop_back();
    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    
    cout<<endl<<"size is : "<<d.size()<<endl;
    
    
    return 0;
}