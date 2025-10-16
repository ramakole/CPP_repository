#include <iostream>
using namespace std;

class demoaccessspecifiers {
public:
    int a = 10;
private:
    int b = 20;
protected:
    int c = 30;
public:
    void display() {
        cout << a << " public" << endl;
        cout << b << " private" << endl;
        cout << c << " protected" << endl;
    }
};

int main() {
    demoaccessspecifiers ob;
    ob.display(); 
    return 0;
}

