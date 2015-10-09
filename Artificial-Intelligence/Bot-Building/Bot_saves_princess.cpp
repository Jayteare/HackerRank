#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Recieved full 13.90 points ranked as first seed.
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    string grid_floor; int t = n;
    int bot_x,bot_y;
    int prnc_x,prnc_y;
    
    //FIND THE BOT
    grid_floor = grid[0];
    for(int i =0; i < grid.size();i++)
    {
        grid_floor = grid[i];
        for(int j = 0; j < t; j++)
        {
            std::size_t found = grid_floor.find("m");
            if (found!=std::string::npos)
            {
                bot_x = i;
                bot_y = found;
                break;
            }       
        }
 
    }
    
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
    
    bool check_x,check_y;
    int x_moves,y_moves;
    
    x_moves = prnc_x - bot_x;
    y_moves = prnc_y - bot_y;
    
    check_x = x_moves > 0;
    if(check_x)
    {
        while(x_moves>0)
        {
            cout << "DOWN" << endl; 
            x_moves--;
        }
     
    }
    else
    {
        while(x_moves<0)    
        {
            cout << "UP" << endl;  
            x_moves++;
        }
    }
  
    
    check_y = y_moves > 0;
    if(check_y)
    {
        while(y_moves>0)
        {
            cout << "RIGHT" << endl;
            y_moves--;
        }
                
    }
    else
    {
        while(y_moves<0)
        {
            cout << "LEFT" << endl;
            y_moves++;    
        }
    }
        
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
