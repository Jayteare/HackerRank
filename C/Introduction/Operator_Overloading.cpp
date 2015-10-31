typedef vector<vector<int>> vvi;
#define START 0
#define REP(i, a, b) \
    for (int i = int(a); i < int(b); i++) 

class Matrix
{   
    public:
    
        vvi a;  
        Matrix(){};
        Matrix operator+(const Matrix& b)
        {
            Matrix eq(*this);
            REP(i,START,adotsize()){
                REP(j,START,adotsize2(i)){
                    eq.a[i][j] += b.a[i][j];
                }
            }
            
            return eq;
        }   
    
       const int adotsize()
       {
            return this->a.size();    
       }
        
       const int adotsize2(int i)
       {
            return this->a[i].size();    
       }

};
