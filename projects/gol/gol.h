/*
	Game of life

	DO NOT EDIT THIS FILE!!!
*/

#ifndef _GOL_H_
#define _GOL_H_

#define N 10
#define M 10
#define DEAD  '0'
#define ALIVE '1'
#define INITIAL_FILE	"initial.txt"


char* create_board();
void destroy_board(char *b);
void read_initial(char *b);
int print_board(char *b);



#endif /* _GOL_H_ */