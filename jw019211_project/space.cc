//Jordan Worthington
//Project 6
//Last updated - 4/11/17
//This file includes all the definitions to the functions of the space class

#include "space.h"
#include <iostream>

bool Space::is_occupied() const
{
	if(piece == 'S' || piece == 'K')	//the piece is either a solider or a King
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Space::is_king()	//check whether the square holds a king or not
{
	if(piece == 'K')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Space::is_red()	//check if the piece is red
{
	if(color == 'R')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Space::is_black()	//check if the piece is black
{
	if(color == 'B')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Space::set_piece(char c)	//set piece value to a new char
{
	piece = c;
}


void Space::set_color(char c)	//set color to a value passed to it
{
	color = c;
}

char Space::get_piece() const	//find out what piece is in a square
{
	return piece;
}

char Space::get_color() const	//find out what color is the piece in the square has
{
	return color;
}

void Space::clear()
{
	this -> set_piece(' ');
}

std::ostream& operator <<(std::ostream& outs,const Space& spa)	//all the << operator to be used with the space class
{
	outs << spa.get_piece();
	return outs;
}
