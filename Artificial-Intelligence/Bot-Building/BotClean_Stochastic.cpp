#include<iostream>
#include<vector>
using namespace std;
//Recieved full 10.00 points ranked as first seed.
void nextMove(int posr, int posc, vector <string> board) {
    //add logic here
    //add logic here
    string grid_floor;
    int bot_x = posr,bot_y = posc;
    int clean_x =0,clean_y=0;

    bool check_x,check_y,check_r = false;
    bool cleared_board = false;
    int x_moves,y_moves;
    
    //FIND THE PRINCESS NOW
    grid_floor = board[0];
    for(int i =0; i < board.size();i++)
    {
        grid_floor = board[i];
        std::size_t found = grid_floor.find("d");
        if (found!=std::string::npos)
        {
            clean_x = i;
            clean_y = found;

            x_moves = clean_x - bot_x;
            y_moves = clean_y - bot_y;

            if((x_moves == 0) && (y_moves == 0))
            {
                cout << "CLEAN" << endl;
                cleared_board = true;
                break;
            }
            break;
        }       
    }  
    
    if(cleared_board != true)
    {
        if((x_moves == 0))
        {
                check_y = y_moves > 0;
                if(check_y)
                {
                    cout << "RIGHT" << endl;        
                }
                else if(y_moves >1 && x_moves <0)
                {
                    cout << "DOWN" << endl;
                }     
                else
                {
                    cout << "LEFT" << endl;    
                }
        }

        check_x = x_moves > 0;
        if(check_x)
        {
            if((x_moves >= 1) && (y_moves == 0))
            {
                cout << "DOWN" << endl; 
                check_r = true;  
            }
            else if ((x_moves >= 1) && (y_moves >= 1))
            {
                cout << "RIGHT" << endl; 
                check_r = true;    
            }
            else
            {
                cout << "LEFT" << endl; 
                check_r = true;        
            }

        }
        else if(x_moves < 0)
        {
            cout << "UP" << endl;
            check_r = true;
        }   
    }

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
