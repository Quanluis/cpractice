#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;

    cout << "Whats your name?" << endl;
    cin >> name;

    name == "joe" || "Joe" ? cout << "You're Joe" : cout << "You're not Joe" ;

    return 0;
}