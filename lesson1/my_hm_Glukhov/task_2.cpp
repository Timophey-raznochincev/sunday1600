#include <iostream>

using namespace std;


int ft_sqrt(int nb){
    for (int i=0; i<=nb/2; i++){
        if (i*i == nb){
            return i;
        }
    }
    return 0;
}


int main(){
    /*
    int num;
    cin >> num;
    cout << ft_sqrt(num) << endl;
    */
    return 0;
}
