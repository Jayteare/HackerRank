#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,X,n,a,c;
    bool nk = false;
    cin>>T;
    for(int i =0; i<T;i++)
    {   
        cin>>X;
        n=X;
        while(X!=0)
        {   
            a=X%10;
            X/=10;
            nk = ((a!=0) && (n%a==0));
            if(nk)
                c++;
        }
        cout<<c<<endl;
        c=0;
    }

    return 0;
}
