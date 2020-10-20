#include "othello.h"

othello::Board(){
	black=0x000010080000;
	white=0x000008100000;
	border=0x003C24243C00;
	}

cell othello::access(uint8_t line, uint8_t column){
	uint8_t position=line*8+column;
	bool bl=
	bool wh=
