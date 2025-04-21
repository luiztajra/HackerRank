#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int n, q; 
   scanf("%d %d", &n, &q);
   
   vector<vector<int>> arr(n);
   
   for (int i = 0; i < n; i++){
    int k;
    scanf("%d", &k);
    
    arr[i].resize(k);
    for (int j = 0; j < k; j++){
        cin >> arr[i][j];
    }
   }
   
   for (int i = 0; i < q; i++){
    int x, y;
    scanf("%d %d", &x, &y);
    
    cout << arr[x][y] << endl; 
   }
   
    return 0;
}