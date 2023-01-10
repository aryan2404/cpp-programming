
   
//     int x=10, y=20;
//     int &z=x;
//     z=y;
//     z=z+5;
//     cout<< x<<" ";
//     cout<<y<<" ";
//     cout<<z<<" ";
//     return 0;
// }
#include<iostream> 

using namespace std;
int &fun()
{
    static int x=10;
    return x;
}
int main() {
int &y=fun();
y=20;
cout<<fun();
    
    return 0;
}