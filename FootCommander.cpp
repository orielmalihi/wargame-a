/**
 * cpp file for foot-Commander in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include "FootCommander.hpp"
#include "Board.hpp"
using namespace std;


    void FootCommander::activate(int x, int y, WarGame:: Board& board_f)
    {
        cout << "FC attackig:" << endl;
        FootSoldier::activate(x,y,board_f);
        cout << "Special Ability:" << endl;
        int myPlayer = getPlayerNum();
        vector<std::vector<Soldier*>> board_s = board_f.getBoard_s();
        int r = board_s.size();
        int c = board_s[0].size();
        for(int i =0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(board_s[i][j]!=nullptr &&
                 board_s[i][j]->getPlayerNum() ==myPlayer &&
                 dynamic_cast<FootSoldier*>(board_s[i][j])!=nullptr &&
                 dynamic_cast<FootCommander*>(board_s[i][j])==nullptr){
                   board_s[i][j]->activate(i,j,board_f);
                } 
            }
        }

    }

    void FootCommander::printSoldier()
    {
        cout << "(" << "FC:";
        Soldier::printSoldier();
        cout << ")";
    }

