#ifndef SOLDIER_HPP_
#define SOLDIER_HPP_

/**
 * Header file for soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>
// #include "Board.hpp"



namespace WarGame
{
  class Board;

  class Soldier
  {
  protected:
    uint player;
    uint fullHealth;
    int currentHealth;
    uint power;
 

  public:
    Soldier(uint playerID, uint h, uint p = 0) : player(playerID), fullHealth(h), currentHealth(h), power(p) {}
    double distance(int x1, int y1, int x2, int y2);
    bool heal();
    int getHealth() {return currentHealth;};
    void hurm(uint i);
    int getPlayerNum(){ return player;}
    virtual void activate(int x, int y, Board& board_f) = 0;
    virtual void printSoldier();
    // void move();
  };

} // namespace WarGame

#endif /* SOLDIER_HPP_ */