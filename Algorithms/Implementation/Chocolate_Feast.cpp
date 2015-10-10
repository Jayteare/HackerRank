#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m,temp=0,answer =0;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        answer = 0; temp   = 0;
        // Computer answer
        answer = n/c;
        temp   = answer;  
        if(answer>=m)  
        {   
           while(true)  
           {
             temp-=m; answer++; temp++;  
               if(temp < m)
                   break;
           }
        }
        cout<<answer<<endl;
     } 
    return 0;
}
