#include "Player.h"
#include <iostream>

Player::Player(){
    count=0;
}

char Player::makeMove(){
    return 'S';
}

void Player::reset(){
    count=0;
    return;
}

Player::~Player(){}



