#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, x, a, b;
    scanf("%d", &n);
    
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }
    scanf("%d", &x);
    v.erase(v.begin()+(x-1));
    cin >> a >> b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    int n_new = v.size();
    cout << n_new << endl;
    for(int i = 0; i < n_new; i++){
        cout << v[i] << " ";
    }
    return 0;
}