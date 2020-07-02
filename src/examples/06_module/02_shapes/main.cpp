//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<Shape> shape = make_unique<Shape>();
	unique_ptr<Shape> line = make_unique<Line>();
	shape->draw();
	line->draw();

	return 0;
}