// File Name:checkers.h
// Author: Brad Martin
// Email Address: bm208613@ohio.edu
// Homework Number:6
// Last Changed: 4/23/2017

#ifndef CHECKERS_H
#define CHECKERS_H

#include "game.h"
#include "space.h"
#include <iostream>
#include <string>

class Checkers : public main_savitch_14::game {
	public:
		Checkers();						//Constructor to set the pieces on the board

		virtual void restart();						//Resets the board

		void display_status() const;				//Displays the board

		bool is_legal(const std::string &move)const;		//Checks to see if the move is legal
	
		bool is_game_over()const;

		void make_move(const std::string &move);		//Moves a piece

		void set_last(char turn);
	
		bool can_jump()const;
		
		bool can_move()const;	
		
		virtual int evaluate()const;

		virtual void compute_moves(std::queue<std::string>& moves)const;

		virtual game* clone()const;

	private:
	Space board[8][8];
};

#endif
