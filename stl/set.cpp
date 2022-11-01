// wap  to implement the concept of queue using linklist

#include <iostream>
#include<set>
using namespace std;

 
int main() {
    
    // Write C++ code here
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(9);
    s.insert(7);
    s.insert(7);
    s.insert(12);
    s.insert(7);
    s.insert(7);
    s.insert(8);s.insert(100);
    int n=0;
    
    for(int i:s){
        cout<<i<<" ";
        n++;
    }
    cout<<endl;
    cout<<n<<" times loop has taken palace  "<<endl<<"size is : "<<s.size()<<endl;
    
    cout<<endl;
    //after deletionn
    set<int> :: iterator it =s.begin();
    it++;
    
    s.erase(it);
    cout<<"after deletion"<<endl;
    
    for(int i:s){
        cout<<i<<" ";
    }
    
    cout<<endl;
    cout<<"size is : "<<s.size()<<endl;
    
    //to check a no belogngs to the set or not
    
    cout<<"3 belongs to set : "<<s.count(3)<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    
     
    return 0;
}