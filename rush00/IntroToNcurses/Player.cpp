/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:51:48 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/08 10:29:36 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.h"

Player::Player(WINDOW *win, int x, int y, char c){
    this->win = win;
    this->x  = x;
    this->y = y;
    this->c = c;
    getmaxyx(this->win, this->yMax, this->xMax);
    keypad(this->win, true);
}

Player::~Player(){

}

void Player::moveUp(){
    this->y--;
    if (this->y < 1){
        this->y = 1;
    }
}

void Player::moveDown(){
    this->y++;
    if (this->y > yMax - 2){
        this->y = yMax - 2;
    }
}

void Player::moveLeft(){
    this->x--;
    if (this->x < 1){
        this->x = 1;
    }
}

void Player::moveRight(){
    this->x++;
    if (this->x > this->xMax-2){
        this->x = this->xMax-2;
    }
}

void display(){
    
}

int Player::getMove(){
    int move = wgetch(this->win);
    switch(move){
        case KEY_UP:
            moveUp();
        case KEY_DOWN:
            moveDown();
        case KEY_LEFT:
            moveLeft();
        case KEY_RIGHT:
            moveRight();
        default:
            break;
    }
    return move;
}