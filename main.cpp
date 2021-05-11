#include <iostream>
#include "cube.h"
using namespace std;



int main(){
	bool run = true;
	Cube cubeobj;
	while(run){
		cubeobj.printMatrix();

		string input;
		cout << "Insert your move:\n";
		
		getline(cin,input);

		if (input.length() == 0)
		{
			run = false;
			break;
		}

		bool isvalid = false;

		string* rotations = cubeobj.getRotations();

		for (int i=0; i<49; i++)
		{
			if (*(rotations+i) == input)
			{
				isvalid = true;
			}
		}

		if (!isvalid)
		{
			run = false;
			cout << "There is no rotation like that!\n";
		}
		else{
			if (input == "R")       cubeobj.R();
			else if (input == "Rt") cubeobj.Rt();
			else if (input == "R2") cubeobj.R2();
			else if (input == "r")  cubeobj.r();
			else if (input == "rt") cubeobj.rt();
			else if (input == "r2") cubeobj.r2();
			else if (input == "L")  cubeobj.L();
			else if (input == "Lt") cubeobj.Lt();
			else if (input == "L2") cubeobj.L2();
			else if (input == "l")  cubeobj.l();
			else if (input == "lt") cubeobj.lt();
			else if (input == "l2") cubeobj.l2();
			else if (input == "U")  cubeobj.U();
			else if (input == "Ut") cubeobj.Ut();
			else if (input == "U2") cubeobj.U2();
			else if (input == "u")  cubeobj.u();
			else if (input == "ut") cubeobj.ut();
			else if (input == "u2") cubeobj.u2();
			else if (input == "F")  cubeobj.F();
			else if (input == "Ft") cubeobj.Ft();
			else if (input == "F2") cubeobj.F2();
			else if (input == "f")  cubeobj.f();
			else if (input == "ft") cubeobj.ft();
			else if (input == "f2") cubeobj.f2();
			else if (input == "D")  cubeobj.D();
			else if (input == "Dt") cubeobj.Dt();
			else if (input == "D2") cubeobj.D2();
			else if (input == "d")  cubeobj.d();
			else if (input == "dt") cubeobj.dt();
			else if (input == "d2") cubeobj.d2();
			else if (input == "B")  cubeobj.B();
			else if (input == "Bt") cubeobj.Bt();
			else if (input == "B2") cubeobj.B2();
			else if (input == "b")  cubeobj.b();
			else if (input == "bt") cubeobj.bt();
			else if (input == "b2") cubeobj.b2();
			else if (input == "M")  cubeobj.M();
			else if (input == "Mt") cubeobj.Mt();
			else if (input == "M2") cubeobj.M2();
			else if (input == "x")  cubeobj.x();
			else if (input == "xt") cubeobj.xt();
			else if (input == "x2") cubeobj.x2();
			else if (input == "y")  cubeobj.y();
			else if (input == "yt") cubeobj.yt();
			else if (input == "y2") cubeobj.y2();
			else if (input == "z")  cubeobj.z();
			else if (input == "zt") cubeobj.zt();
			else if (input == "z2") cubeobj.z2();
			else if (input == "shuffle") cubeobj.shuffle();
		}
	}
	return 0;
}