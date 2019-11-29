#include <iostream>

using namespace std;


int ft_is_prime(int nb){
    for (int i=2; i<(nb/2); i++){
        if (nb%i==0){
            return 0;
        }
    }
    return 1;
}
