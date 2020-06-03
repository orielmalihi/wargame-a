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
#include <cmath>
#include "Paramedic.hpp"
#include "Board.hpp"
using namespace std;


    void Paramedic::activate(int x, int y, WarGame:: Board &board_f)
    {
        int myPlayer = getPlayerNum();
        vector<std::vector<Soldier *>> board_s = board_f.getBoard_s();
        int r = board_s.size();
        int c = board_s[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (board_s[i][j] != nullptr && board_s[i][j]->getPlayerNum() == myPlayer)
                {
                    double dis = distance(x, y, i, j);
                    if (dis <= sqrt(2) && dis!=0)
                    {
                        if(board_s[i][j]->heal()){
                             cout << "PR(" << x << "," << y << ") healling Soldier at (" << i << "," << j << ")" << endl;
                        }
                    }
                }
            }
        }
    }

    void Paramedic::printSoldier()
    {
        cout << "("
             << "PR:";
        Soldier::printSoldier();
        cout << ")";
    }

