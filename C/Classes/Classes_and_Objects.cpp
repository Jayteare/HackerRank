#define REP(i,a,b) \
    for(int i = int(a); i < int(b); i++)
class Student
{
    public: 
        void Input()
        {
            REP(i,0,5)
            {
                int in = 0; cin >> in;
                sum += in;    
            }
        }
    
        int CalculateTotalScore() const
        {
            return sum;
        }
    
    
    private:
        int sum = 0;
};
