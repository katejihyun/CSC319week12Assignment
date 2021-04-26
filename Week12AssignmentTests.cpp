/* GitHub requirement: you must commit/push 
                       (private repository-free with the student pack)
                       your project to your GitHub Account
   insert your name: Jihyun
   insert your github user: katejihyun
   insert your project name in github: 
   invite as a collaborator: mmail002 

   once completed, you must upload it to GitHub

	you may have to modify the .h, .cpp and Week12AssignmentTest.cpp for this assignment
*/

#include <cassert>
#include <algorithm>  //sort

#include "Week12Assignment.h"


using std::string;
using std::istringstream;
using std::cout;
using std::endl;
using std::max;

void myFunction1() {
	Square s(11, 22, "small square", 4);
	Rectangle r(11, 22, "small rectangle", 2, 3);

	vector<Shape *>  shapes;

	int sumSurface = 0;

	//you must insert both s and r in shapes
	//then do the sum of their surface using
	//an iterator to access the 'Shape' in shapes
	//use sumSurface as an accumulator

	//insert your code here

	shapes.push_back(& s);
	shapes.push_back(& r);

	for (std::vector<Shape *>::iterator it = shapes.begin(); it != shapes.end(); ++it) {        
       sumSurface += (**it).getSurface();       
    }
	std::cout << "sumSurface: " << sumSurface <<std::endl;

	//check if sumSurface is correct
	assert( sumSurface == 22);
	
}

void myFunction2() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 4, 5);

	vector<Shape *>  shapes;

	//you must insert both s and r in shapes
	//then sort the collection in descending order of surface
	//using the sort <algorithm>

	//insert your code here
	shapes.push_back(& s);
	shapes.push_back(& r);

	
	std::sort(shapes.begin(), shapes.end());
	

	//check if the collection is sorting correctly
	Shape * sresult = shapes.at( 0 );
	assert( sresult->getSurface() == 20);
}

void myFunction3() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 4, 5);

	vector<Shape *>  shapes;

	//you must insert both s and r in shapes
	//then find the Shape with the biggest surface
	//you must used a function in <algorithm>
	//store the result in biggest
	Shape * biggest = nullptr;

	//insert your code here

	shapes.push_back(& s);
	shapes.push_back(& r);
	
	int max = 0;
	for (std::vector<Shape *>::iterator it = shapes.begin(); it != shapes.end(); ++it) {        
       if  ( max <  (**it).getSurface()) {
		   max = (**it).getSurface();
	   }
	}

	/*
	vector<int>::const_iterator it;
	it = max_element(shapes.begin(), shapes.end());
	*/
	

	//check if the result is correct
	assert( biggest->getSurface() == 20);
}

const string SMALL_RECTANGLE = "small rectangle";

void myFunction4() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, SMALL_RECTANGLE, 2, 3);

	map<string, Shape *> shapes;

	//you must insert both s and r in shapes
	//then find the Shape with the name SMALL_RECTANGLE
	//you must used a function in map, to find it
	Shape * smallRectangle = nullptr;

	//insert your code here

	map<string, Shape* >::iterator it;
	for(it = shapes.begin(); it!=shapes.end(); ++it){
		cout<< it -> first << " " << it-> second << '\n';
	}

	//check if the result is correct
	assert( smallRectangle->getName().compare(SMALL_RECTANGLE) == 0);
}

void myFunction5() {
	Square s(11, 22, "small square", 3);
	Rectangle r(11, 22, SMALL_RECTANGLE, 4, 5);

	map<string, Shape *> shapes;

	int sumSurface = 0;

	//you must insert both s and r in shapes
	//then do the sum of their surface using
	//an iterator to access the 'Shape' in shapes
	//use sumSurface as an accumulator

	//insert your code here
	map<string, Shape* >::iterator it;
	for(it = shapes.begin(); it!=shapes.end(); ++it){
		cout<< it -> first << " " << it-> second << '\n';
	}

	

	//check if sumSurface is correct
	assert( sumSurface == 29);
}

int main() 
{

	myFunction1();

	myFunction2();

	myFunction3();

	myFunction4();

	myFunction5();
}	

