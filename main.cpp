#include"Snake.h"

int main()
{
	Snake s;
	s.Init(800,600);
	s._map(600,600,20);
	s.snake_init(110,210,20);
	s.snake_move();
	return 0;
}