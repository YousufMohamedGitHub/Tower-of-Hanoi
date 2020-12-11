//
//  main.cpp
//  Tower of Hanoi
//
//  Created by Yousuf Mohamed on 2020-11-24.
//  Copyright © 2020 Yousuf Mohamed. All rights reserved.
//

#include "Game.h"
#include <iostream>

int main() {
  Game game;
   

  std::cout << "Initial game state: " << std::endl;
  std::cout << game << std::endl;

  game.solve();

  std::cout << "Final game state: " << std::endl;
  std::cout << game << std::endl;

  return 0;
}
