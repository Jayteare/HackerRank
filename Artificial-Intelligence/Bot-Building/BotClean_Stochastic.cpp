#include<iostream>
#include<vector>
using namespace std;
//Recieved full 10.00 points ranked as first seed.
void nextMove(int posr, int posc, vector <string> board) {
    //add logic here
    string grid_floor;
    int bot_x   = posr , bot_y   = posc;
    int clean_x = 0    , clean_y = 0;

    bool check_x,check_y;
    int x_moves,y_moves;
    
    //For Loop - Focuses on locating the target 'd';
    for(int i =0; i < board.size();i++)
    {
        grid_floor   = board[i]; //Assigns the row in the matrix grid;
        size_t found = grid_floor.find("d"); //Checks the columns in the matrix grid;
        if (found!=string::npos)
        {
            clean_x = i;
            clean_y = found;

            //Calculates the amount of differences in (x,y) distance in 2D grid;
            x_moves = clean_x - bot_x;
            y_moves = clean_y - bot_y;

            if((x_moves == 0) && (y_moves == 0))
            {
                cout << "CLEAN" << endl;
                return;//Removes redundencies;
            }
            break;
        }       
    }  
    
    //Brute Force point-move checking;
    if((x_moves == 0))
    {
        check_y = y_moves > 0;
        if(check_y)
            cout << "RIGHT" << endl;        
        else if(y_moves >1 && x_moves <0)
            cout << "DOWN" << endl;
            else
            cout << "LEFT" << endl;    

            return;
    }

    check_x = x_moves > 0;
    //Brute Force point-move checking;
    if(check_x)
    {
        if((x_moves >= 1) && (y_moves == 0))
            cout << "DOWN" << endl; 
        else if ((x_moves >= 1) && (y_moves >= 1))
            cout << "RIGHT" << endl;
            else
            cout << "LEFT" << endl; 
            return;
    }
    else if(x_moves < 0)
        cout << "UP" << endl;

}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
