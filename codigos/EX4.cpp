#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n = 3;
    long lg = 12345678912345;
    char ch = 'a';
    float fl = 334.23;
    double d = 14049.30493;
    
    scanf("%d %ld %c %f %lf", &n, &lg, &ch, &fl, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", n, lg, ch, fl, d);  
    return 0;
}

