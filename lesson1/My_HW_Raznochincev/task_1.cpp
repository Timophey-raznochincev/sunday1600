#include <iostream>
#include <math.h>
using namespace std;
int ft_sumdeg(int n,int k){
    int s = 0;
    for (int i = 1; i <= n;i++){
        s = s + pow(i,k);
        }
   return s;
   }


int main()
{
    int n,k;
  cin>>n>>k;
  cout<<ft_sumdeg (n,k);
 
  return 0;
}
