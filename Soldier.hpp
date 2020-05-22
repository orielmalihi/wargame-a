#pragma once

/**
 * Header file for soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame
{

  class Soldier
  {
  protected:
    uint player;
    uint health;
    uint power;
    int type;
    enum category
    {
      warrior,
      sniper,
      healer
    };

  public:
    Soldier(uint playerID, category t, uint h, uint p = 0) : player(playerID), type(t), health(h), power(p) {}
    double distance();
    int getPlayerNum(){ return player;}
    virtual void attack() = 0;
    void move();
  };

} // namespace WarGame