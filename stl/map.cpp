#include<iostream>
#include<map>
using namespace std;

int main(){
    
map<int,string> m;
cout<<"family is"<<endl;
m.insert({1,"suraj"});
m.insert({2,"jyoti"});
m.insert({9,"ujala"});
m.insert({4,"raunak"});
m.insert({0,"salkal"});

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"is key 99 present : "<<m.count(99)<<endl<<endl;
cout<<"after erasing ujala from family"<<endl;

m.erase(9);

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
auto it=m.find(5);
cout<<"is empty : "<<m.empty()<<endl;
for(auto i=it;i!=m.end();i++){
    
    cout<<(*i).first<<endl;
    
}
    
    
    return 0;
    
}