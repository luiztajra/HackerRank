#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, a2, b2;
    char aux;
    cin >> a >> b;
    int len_a = a.size(), len_b = b.size();
    a2 = a;
    b2 = b;
    aux = a2[0];
    a2[0] = b2[0];
    b2[0] = aux;   
    cout << len_a << " " << len_b << endl << a + b << endl<< a2 << " " << b2 << endl;
    return 0;
}