#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int ft_atoi(string str){
    int ans = 0;
    string symbol, new_str;
    bool started = false;
    map <string,int> nums;
    nums.insert(make_pair("0", 0));
    nums.insert(make_pair("1", 1));
    nums.insert(make_pair("2", 2));
    nums.insert(make_pair("3", 3));
    nums.insert(make_pair("4", 4));
    nums.insert(make_pair("5", 5));
    nums.insert(make_pair("6", 6));
    nums.insert(make_pair("7", 7));
    nums.insert(make_pair("8", 8));
    nums.insert(make_pair("9", 9));
    for (int i=0; i<str.length();i++){
        symbol = str[i];
        if ((symbol >= "1") && (symbol <= "9")){
            new_str += symbol;
            started = true;
        } else if (symbol == "-" || symbol == "+"){
            if (started) {return 0;}
            new_str = symbol;
            started = true;
        } else {break;}
    }
    str = new_str;
    cout << str<<endl;
    for (int i=str.length()-1;i>=0;i--){
        symbol = str[i];
        if (symbol == "-"){
            ans = 0 - ans;
        }else if (symbol != "+"){
            int mul = pow(10, str.length()-1-i);
            ans += nums[symbol]*mul;
        }

    }
    return ans;
}

/*
int main(){
    string input;
    cout << "Enter N"<<endl;
    cin >> input;

    int value = ft_atoi(input);
    cout << "N: " << value << ", 2*N:" << (value * 2)<<endl;

    return 0;
}
*/
