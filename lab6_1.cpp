#include<iostream>
using namespace std;

int main(){
    int n=1,x,y;

    while (n!=0){
    cout << "Enter an integer: ";
    cin >> n;
   
            if(n%2==0 && n!=0){
            x=x+1;
        }
        if(n%2!=0){
            y=y+1;
        }
    }
    cout << "#Even numbers = " << x <<"\n";
    cout << "#Odd numbers = "<<y;

    
    return 0;
}
