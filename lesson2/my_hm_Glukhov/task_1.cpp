#include <iostream>

using namespace std;

class box {
    double volume;
    public:

        box(double a_, double b_, double c_)
        {
            volume = a_*b_*c_;
        }

        void vol()
        {
            cout << volume << endl;
        }
};
/*
int main(){
    box b(1.1, 5.3, 4);
    b.vol();
    return 0;
}
*/
