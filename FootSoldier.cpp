/**
 * cpp file for foot-soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <limits.h>
#include "FootSoldier.hpp"
#include "Board.hpp"
using namespace std;


    void FootSoldier::activate(int x, int y, WarGame::Board& board_f) 
    {
        int i2, j2;
        double min = __DBL_MAX__;
        int myPlayer = getPlayerNum();
        Soldier* chosen = nullptr;
        vector<std::vector<Soldier*>> board_s = board_f.getBoard_s();
        int r = board_s.size();
        int c = board_s[0].size();
        for(int i =0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(board_s[i][j]!=nullptr && board_s[i][j]->getPlayerNum() !=myPlayer){
                    double dis = distance(x,y,i,j);
                    if(dis<min){
                        min = dis;
                        i2 = i;
                        j2 = j;
                        // cout << dis << endl;
                        chosen = board_s[i][j];
                    }
                } 
            }
        }
        if(chosen!=nullptr){
            chosen->hurm(power);
            if(chosen->getHealth()==0){
                board_s[i2][j2] = nullptr;
                cout << "FS(" << x <<","<<y<<") killed Soldier at ("<< i2 << "," << j2 << ")"<<endl;
            } else {
                cout << "FS(" << x <<","<<y<<") attacking Soldier at ("<< i2 << "," << j2 << ")"<<endl;
            }
           
        }
    }

    void FootSoldier::printSoldier(){
        cout << "(" << "FS:" ;
        Soldier::printSoldier();
        cout << ")";

    }

