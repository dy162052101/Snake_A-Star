#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string>
using namespace std;
class Snake
{
private:
	struct Node
	{
		int x;
		int y;
		Node *next;
		Node(int x1,int y1,Node *p=NULL)
		{
			x=x1;
			y=y1;
			next=p;
		}
		Node(Node *p=NULL)
		{
			next=p;
		}
	};
	struct Open
	{
		int G;
		int H;
		char D;
		int x;
		int y;
	};
public:
	Node *head;
	Node *tail;
	int length;
	Open open[4];
	int food_x;
	int food_y;
	int y_run;
	int x_run;
	int tail_x;
	int tail_y;
	int t;
	int r,g,b;
	int score;
	bool isx;
	bool isy;
	bool iseat;
	bool isrepeat;
	int repeat_x;
	int repeat_y;
	char ch;
	char p_c;
	int level;
	bool ispause;
	char AI_road;
	int min;
	HWND hWnd;

	void UI();
	bool repeat();
	void Init(int width,int height);
	void _map(int width,int height,int w);
	void snake_init(int x,int y,int w);
	void snake_move();
	bool snake_death();
	void snake_eat();
	void food();
	void keydown();
	void AI();

};