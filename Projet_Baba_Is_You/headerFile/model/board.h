//
// Created by Mamoun benmassaoud on 14/03/2023.
//

#ifndef PROJET_BABA_IS_YOU_BOARD_H
#define PROJET_BABA_IS_YOU_BOARD_H
#include <vector>
#include "position.h"
#include "levelLoader.h"
#include "tiles.h"
class Board {
private:
    std::vector<std::vector<Tiles>> board;
    LevelLoader file;
    Element convertionEnum(std::string strFile);
public:
    Board(LevelLoader file);

    std::vector<std::vector<Tiles>> getBoard();
    bool contains(dev4::Position position);
    void dropTile(dev4::Position position);
    void setTile(dev4::Position newPosition, Tiles tiles);
    Tiles getTiles(dev4::Position position);

};




#endif //PROJET_BABA_IS_YOU_BOARD_H
