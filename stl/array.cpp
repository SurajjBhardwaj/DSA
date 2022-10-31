#include<iostream>
#include<array>
using namespace std;


int main(){
    
array<int,5> s={2,4,5,5,6};

int size=s.size();
cout<<"arrays are: ";
s.at(4)=9;
s.at(0)=1;
for(int i=0;i<size;i++){

cout<<s[i]<<" ";

}
cout<<endl;
cout<<"front is : "<<s.front()<<endl;
cout<<"back is : "<<s.back()<<endl;

    return 0;
}