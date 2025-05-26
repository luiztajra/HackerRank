#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    
    map<string, int> marks;
    
    for ( int i = 0; i < Q; ++i){
        int type;
        string name;
        cin >> type >> name;
    
        if (type == 1){
            int y;
            cin >> y;
            marks[name] += y;      
        } else if (type == 2){
            marks.erase(name);
        } else if (type == 3) {
            cout << marks[name] << endl;
        }
    }
       
    return 0;
}
