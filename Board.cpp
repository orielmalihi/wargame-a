/**
 * Header file for the board of the war game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
#include "Board.hpp"
using namespace std;

namespace WarGame
{

    // operator for putting soldiers on the game-board during initialization.
    Soldier *&Board::operator[](std::pair<int, int> location)
    {
        return board[location.first][location.second];
    }

    // operator for reading which soldiers are on the game-board.
    Soldier *Board::operator[](std::pair<int, int> location) const
    {
        return board[location.first][location.second];
    }

    // The function "move" tries to move the soldier of player "player"
    //     from the "source" location to the "target" location,
    //     and activates the special ability of the soldier.
    // If the move is illegal, it throws "std::invalid_argument".
    // Illegal moves include:
    //  * There is no soldier in the source location (i.e., the soldier pointer is null);
    //  * The soldier in the source location belongs to the other player.
    //  * There is already another soldier (of this or the other player) in the target location.
    // IMPLEMENTATION HINT: Do not write "if" conditions that depend on the type of soldier!
    // Your code should be generic. All handling of different types of soldiers
    //      must be handled by polymorphism.
    void Board::move(uint player_number, std::pair<int, int> source, MoveDIR direction)
    {
        int i = source.first;
        int j = source.second;
        Soldier *s = board[i][j];
        if (s == nullptr)
        {
            throw invalid_argument("ERR: no soldier on board");
        }
        if (s->getPlayerNum() != player_number)
        {
            throw invalid_argument("ERR: the soldier belongs to the other player");
        }

        switch (direction)
        {
        case Up:
            if (i + 1 == board.size())
            {
                throw invalid_argument("ERR: you tried to move out of the board");
            }
            if (board[i + 1][j] != nullptr)
            {
                throw invalid_argument("ERR: targeted location already has a soldier");
            }
            board[i][j] = nullptr;
            board[i + 1][j] = s;
            break;
        case Down:
            if (i - 1 == -1)
            {
                throw invalid_argument("ERR: you tried to move out of the board");
            }
            if (board[i - 1][j] != nullptr)
            {
                throw invalid_argument("ERR: targeted location already has a soldier");
            }
            board[i][j] = nullptr;
            board[i - 1][j] = s;
            break;
        case Right:
            if (j + 1 == board[0].size())
            {
                throw invalid_argument("ERR: you tried to move out of the board");
            }
            if (board[i][j+1] != nullptr)
            {
                throw invalid_argument("ERR: targeted location already has a soldier");
            }
            board[i][j] = nullptr;
            board[i][j+1] = s;
            break;
        case Left:
            if (j - 1 == -1)
            {
                throw invalid_argument("ERR: you tried to move out of the board");
            }
            if (board[i][j-1] != nullptr)
            {
                throw invalid_argument("ERR: targeted location already has a soldier");
            }
            board[i][j] = nullptr;
            board[i][j-1] = s;
            break;
        }
        
        s->activate();

        // print for debug purposes..

        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] != nullptr)
                {
                    cout << "  ";
                    board[i][j]->printSoldier();
                    cout << " ";
                }
                else
                {
                    cout << " |__________|";
                }
            }
            cout << endl;
        }
        cout << endl
             << "**************************************************************************************************************" << endl;
    }

    // returns true iff the board contains one or more soldiers of the given player.
    bool Board::has_soldiers(uint player_number) const
    {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] != nullptr && board[i][j]->getPlayerNum() == player_number)
                {
                    return true;
                }
            }
        }
        return false;
    }

} // namespace WarGame