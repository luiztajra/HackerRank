#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n; //numero n de inteiros
    scanf("%d", &n); //le o numero de inteiros
    
    int arr[n]; //cria um vetor com n elementos inteiros
    
    //le os n inteiros
    for(int i=0; i<n ; i++){
         cin >> arr[i];
    }
    // imprime os inteiros em ordem reversa
    for(int i = n - 1; i >= 0; i--){
        cout << arr[i];
        if (i>0){
            cout << " ";
        }
    }
       cout << endl;
    return 0;
}