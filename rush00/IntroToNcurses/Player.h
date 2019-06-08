/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:42:16 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/08 09:51:36 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
#define PLAYER_H

#include <ncurses.h>

class Player
{
    private:
        int x;
        int y;
        int xMax;
        int yMax;
        char c;
        WINDOW *win;
    public:
        Player(WINDOW *win, int x, int y, char c);
        ~Player();
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();
        void display();
};

#endif