#include<iostream>
#include<vector>  //header file must have to include library

using namespace std;


int main(){
    

//vector is called as dynamic vector,it's size has'nt desided so that we can  we
//can use

//it's size can be reduce and increase anytime.

vector<int> v;


v.push_back(1);//adding one member the vector i.e. pushing one member the vector
v.push_back(2);
v.push_back(6);
v.push_back(9);

cout<<"capacity is : "<<v.capacity()<<endl;//to know the capacity i.e. to know 
// the allocated memory to the vector 
int size =v.size();

     cout<<"size is : "<<v.size()<<endl;//to know the size of the vector
     cout<<"front is "<<v.front()<<endl;//to print the front of the vector
     cout<<"back is "<<v.back()<<endl;//to print the back of the vector
     cout<<"all the vectors are : ";
     // v.pop_back();(to delete from the last)    
     for(int i=0;i<size;i++){
         
       cout<<v.at(i)<<" ";//to print the all vectors
     }
     
    return 0;
    
}