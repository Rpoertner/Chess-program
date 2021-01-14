#ifndef PIECE_H_
#define PIECE_H_

class piece {
private:
	bool is_white;
	char shape;
	int x_coord;
	int y_coord;

public:
	virtual piece(void){}
	virtual ~piece(void){}
	virtual void move(void) = 0;
	virtual void set_color(void) = 0;

};

#endif