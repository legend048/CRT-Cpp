#include <iostream>

using namespace std;

int main() {
    char chr;
    cout<<"Enter a character: ";
    cin>>chr;
    switch(chr){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
    }
    return 0;
}