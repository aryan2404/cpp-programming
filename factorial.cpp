#include<iostream> 

using namespace std;
int fact(int n){ 
    if(n<=1){
        return 1;

    }
   
     return n*fact(n-1);
    
}


int main() {
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    cout<<"the factorial of" << x << "is" << fact (x)<< endl;

 return 0;
}