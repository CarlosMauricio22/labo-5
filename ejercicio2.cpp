#include <iostream>
using namespace std;
int main (){
    int h, m, s;
    char c;
    cin>> h >> c >> m >> c >> s;

    s = s + 1; 
    if (s >= 60){
        s = 0;
        m = m + 1; 
        if( m >= 60){
            m = 0;
            h= h +1;
            if(h >=24){
                h = 0;
            }
        } 
    }
    cout << h << ":" << m << ":" << s << endl;

}


