#include <iostream>
#include <vector>
#include <string>
using namespace std;
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
        //cout << grid_floor << endl;
        for(int j = 0; j < t; j++)
        {
            std::size_t found = grid_floor.find("m");
            if (found!=std::string::npos)
            {
                //cout << "found at position: i x y : " << i << " x " << found << endl;
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
        //cout << grid_floor << endl;
        for(int j = 0; j < t; j++)
        {
            std::size_t found = grid_floor.find("p");
            if (found!=std::string::npos)
            {
                //cout << "found at position: i x y : " << i << " x " << found << endl;
                prnc_x = i;
                prnc_y = found;
                break;
            }       
        }
    }
    
    //cout << "Bot is at location: " << bot_x << " x " << bot_y << endl;
    //cout << "Princess is at location: " << prnc_x << " x " << prnc_y << endl;
    
    bool check_x,check_y;
    int x_moves,y_moves;
    
    x_moves = prnc_x - bot_x;
    y_moves = prnc_y - bot_y;
    
    check_x = x_moves > 0;
    if(check_x)
        cout << "DOWN" << endl;    
    else
        cout << "UP" << endl;    
    
    check_y = y_moves > 0;
    if(check_y)
        cout << "RIGHT" << endl;
    else
        cout << "LEFT" << endl;
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
