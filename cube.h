#ifndef CUBE_H
#define CUBE_H
#include <string>
using namespace std;

class White
{
private:
	char color;
	char matrix[3][3];

public:
	White();
	~White(){};
	char* getMatrix();
	void setMatrix(int i, int j, char new_value);
	void printMatrix();
};

class Yellow
{
private:
	char color;
	char matrix[3][3];
public:
	Yellow();
	~Yellow(){};
	char* getMatrix();
	void setMatrix(int i, int j, char new_value);
	void printMatrix();
};


class Blue
{
private:
	char color;
	char matrix[3][3];
public:
	Blue();
	~Blue(){};
	char* getMatrix();
	void setMatrix(int i, int j, char new_value);
	void printMatrix();
};


class Red
{
private:
	char color;
	char matrix[3][3];
public:
	Red();
	~Red(){};
	char* getMatrix();
	void setMatrix(int i, int j, char new_value);
	void printMatrix();
};


class Green
{
private:
	char color;
	char matrix[3][3];
public:
	Green();
	~Green(){};
	char* getMatrix();
	void setMatrix(int i, int j, char new_value);
	void printMatrix();
};


class Orange
{
private:
	char color;
	char matrix[3][3];
public:
	Orange();
	~Orange(){};
	char* getMatrix();
	void setMatrix(int i, int j, char new_value);
	void printMatrix();
};

class Cube: public White, public Yellow, public Blue, public Red, public Green, public Orange
{
private:
	// front = 'b', up = 'y', right = 'r'   // check

	char front='b';
	char up='y';
	char down='w';
	char right='r';
	char left='o';
	char back='g';
	string rotations[49] = {
		"R", "Rt", "R2", "r", "rt", "r2",
		"L", "Lt", "L2", "l", "lt", "l2",
		"U", "Ut", "U2", "u", "ut", "u2",
		"F", "Ft", "F2", "f", "ft", "f2",
		"D", "Dt", "D2", "d", "dt", "d2",
		"B", "Bt", "B2", "b", "bt", "b2",
		"M", "Mt", "M2",
		"x", "xt", "x2",
		"y", "yt", "y2",
		"z", "zt", "z2", "shuffle"
	};

public:
	Cube(){};
	~Cube(){};

	//GETTER

	string* getRotations(){
		return rotations;
	}

	// Shuffle

	void shuffle();

	// Print Cube

	void printMatrix();

	// Single Face rotation algorithms

	void R();      // check
	void Rt();     // check     
	void R2();     // check  
	void L();      // check        
	void Lt();     // check      
	void L2();     // check        
	void U();      // check        
	void Ut();     // check    
	void U2();     // check        
	void F();      // check     
	void Ft();     // check      
	void F2();     // check    
	void D();      // check      
	void Dt();     // check      
	void D2();     // check    
	void B();      // check        
	void Bt();     // check        
	void B2();     // check     
	void M();      // check  
	void Mt();     // check      
	void M2();     // check  


	// Reorientation algorithms
	/*
	x - rotate the entire cube on R (do an R move without holding the two other layers)
	y - rotate the entire cube on U
	z - rotate the entire cube on F
	*/

	void x();      // check
	void xt();     // check
	void x2();     // check
	void y();      // check
	void yt();     // check
	void y2();     // check
	void z();      // check
	void zt();     // check
	void z2();     // check
	

	// Double Face rotation algorithms

	void r();      // check
	void rt();     // check
	void r2();     // check
	void l();      // check
	void lt();     // check
	void l2();     // check
	void u();      // check
	void ut();     // check
	void u2();     // check
	void d();      // check
	void dt();     // check
	void d2();     // check
	void f();      // check
	void ft();     // check
	void f2();     // check
	void b();      // check
	void bt();     // check
	void b2();     // check

};

#endif