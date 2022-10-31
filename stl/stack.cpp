
#include<stack>
using namespace std;

int main() {
    
    stack<string> s;
    s.push("surajj");
    s.push("nirajj");
    s.push("jyoti");
    cout<<"before pop : ";
    cout<<s.top()<<"      ";
    cout<<"size is "<<s.size()<<endl;//to know the size of stack s
    
    s.pop(); /*to delete the top one */
    cout<<"after pop : ";
    cout<<s.top()<<"      ";
    cout<<"size is "<<s.size()<<endl;//to know the size of stack s
    
    
    
    return 0;
}