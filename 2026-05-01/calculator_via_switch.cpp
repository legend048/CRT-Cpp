#include <iostream>

using namespace std;

int main() {
    int a,b;
    char op;
    cout<<"Enter an expression (e.g., 3 + 4): ";
    cin>>a>>op>>b;
    switch(op){
        case '+':
            cout<<"Result: "<<a+b;
            break;
        case '-':
            cout<<"Result: "<<a-b;
            break;
        case '*':
            cout<<"Result: "<<a*b;
            break;
        case '/':
            if(b!=0){
                cout<<"Result: "<<a/b;
            } else {
                cout<<"Error: Division by zero!";
            }
            break;
        case '%':
            if(b!=0){
                cout<<"Result: "<<a%b;
            } else {
                cout<<"Error: Division by zero!";
            }
            break;
        default:
            cout<<"Invalid operator! Please use +, -, *, /, or %.";
    }
    return 0;
}