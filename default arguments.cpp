#include<iostream>
using namespace std;
void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}
int main() {
    greet();             
    greet("Rama");    
    return 0;
}
