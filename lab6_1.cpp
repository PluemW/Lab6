#include<iostream>
using namespace std;

int main(){
    int x;
    int e = 0;
    int o = 0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
            e++;
            cout << "Enter an integer: ";
            cin >> x;
        }
        else{
            cout << "Enter an integer: ";
            cin >> x;
            o++;
        }
    }
    cout << "#Even numbers = " << e << "\n";
    cout << "#Odd numbers = " << o << "\n";
    return 0;
}