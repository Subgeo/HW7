// File Name:space.cc
// Author: Brad Martin
// Email Address: bm208613@ohio.edu
// Homework Number:6
// Last Changed: 4/20/2017

#include "space.h"
#include <iostream>

using namespace std;

bool Space::is_occupied()const{
	if(piece == 'S' || piece == 'K'){
		return true;
	}
	else{
		return false;
	}
}

bool Space::is_king(){
	if(piece == 'K'){
		return true;
	}
	else{
		return false;
	}
}

bool Space::is_red(){
	if(color == 'R'){
		return true;
	}
	else{
		return false;
	}
}

bool Space::is_blue(){
	if(color == 'B'){
		return true;
	}
	else{
		return false;
	}
}

void Space::set_piece(char c){
	piece = c;
}

void Space::set_color(char c){
	color = c;
}

char Space::get_piece()const{
	return piece;
}

char Space::get_color()const{
	return color;
}

std::ostream& operator <<(std::ostream& outs, const Space& piece){
	outs << piece.get_piece();
	return outs;
}
