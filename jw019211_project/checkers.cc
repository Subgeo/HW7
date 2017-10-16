//Jordan Worthington
//Project 8
//4/24/17

#include "checkers.h"
#include "space.h"
#include "colors.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

checkers::checkers()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(j%2 == 1 && i%2 == 0)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('B');
			}
			else if(j%2 == 0 && i%2 == 1)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('B');
			}
			else
			{
				board[i][j].set_piece(' ');
			}
		}
	}
	for(int i = 5; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(j%2 == 0 && i%2 == 1)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('R');
			}
			else if(j%2 == 1 && i%2 == 0)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('R');
			}
			else
			{
				board[i][j].set_piece(' ');
			}
		}
	}
	for(int i = 3; i < 5; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j].set_piece(' ');
		}
	}
}

main_savitch_14::game* checkers::clone() const
{
	return new checkers(*this);
}

void checkers::display_status() const
{
	cout << "    A    B    C    D    E    F    G    H  " << endl;

	for(int i = 0; i < 8; i++)
	{
		cout << i + 1 << "  ";
		if(i%2 == 0)
		{
			for(int k = 0; k < 4; k++)
			{
				cout << B_RED <<"     "<< RESET << B_BLACK << "     " << RESET;
			}
			cout << endl;
			cout << "   ";

			for(int j = 1; j <= 8; j+=2)
			{
				if(board[i][j].get_color() == 'B')
				{
					cout << B_RED << "     " << RESET << B_BLACK << "  " << GREEN << board[i][j] << "  " << RESET;
				}
				else
				{
					cout << B_RED << "     " << RESET << B_BLACK << "  " << BLUE << board[i][j] << "  " << RESET;
				}
			}
			cout << endl;
			cout << "   ";

			for(int k = 0; k < 4; k++)
			{
				cout << B_RED <<"     "<< RESET << B_BLACK << "     " << RESET;
			}

			cout << endl;
		}
		else
		{
			for(int k = 0; k < 4; k++)
			{
				cout << B_BLACK <<"     "<< RESET << B_RED << "     " << RESET;
			}
				cout << endl;
				cout << "   ";

				for(int j = 0; j < 8; j+=2)
				{
					if(board[i][j].get_color() == 'B')
					{
						cout << B_BLACK << "  " << GREEN << board[i][j] << "  " << RESET << B_RED << "     " << RESET;
					}
					else
					{
						cout << B_BLACK << "  " << BLUE << board[i][j] << "  " << RESET << B_RED << "     " << RESET;
					}
				}
				cout << endl;
				cout << "   ";

			for(int k = 0; k < 4; k++)
			{
				cout << B_BLACK <<"     "<< RESET << B_RED << "     " << RESET;
			}
			cout << endl;
		}
	}
}

void checkers::restart()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(j%2 == 1 && i%2 == 0)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('B');
			}
			else if(j%2 == 0 && i%2 == 1)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('B');
			}
			else
			{
				board[i][j].set_piece(' ');
			}
		}
	}
	for(int i = 5; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(j%2 == 0 && i%2 == 1)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('R');
			}
			else if(j%2 == 1 && i%2 == 0)
			{
				board[i][j].set_piece('S');
				board[i][j].set_color('R');
			}
			else
			{
				board[i][j].set_piece(' ');
			}
		}
	}
	for(int i = 3; i < 5; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			board[i][j].set_piece(' ');
		}
	}
}

void checkers::make_move(const std::string &move)
{
	string letter1;
	char number1;
	string letter2;
	char number2;
	int x1;
	int y1;
	int x2;
	int y2;

	letter1 = move.substr(0,1);		
	number1 = move[1];
	letter2 = move.substr(2,1);
	number2 = move[3];

	if(letter1.compare("a") == 0)
	{
		y1 = 0;
	}
	else if(letter1.compare("b") == 0)
	{
		y1 = 1;
	}
	else if(letter1.compare("c") == 0)
	{
		y1 = 2;
	}
	else if(letter1.compare("d") == 0)
	{
		y1 = 3;
	}
	else if(letter1.compare("e") == 0)
	{
		y1 = 4;
	}
	else if(letter1.compare("f") == 0)
	{
		y1 = 5;
	}
	else if(letter1.compare("g") == 0)
	{
		y1 = 6;
	}
	else if(letter1.compare("h") == 0)
	{
		y1 = 7;
	}

	x1 = number1 - 49;

	if(letter2.compare("a") == 0)
	{
		y2 = 0;
	}
	else if(letter2.compare("b") == 0)
	{
		y2 = 1;
	}
	else if(letter2.compare("c") == 0)
	{
		y2 = 2;
	}
	else if(letter2.compare("d") == 0)
	{
		y2 = 3;
	}
	else if(letter2.compare("e") == 0)
	{
		y2 = 4;
	}
	else if(letter2.compare("f") == 0)
	{
		y2 = 5;
	}
	else if(letter2.compare("g") == 0)
	{
		y2 = 6;
	}
	else if(letter2.compare("h") == 0)
	{
		y2 = 7;
	}

	x2 = number2 - 49;

	board[x2][y2].set_piece(board[x1][y1].get_piece());
	board[x2][y2].set_color(board[x1][y1].get_color());
	board[x1][y1].set_piece(' ');


	if(board[x1][y1].get_color() == 'R' && board[x1][y1].get_piece() != 'K' && x2 - x1 == -2)
	{
		int x3 = (x1 + x2) / 2;
		int y3 = (y1 + y2) / 2;

		board[x3][y3].set_piece(' ');
	}
	if(board[x1][y1].get_color() == 'B' && board[x1][y1].get_piece() != 'K' && x2 - x1 == 2)
	{
		int x3 = (x1 + x2) / 2;
                int y3 = (y1 + y2) / 2;

                board[x3][y3].set_piece(' ');
	}
	if((board[x1][y1].get_piece() == 'K' && x2 - x1 < 2) || (board[x1][y1].get_piece() == 'K' && x2 - x1 > -2))
	{
                int x3 = (x1 + x2) / 2;
                int y3 = (y1 + y2) / 2;

                board[x3][y3].set_piece(' ');
	}
	if(x2 == 0 && board[x2][y2].get_color() == 'R')
	{
		board[x2][y2].set_piece('K');

	}
	if(x2 == 7 && board[x2][y2].get_color() == 'B')
	{
		board[x2][y2].set_piece('K');
	}

	game::make_move(move);

}

bool checkers::is_legal(const std::string &move) const{

	string letter1;
	char number1;
	string letter2;
	char number2;
	int x1;
	int y1;
	int x2;
	int y2;

	letter1 = move.substr(0,1);		
	number1 = move[1];
	letter2 = move.substr(2,1);
	number2 = move[3];

	if(letter1.compare("a") == 0)
	{
		y1 = 0;
	}
	else if(letter1.compare("b") == 0)
	{
		y1 = 1;
	}
	else if(letter1.compare("c") == 0)
	{
		y1 = 2;
	}
	else if(letter1.compare("d") == 0)
	{
		y1 = 3;
	}
	else if(letter1.compare("e") == 0)
	{
		y1 = 4;
	}
	else if(letter1.compare("f") == 0)
	{
		y1 = 5;
	}
	else if(letter1.compare("g") == 0)
	{
		y1 = 6;
	}
	else if(letter1.compare("h") == 0)
	{
		y1 = 7;
	}

	x1 = number1 - 49;

	if(letter2.compare("a") == 0)
	{
		y2 = 0;
	}
	else if(letter2.compare("b") == 0)
	{
		y2 = 1;
	}
	else if(letter2.compare("c") == 0)
	{
		y2 = 2;
	}
	else if(letter2.compare("d") == 0)
	{
		y2 = 3;
	}
	else if(letter2.compare("e") == 0)
	{
		y2 = 4;
	}
	else if(letter2.compare("f") == 0)
	{
		y2 = 5;
	}
	else if(letter2.compare("g") == 0)
	{
		y2 = 6;
	}
	else if(letter2.compare("h") == 0)
	{
		y2 = 7;
	}

	x2 = number2 - 49;

	if((x2 % 2 == 0 && y2 % 2 == 0) || (x2 % 2 == 1 && y2 % 2 == 1))
	{
		return false;
	}

	while(this -> can_jump() == true)
	{
                if(board[x1][y1].get_color() == 'R' && board[x1][y1].get_piece() != 'K' && x2 - x1 != -2)
		{
                        return false;
                }
                if(board[x1][y1].get_color() == 'B' && board[x1][y1].get_piece() != 'K' && x2 - x1 != 2)
		{
                        return false;
                }
                if((board[x1][y1].get_piece() == 'K' && x2 - x1 < 2) || (board[x1][y1].get_piece() == 'K' && x2 - x1 > -2))
		{
                        return false;
                }

		int x3 = (x1 + x2) / 2;
		int y3 = (y1 + y2) / 2;

		if(board[x2][y2].is_occupied() == true)
		{
			return false;
		}
		else if(board[x1][y1].get_color() == board[x3][y3].get_color())
		{
			return false;
		}
		else if(x2 - x1 == -2 && board[x1][y1].get_color() != 'R')
		{
			return false;
		}
		else if(x2 - x1 == 2 && board[x1][y1].get_color() != 'B')
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if(last_mover() == COMPUTER)
	{
		if(board[x1][y1].get_color() != 'R')
		{
			return false;
		}
	}
	else
	{
		if(board[x1][y1].get_color() != 'B')
		{
			return false;
		}
	}
	if(board[x2][y2].is_occupied() == true)
	{
		return false;
	}
	if(x2 - x1 != -1 && board[x1][y1].get_color() == 'R' && board[x1][y1].get_piece() != 'K')
	{
		return false;
	}
	if(x2 - x1 != 1 && board[x1][y1].get_color() == 'B' && board[x1][y1].get_piece() != 'K')
	{
		return false;
	}
	if((x2 - x1 > 1 || x2 - x1 < -1) && board[x1][y1].get_color() == 'R' && board[x1][y1].get_piece() != 'K')
	{
		return false;
	}
	if((x2 - x1 > 1 || x2 - x1 < -1) && board[x1][y1].get_color() == 'B' && board[x1][y1].get_piece() != 'K')
	{
		return false;
	}
	if(y2 == 0 && y1 == 7)
	{
		cout << 6 << endl;
		return false;
	}
	if(y2 == 7 && y1 == 0)
	{
		cout << 7 << endl;
		return false;
	}

	return true;
}

bool checkers::is_game_over() const
{
	int count = 0;

	/*if(this -> can_jump() == false && this -> can_move() == false)
	{
		cout << "No Remaining moves" << endl;
		return true;
	}*/

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(board[i][j].get_color() == 'R' && (board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K'))
			{
				count++;
			}
		}
	}
	if(count == 0)
	{
		cout << "Game Over" << endl;
		exit(1);
		return true;
	}

	count = 0;

        for(int i = 0; i < 8; i++)
	{
                for(int j = 0; j < 8; j++)
		{
			if(board[i][j].get_color() == 'B' && (board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K'))
			{
                                count++;
                        }
                }
        }

        if(count == 0)
	{
		cout << "Game Over" << endl;
		exit(1);
                return true;
        }
        else
	{
                return false;
        }
}

bool checkers::can_jump() const
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if((board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K') && board[i][j].get_color() == 'R' && 
			    last_mover() == COMPUTER)
			{
				if((board[i - 1][j + 1].is_occupied() == true && board[i - 1][j + 1].get_color() == 'B') || 
				   (board[i - 1][j - 1].is_occupied() == true && board[i - 1][j - 1].get_color() == 'B'))
				{
					if(j - 2 < 0 && board[i - 2][j + 2].is_occupied() == true)
					{
						continue;
					}
					if(j + 2 > 7 && board[i - 2][j - 2].is_occupied() == true)
					{
						continue;
					}
					if(board[i + 2][j - 2].is_occupied() == true && board[i - 2][j - 2].is_occupied() == true)
					{
						continue;
					}
					return true;
				}
			}
			if((board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K') && board[i][j].get_color() == 'B' &&
			    last_mover() == HUMAN)
			{
				if((board[i + 1][j + 1].is_occupied() && board[i + 1][j + 1].get_color() == 'R' && j + 1 <=7) 					 ||(board[i + 1][j - 1].is_occupied() && board[i + 1][j - 1].get_color() == 'R'&& j - 1 >= 0))
				{
					if(j - 2 < 0 && board[i + 2][j + 2].is_occupied() == true)
					{
						continue;
					}
					if(j + 2 > 7 && board[i + 2][j - 2].is_occupied() == true)
					{
						continue;
					}
					if(board[i + 2][j + 2].is_occupied() == true && board[i + 2][j - 2].is_occupied() == true)
					{
						continue;
					}
					return true;
				}
			}
			if(board[i][j].get_piece() == 'K' && board[i][j].get_color() == 'R')
			{
				if((board[i + 1][j + 1].is_occupied() && board[i + 1][j + 1].get_color() == 'B') || 
				   (board[i + 1][j - 1].is_occupied() && board[i + 1][j - 1].get_color() == 'B'))
				{
					if(j - 2 < 0 && board[i + 2][j + 2].is_occupied() == true)
					{
						continue;
					}
					if(j + 2 > 7)
					{
						continue;
					}
					return true;
				}
			}
			if(board[i][j].get_piece() == 'K' && board[i][j].get_color() == 'B')
			{
				if((board[i - 1][j - 1].is_occupied() && board[i - 1][j - 1].get_color() == 'R') || 
				   (board[i - 1][j + 1].is_occupied() && board[i - 1][j + 1].get_color() == 'R'))
				{
					if(j - 2 < 0)
					{
						continue;
					}
					if(j + 2 > 7 && board[i - 2][j - 2].is_occupied() == true)
					{
						continue;
					}
					if(board[i + 2][j - 2].is_occupied() == true && board[i - 2][j - 2].is_occupied() == true)
					{
						continue;
					}
					return true;
				}
			}
		}
	}
	return false;
}


bool checkers::can_move() const
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; i < 8; i++)
		{
			if((board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K') && board[i][j].get_color() == 'R'
			    && last_mover() == COMPUTER)
			{
				if((board[i - 1][j + 1].is_occupied() == false && j + 1 < 7)||
				   (board[i - 1][j - 1].is_occupied() == false && j - 1 > 0))
				{
					return true;
				}
				else
				{
					continue;
				}
			}
			if((board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K') && board[i][j].get_color() == 'R'
			    && last_mover() == COMPUTER)
			{
				if((board[i + 1][j + 1].is_occupied() == false && j + 1 < 7) ||
				   (board[i + 1][j - 1].is_occupied() == false && j - 1 > 0))
				{
					return true;
				}
				else
				{
					continue;
				}
			}
			if((board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K') && board[i][j].get_color() == 'B'
			    && last_mover() == HUMAN)
			{
				if((board[i + 1][j + 1].is_occupied() == false && j + 1 < 7)||
				   (board[i + 1][j - 1].is_occupied() == false && j - 1 > 0))
				{
					return true;
				}
				else
				{
					continue;
				}
			}
			if((board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K') && board[i][j].get_color() == 'B'
			    && last_mover() == HUMAN)
			{
				if((board[i - 1][j + 1].is_occupied() == false && j + 1 < 7) ||
				   (board[i - 1][j - 1].is_occupied() == false && j - 1 > 0))
				{
					return true;
				}
				else
				{
					continue;
				}
			}
		}
	}
	return false;
}

int checkers::evaluate() const
{
	int points = 0;

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; i < 8; i++)
		{
			if(board[i][j].get_color() == 'B')
			{
				if(board[i][j].get_piece() == 'K')
				{
					points += 2;
				}
				else if(board[i][j].get_piece() == 'S')
				{
					points += 1;
				}
			}
			else if(board[i][j].get_color() == 'R')
			{
				if(board[i][j].get_piece() == 'K')
				{
					points += -2;
				}
			}
			else if(board[i][j].get_piece() == 'S')
			{
				points += -1;
			}
		}
	}
	return points;
}


void checkers::compute_moves(std::queue<std::string>& moves)const
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(board[i][j].get_color() == 'B')
			{
				string tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8;
				char x, y;

				x = 'a' + i;
				y = 49 + j;

				tmp1 += x;
				tmp1 += y;

				tmp2 = tmp3 = tmp4 = tmp5 = tmp6 = tmp7 = tmp8 = tmp1;

				tmp1 += x + 1;	//forward right
				tmp1 += y + 1;

				tmp2 += x + 1;	//forward left 
				tmp2 += y - 1;

				tmp3 += x + 2;	//jump right
				tmp3 += y + 2;

				tmp4 += x + 2;	//jump left
				tmp4 += y - 2;

				tmp5 += x - 1;	//king back right
				tmp5 += y + 1;

				tmp6 += x - 1;	//king back left
				tmp6 += y - 1;

				tmp7 += x - 2;	//king back right jump
				tmp7 += y + 2;

				tmp8 += x - 2;	//king back left jump
				tmp8 += y - 2;

				if(y + 1 == 9 || x + 1 == 'i')
				{
					continue;
				}
				if(is_legal(tmp1) && (board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K'))
				{
					moves.push(tmp1);
				}
				if(is_legal(tmp2) && (board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K'))
				{
					moves.push(tmp2);
				}
				if(is_legal(tmp3) && (board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K'))
				{
					moves.push(tmp3);
				}
				if(is_legal(tmp4) && (board[i][j].get_piece() == 'S' || board[i][j].get_piece() == 'K'))
				{
					moves.push(tmp4);
				}
				if(is_legal(tmp5) && board[i][j].get_piece() == 'K')
				{
					moves.push(tmp5);
				}
				if(is_legal(tmp6) && board[i][j].get_piece() == 'K')
				{
					moves.push(tmp6);
				}
				if(is_legal(tmp7) && board[i][j].get_piece() == 'K')
				{
					moves.push(tmp7);
				}
				if(is_legal(tmp8) && board[i][j].get_piece() == 'K')
				{
					moves.push(tmp8);
				}
			}
		}
	}
}
