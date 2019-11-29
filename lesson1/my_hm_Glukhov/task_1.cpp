#include <iostream>

using namespace std;


int ft_sumdeg(int n, int k){
    int sum = 0;
    int num;
    for (int i=1; i<=n; i++) {
        num = i;
        for (int j=1; j<k; j++){
            num *= i;
        }
        sum += num;
    }
    return sum;
}

