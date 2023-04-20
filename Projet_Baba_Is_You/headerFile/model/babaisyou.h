//
// Created by Mamoun benmassaoud on 17/04/2023.
//

#ifndef PROJET_BABA_IS_YOU_BABAISYOU_H
#define PROJET_BABA_IS_YOU_BABAISYOU_H

#include "board.h"
#include "ruleManager.h"
#include "direction.h"

class BabaIsYou{
private:
    Board *board;
    RuleManager rules;
    std::vector<dev4::Position > playerPos;
public:
    void setBoard(Board *board);

private:
    void transform(Subject firstSubject, Subject secondSubject);
    bool contains(const std::vector<Element>& vec, Icon icon);
public:
    Board *getBoard() const;

    void start(int level);


    const RuleManager &getRules() const;

    void findAndAddRules();

    const std::vector<dev4::Position> &getPlayerPos() const;

    void setEffetToSubject();

    explicit BabaIsYou(Board *board);

    std::vector<dev4::Position> getVecPosPlayer();

    bool isPossibleMove(dev4::Direction dir, dev4::Position pos);

    void move(dev4::Direction direction);

    SubjectEnum iconToSubject(Icon icon);

    int push(dev4::Position PlayerPos, dev4::Direction direction);

    dev4::Position getPositionAfterPush(dev4::Position player, dev4::Direction dir);

    void applyTransform();

    Icon subjectToIcon(SubjectEnum subjectEnum);

    void sinkAndKill();

    bool isWin();

};

#endif //PROJET_BABA_IS_YOU_BABAISYOU_H
