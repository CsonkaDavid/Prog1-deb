#include "Simple_window.h"
#include "Graph.h"

int main() {

	Point window_point(100,100);
	int window_x = 600;
	int window_y = 700;
	
	Simple_window win(window_point,window_x,window_y,"Window");
	
	win.wait_for_button();
	
	return 0;
}
