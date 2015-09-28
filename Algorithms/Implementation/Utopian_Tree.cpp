#include <iostream>
using namespace std;

int height(int n) {
    return n;
}
int main() {
    int T,n,a;
    cin >> T;
    while (T--) {
        cin >> n;
        if(n==0)
            a=1;
        else
            for(int i=0;i<=n;i++)
            {
                if(i == 0)
                    a=1;
                else if(i%2 == 0)
                    a+=1;
                else
                    a+=a;
        }
        cout << height(a) << endl;
        a =0 ;
    }
}
