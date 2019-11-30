#include <iostream>
#include <ctime>

using namespace std;

class stopwatch{
    int time_in_secodns, m, s;
    int old_time;
    bool started;
    public:
        stopwatch()
        {
            time_in_secodns = 0;
            old_time = time(NULL);

            started = true;
        }
        void start()
        {
            if (started){return;}
            started = true;
            old_time = time(NULL);

        }
        void stop()
        {
            if (not started){return;}
            s = time(NULL);
            time_in_secodns += s - old_time;
            old_time = s;
            started = false;

        }
        void show()
        {
            if (started){
                s = time(NULL);
                time_in_secodns += s - old_time;
                old_time = s;
            }
            s = time_in_secodns%60;
            m = time_in_secodns/60;
            cout << m << ":" << s << endl;
        }
};
/*
int main(){
    stopwatch a;
    string c;
    cin >> c;
    cout << "stopping" << endl;
    a.stop();
    a.show();

    cin >> c;
    cout << "started"<<endl;
    a.show();
    a.start();
    cin>>c;
    cout<<"end";
    a.show();
    return 0;
}
*/
