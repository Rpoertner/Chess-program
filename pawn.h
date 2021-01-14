#ifndef PAWN_H_
#define PAWN_H_
#include <iostream>
#include <string>
#include "piece.h"


class pawn : public piece {
private:
	bool is_white;
	char shape;
	int x_coord;
	int y_coord;
	bool moved;

public:
	pawn() : is_white(true), shape('p'), x_coord(0), y_coord(0), moved(false); 
	pawn(bool i, char s, int x, int y) : is_white(i), shape(s), x_coord(x), y_coord(y);
	
	~pawn(){}
	void move(int up, int over, bool attacking){
		if(!moved){
			if(up > 2){ std::cout << "Illegal move!" << std::endl;
			}
			else {
				y_coord = y_coord + up;
			}

		}
		else if(attacking){

			
		}
	} 
	void set_color(void) = 0;

};

#endif