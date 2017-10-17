// File Name:space.h
// Author: Brad Martin
// Email Address: bm208613@ohio.edu
// Homework Number:6
// Last Changed: 4/20/2017

#ifndef SPACE_H
#define	SPACE_H

#include <iostream>

class Space {
	public: 
		bool is_occupied()const;					//Checks to see if the space is occupied

		bool is_king();						//Checks to see if the piece is a king

		bool is_red();						//Checks to see if the piece is red

		bool is_blue();					//Checks to see if the piece is black

		void set_piece(char c);					//Sets the checker piece		
	
		void set_color(char c);					//Sets the color of the piece

		char get_piece()const;				

		char get_color()const;

	private:
		char piece;

		char color;
};

std::ostream& operator <<(std::ostream& outs, const Space& piece);

#endif
