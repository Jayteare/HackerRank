#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
//your logic here
    string grid_floor; int t = n;
    int bot_x = r,bot_y = c;
    int prnc_x,prnc_y;
    
    
    //FIND THE PRINCESS NOW
    grid_floor = grid[0];
    for(int i =0; i < grid.size();i++)
    {
        grid_floor = grid[i];
        for(int j = 0; j < t; j++)
        {
            std::size_t found = grid_floor.find("p");
            if (found!=std::string::npos)
            {
                prnc_x = i;
                prnc_y = found;
                break;
            }       
        }
    }
    
    bool check_x,check_y,check_r = false;
    int x_moves,y_moves;
    
    x_moves = prnc_x - bot_x;
    y_moves = prnc_y - bot_y;
    
    if((x_moves == 0))
    {
            check_y = y_moves > 0;
            if(check_y)
            {
                cout << "RIGHT" << endl;        
            }
            else
            {
                cout << "LEFT" << endl;
            }     
    }
    
    check_x = x_moves > 0;
    if(check_x)
    {
        cout << "DOWN" << endl; 
        check_r = true;
    }
    else if(check_x < 0)
    {
        cout << "UP" << endl;
        check_r = true;
    }
  


        
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
