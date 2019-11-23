#include <iostream>
#include <cmath>

using namespace std;


int ft_sqrt(int nb){
    int ans = pow(nb, 0.5);
    if (ans*ans != nb){
        ans = 0;
    }
    return ans;
}


int main(){
    int num;
    cin >> num;
    cout << ft_sqrt(num) << endl;
    return 0;
}
