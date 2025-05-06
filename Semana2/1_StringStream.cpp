#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    char ch;
    int a;
    stringstream ss(str);
    vector<int> parseInts;
    while (ss>>a){
        parseInts.push_back(a);
        if (!(ss >> ch)) break; 
        if (ch != ',') break;   
    }
    return parseInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}