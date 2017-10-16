//Jordan Worthington
//Project 6
//Last updated - 4/11/17
//this is the header file for the checkers class. It holds the prototypes for the restart,display,is legal, and make move functions


#ifndef CHECKERS_H
#define CHECKERS_H

#include <iostream>
#include "game.h"
#include "space.h"

class checkers : public main_savitch_14::game
{
public:
	checkers();				//constructor
	virtual game* clone() const;
	virtual void restart();			//remakes the board to default
	virtual int evaluate() const;
	virtual void compute_moves(std::queue<std::string>& moves) const;
	void display_status() const;		//displays the current board layout
	bool is_legal(const std::string &move) const;	//determines if a move is legal or not
	void make_move(const std::string &move);	//takes a users move and implements it
	bool is_game_over() const;
	bool can_jump() const;
	bool can_move() const;
	std::string is_jump();
private:
	Space board[8][8];
};

#endif
