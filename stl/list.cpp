//list
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    
    cout<<"before pop :";
    
    for(int i:l){
        cout<<i<<" ";
    }
   
    cout<<"     size is :"<<l.size()<<endl;
    cout<<endl;
    l.pop_back();
    cout<<"after pop :";
    for(int i:l){
        
        cout<<i<<" ";
        
    }
    cout<<"        size is :"<<l.size()<<endl<<endl;
    
    cout<<"initializing a list with the same no :";
    list<int> s(5,4);  //ist of size 5 initialize with 4
    for(int i:s){
        cout<<i<<" ";
    }
    
    
    return 0;
}