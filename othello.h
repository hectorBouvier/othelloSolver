#include <cstdint>

enum cell {empty, black, white};

class Board{
	protected :
		uint64_t black;
		uint64_t white;
		uint64_t border;
		cell access(uint8_t line, uint8_t column);
	public :
		Board();
	};		
