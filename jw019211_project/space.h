//Jordan Worthington
//Project 6
//Last updated - 4/11/17
//This is the header file of the Space class. It hold the prototypes for all of its member functions

#ifndef SPACE_H
#define SPACE_H

#include <iostream>

class Space
{
public:
	bool is_allowed();
	bool is_occupied() const;	//checks if the space holds a piece
	bool is_king();		//check if the piece is a king
	bool is_red();		//check if the piece is red
	bool is_black();	//check if the piece is black
	void set_piece(char c);	//sets what piece value should be in the space
	void set_color(char c);	//sets the color value of the space
	char get_piece() const;	//return what piece is in a space
	char get_color() const; //return what color the piece in the space is
	void clear();
private:
	char piece;
	char color;

};

std::ostream& operator << (std::ostream& outs,const Space& spa);
#endif
