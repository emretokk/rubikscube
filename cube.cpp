#include <bits/stdc++.h>
#include "cube.h"

using namespace std;

// BASE CLASSES' CONSTRUCTORS
White::White(){
	color = 'w';
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			matrix[i][j] = color;
		}
	}
};

Yellow::Yellow(){
	color = 'y';
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			matrix[i][j] = color;
		}
	}
};

Blue::Blue(){
	color = 'b';
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			matrix[i][j] = color;
		}
	}
};

Red::Red(){
	color = 'r';
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			matrix[i][j] = color;
		}
	}
};

Green::Green(){
	color = 'g';
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			matrix[i][j] = color;
		}
	}
};

Orange::Orange(){
	color = 'o';
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			matrix[i][j] = color;
		}
	}
};

// PRINT SINGLE FACE
void White::printMatrix(){
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}
void Yellow::printMatrix(){
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}
void Blue::printMatrix(){
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

void Red::printMatrix(){
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

void Green::printMatrix(){
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

void Orange::printMatrix(){
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

// GETTER METHODS
char* White::getMatrix(){
	return &(matrix[0][0]);
}
char* Yellow::getMatrix(){
	return &(matrix[0][0]);
}
char* Blue::getMatrix(){
	return &(matrix[0][0]);
}
char* Red::getMatrix(){
	return &(matrix[0][0]);
}
char* Green::getMatrix(){
	return &(matrix[0][0]);
}
char* Orange::getMatrix(){
	return &(matrix[0][0]);
}

// SETTER METHODS
void White::setMatrix(int i, int j, char new_value){
	matrix[i][j] = new_value;
}
void Yellow::setMatrix(int i, int j, char new_value){
	matrix[i][j] = new_value;
}
void Blue::setMatrix(int i, int j, char new_value){
	matrix[i][j] = new_value;
}
void Red::setMatrix(int i, int j, char new_value){
	matrix[i][j] = new_value;
}
void Green::setMatrix(int i, int j, char new_value){
	matrix[i][j] = new_value;
}
void Orange::setMatrix(int i, int j, char new_value){
	matrix[i][j] = new_value;
}


// PRINT CUBE
void Cube::printMatrix(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	cout << "Front Face : " << this->front << "       Top Face : " << this->up << "       Right Face : " << this->right << "\n";
	cout << "Back Face : " << this->back << "       Down Face : " << this->down << "       Left Face : " << this->left << "\n";
	cout << "\n";

	cout << "\t" << *(yellowmatrix+0) << " " << *(yellowmatrix+1) << " " << *(yellowmatrix+2);
	cout << "\n";
	cout << "\t" << *(yellowmatrix+3) << " " << *(yellowmatrix+4) << " " << *(yellowmatrix+5);
	cout << "\n";
	cout << "\t" << *(yellowmatrix+6) << " " << *(yellowmatrix+7) << " " << *(yellowmatrix+8);
	cout << "\n\n";

	cout << *(orangematrix+0) << " " << *(orangematrix+1) << " " << *(orangematrix+2) << "\t";
	cout << *(bluematrix+0) << " " << *(bluematrix+1) << " " << *(bluematrix+2) << "\t";
	cout << *(redmatrix+0) << " " << *(redmatrix+1) << " " << *(redmatrix+2) << "\t";
	cout << *(greenmatrix+0) << " " << *(greenmatrix+1) << " " << *(greenmatrix+2);
	cout << "\n";
	cout << *(orangematrix+3) << " " << *(orangematrix+4) << " " << *(orangematrix+5) << "\t";
	cout << *(bluematrix+3) << " " << *(bluematrix+4) << " " << *(bluematrix+5) << "\t";
	cout << *(redmatrix+3) << " " << *(redmatrix+4) << " " << *(redmatrix+5) << "\t";
	cout << *(greenmatrix+3) << " " << *(greenmatrix+4) << " " << *(greenmatrix+5);
	cout << "\n";
	cout << *(orangematrix+6) << " " << *(orangematrix+7) << " " << *(orangematrix+8) << "\t";
	cout << *(bluematrix+6) << " " << *(bluematrix+7) << " " << *(bluematrix+8) << "\t";
	cout << *(redmatrix+6) << " " << *(redmatrix+7) << " " << *(redmatrix+8) << "\t";
	cout << *(greenmatrix+6) << " " << *(greenmatrix+7) << " " << *(greenmatrix+8);
	cout << "\n\n";

	cout << "\t" << *(whitematrix+0) << " " << *(whitematrix+1) << " " << *(whitematrix+2);
	cout << "\n";
	cout << "\t" << *(whitematrix+3) << " " << *(whitematrix+4) << " " << *(whitematrix+5);
	cout << "\n";
	cout << "\t" << *(whitematrix+6) << " " << *(whitematrix+7) << " " << *(whitematrix+8);
	cout << "\n\n";
}

void Cube::R(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->right == 'r')
	{
		// Right Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_6;
		*(redmatrix+1) = old_3;
		*(redmatrix+2) = old_0;
		*(redmatrix+3) = old_7;
		*(redmatrix+5) = old_1;
		*(redmatrix+6) = old_8;
		*(redmatrix+7) = old_5;
		*(redmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=2, k=6, l=2; i<9 && j<9 && k>=0 && l<9;i+=3, j+=3, k-=3, l+=3)
		{
			char old_blue_value = *(bluematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(bluematrix+i) = old_white_value;
			*(yellowmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_yellow_value;
			*(whitematrix+l) = old_green_value;
		}
	}
	else if (this->right == 'g')
	{
		// Right Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_6;
		*(greenmatrix+1) = old_3;
		*(greenmatrix+2) = old_0;
		*(greenmatrix+3) = old_7;
		*(greenmatrix+5) = old_1;
		*(greenmatrix+6) = old_8;
		*(greenmatrix+7) = old_5;
		*(greenmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=0, k=6, l=8; i<9 && j<3 && k>=0 && l>5;i+=3, j++, k-=3, l--)
		{
			char old_red_value = *(redmatrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_orange_value = *(orangematrix+k);
			char old_white_value = *(whitematrix+l);

			*(redmatrix+i) = old_white_value;
			*(yellowmatrix+j) = old_red_value;
			*(orangematrix+k) = old_yellow_value;
			*(whitematrix+l) = old_orange_value;
		}
	}
	else if (this->right == 'o')
	{
		// Right Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_6;
		*(orangematrix+1) = old_3;
		*(orangematrix+2) = old_0;
		*(orangematrix+3) = old_7;
		*(orangematrix+5) = old_1;
		*(orangematrix+6) = old_8;
		*(orangematrix+7) = old_5;
		*(orangematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=6, k=6, l=6; i<9 && j>=0 && k>=0 && l>=0;i+=3, j-=3, k-=3, l-=3)
		{
			char old_green_value = *(greenmatrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_blue_value = *(bluematrix+k);
			char old_white_value = *(whitematrix+l);

			*(greenmatrix+i) = old_white_value;
			*(yellowmatrix+j) = old_green_value;
			*(bluematrix+k) = old_yellow_value;
			*(whitematrix+l) = old_blue_value;
		}
	}
	else if (this->right == 'b')
	{
		// Right Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_6;
		*(bluematrix+1) = old_3;
		*(bluematrix+2) = old_0;
		*(bluematrix+3) = old_7;
		*(bluematrix+5) = old_1;
		*(bluematrix+6) = old_8;
		*(bluematrix+7) = old_5;
		*(bluematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=8, k=6, l=0; i<9 && j>=6 && k>=0 && l<3;i+=3, j--, k-=3, l++)
		{
			char old_orange_value = *(orangematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_red_value = *(redmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(orangematrix+i) = old_white_value;
			*(yellowmatrix+j) = old_orange_value;
			*(redmatrix+k) = old_yellow_value;
			*(whitematrix+l) = old_red_value;
		}
	}
	else if (this->right == 'y')
	{
		// Right Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0; i<3 && j<3 && k<3 && l<3;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_blue_value;
		}
	}
	else if (this->right == 'w')
	{
		// Right Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		
		*(whitematrix+0) = old_6;
		*(whitematrix+1) = old_3;
		*(whitematrix+2) = old_0;
		*(whitematrix+3) = old_7;
		*(whitematrix+5) = old_1;
		*(whitematrix+6) = old_8;
		*(whitematrix+7) = old_5;
		*(whitematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6; i<9 && j<9 && k<9 && l<9;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_orange_value;
			*(orangematrix+j) = old_green_value;
			*(greenmatrix+k) = old_red_value;
			*(redmatrix+l) = old_blue_value;
		}
	}
}

void Cube::Rt(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->right == 'r')
	{
		// Right Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_2;
		*(redmatrix+1) = old_5;
		*(redmatrix+2) = old_8;
		*(redmatrix+3) = old_1;
		*(redmatrix+5) = old_7;
		*(redmatrix+6) = old_0;
		*(redmatrix+7) = old_3;
		*(redmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=2, k=6, l=2; i<9 && j<9 && k>=0 && l<9;i+=3, j+=3, k-=3, l+=3)
		{
			char old_blue_value = *(bluematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(bluematrix+i) = old_yellow_value;
			*(yellowmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_white_value;
			*(whitematrix+l) = old_blue_value;
		}
	}
	if (this->right == 'g')
	{
		// Right Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_2;
		*(greenmatrix+1) = old_5;
		*(greenmatrix+2) = old_8;
		*(greenmatrix+3) = old_1;
		*(greenmatrix+5) = old_7;
		*(greenmatrix+6) = old_0;
		*(greenmatrix+7) = old_3;
		*(greenmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=0, k=6, l=8; i<9 && j<3 && k>=0 && l>5;i+=3, j++, k-=3, l--)
		{
			char old_red_value = *(redmatrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_orange_value = *(orangematrix+k);
			char old_white_value = *(whitematrix+l);

			*(redmatrix+i) = old_yellow_value;
			*(yellowmatrix+j) = old_orange_value;
			*(orangematrix+k) = old_white_value;
			*(whitematrix+l) = old_red_value;
		}
	}
	else if (this->right == 'o')
	{
		// Right Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_2;
		*(orangematrix+1) = old_5;
		*(orangematrix+2) = old_8;
		*(orangematrix+3) = old_1;
		*(orangematrix+5) = old_7;
		*(orangematrix+6) = old_0;
		*(orangematrix+7) = old_3;
		*(orangematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=6, k=6, l=6; i<9 && j>=0 && k>=0 && l>=0;i+=3, j-=3, k-=3, l-=3)
		{
			char old_green_value = *(greenmatrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_blue_value = *(bluematrix+k);
			char old_white_value = *(whitematrix+l);

			*(greenmatrix+i) = old_yellow_value;
			*(yellowmatrix+j) = old_blue_value;
			*(bluematrix+k) = old_white_value;
			*(whitematrix+l) = old_green_value;
		}
	}
	else if (this->right == 'b')
	{
		// Right Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_2;
		*(bluematrix+1) = old_5;
		*(bluematrix+2) = old_8;
		*(bluematrix+3) = old_1;
		*(bluematrix+5) = old_7;
		*(bluematrix+6) = old_0;
		*(bluematrix+7) = old_3;
		*(bluematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=8, k=6, l=0; i<9 && j>=6 && k>=0 && l<3;i+=3, j--, k-=3, l++)
		{
			char old_orange_value = *(orangematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_red_value = *(redmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(orangematrix+i) = old_yellow_value;
			*(yellowmatrix+j) = old_red_value;
			*(redmatrix+k) = old_white_value;
			*(whitematrix+l) = old_orange_value;
		}
	}
	else if (this->right == 'y')
	{
		// Right Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0; i<3 && j<3 && k<3 && l<3;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_red_value;
			*(orangematrix+l) = old_green_value;
		}
	}
	else if (this->right == 'w')
	{
		// Right Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		
		*(whitematrix+0) = old_2;
		*(whitematrix+1) = old_5;
		*(whitematrix+2) = old_8;
		*(whitematrix+3) = old_1;
		*(whitematrix+5) = old_7;
		*(whitematrix+6) = old_0;
		*(whitematrix+7) = old_3;
		*(whitematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6; i<9 && j<9 && k<9 && l<9;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_red_value;
			*(orangematrix+j) = old_blue_value;
			*(greenmatrix+k) = old_orange_value;
			*(redmatrix+l) = old_green_value;
		}
	}
}

void Cube::R2(){
	this->R();
	this->R();
}

void Cube::L(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->left == 'o')
	{
		// Left Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		

		*(orangematrix+0) = old_6;
		*(orangematrix+1) = old_3;
		*(orangematrix+2) = old_0;
		*(orangematrix+3) = old_7;
		*(orangematrix+5) = old_1;
		*(orangematrix+6) = old_8;
		*(orangematrix+7) = old_5;
		*(orangematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=8;i<7 && j<7 && k<7 && l>1;i+=3, j+=3, k+=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_blue_value = *(bluematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_green_value = *(greenmatrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(bluematrix+j) = old_yellow_value;
			*(whitematrix+k) = old_blue_value;
			*(greenmatrix+l) = old_white_value;
		}
	}
	if (this->left == 'b')
	{
		// Left Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		

		*(bluematrix+0) = old_6;
		*(bluematrix+1) = old_3;
		*(bluematrix+2) = old_0;
		*(bluematrix+3) = old_7;
		*(bluematrix+5) = old_1;
		*(bluematrix+6) = old_8;
		*(bluematrix+7) = old_5;
		*(bluematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8;i<9 && j<7 && k>=0 && l>1;i++, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(redmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_red_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->left == 'r')
	{
		// Left Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		

		*(redmatrix+0) = old_6;
		*(redmatrix+1) = old_3;
		*(redmatrix+2) = old_0;
		*(redmatrix+3) = old_7;
		*(redmatrix+5) = old_1;
		*(redmatrix+6) = old_8;
		*(redmatrix+7) = old_5;
		*(redmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=2, k=2, l=6;i<9 && j<9 && k<9 && l>=0;i+=3, j+=3, k+=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_blue_value = *(bluematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_green_value = *(greenmatrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(bluematrix+j) = old_white_value;
			*(whitematrix+k) = old_green_value;
			*(greenmatrix+l) = old_yellow_value;
		}
	}
	if (this->left == 'g')
	{
		// Left Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		

		*(greenmatrix+0) = old_6;
		*(greenmatrix+1) = old_3;
		*(greenmatrix+2) = old_0;
		*(greenmatrix+3) = old_7;
		*(greenmatrix+5) = old_1;
		*(greenmatrix+6) = old_8;
		*(greenmatrix+7) = old_5;
		*(greenmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=0, k=6, l=8;i>=0 && j<7 && k<9 && l>=2;i--, j+=3, k++, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_red_value = *(redmatrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(orangematrix+j) = old_yellow_value;
			*(whitematrix+k) = old_orange_value;
			*(redmatrix+l) = old_white_value;
		}
	}
	if (this->left == 'y')
	{
		// Left Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		

		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0;i<3 && j<3 && k<3 && l<3;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_blue_value;
		}
	}
	if (this->left == 'w')
	{
		// Left Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		

		*(whitematrix+0) = old_6;
		*(whitematrix+1) = old_3;
		*(whitematrix+2) = old_0;
		*(whitematrix+3) = old_7;
		*(whitematrix+5) = old_1;
		*(whitematrix+6) = old_8;
		*(whitematrix+7) = old_5;
		*(whitematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6;i<9 && j<9 && k<9 && l<9;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_red_value;
			*(orangematrix+l) = old_green_value;
		}
	}
}

void Cube::Lt(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->left == 'o')
	{
		// Left Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		

		*(orangematrix+0) = old_2;
		*(orangematrix+1) = old_5;
		*(orangematrix+2) = old_8;
		*(orangematrix+3) = old_1;
		*(orangematrix+5) = old_7;
		*(orangematrix+6) = old_0;
		*(orangematrix+7) = old_3;
		*(orangematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=8;i<7 && j<7 && k<7 && l>1;i+=3, j+=3, k+=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_blue_value = *(bluematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_green_value = *(greenmatrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(bluematrix+j) = old_white_value;
			*(whitematrix+k) = old_green_value;
			*(greenmatrix+l) = old_yellow_value;
		}
	}
	if (this->left == 'b')
	{
		// Left Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		

		*(bluematrix+0) = old_2;
		*(bluematrix+1) = old_5;
		*(bluematrix+2) = old_8;
		*(bluematrix+3) = old_1;
		*(bluematrix+5) = old_7;
		*(bluematrix+6) = old_0;
		*(bluematrix+7) = old_3;
		*(bluematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8;i<9 && j<7 && k>=0 && l>1;i++, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(redmatrix+j) = old_white_value;
			*(whitematrix+k) = old_orange_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->left == 'r')
	{
		// Left Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		

		*(redmatrix+0) = old_2;
		*(redmatrix+1) = old_5;
		*(redmatrix+2) = old_8;
		*(redmatrix+3) = old_1;
		*(redmatrix+5) = old_7;
		*(redmatrix+6) = old_0;
		*(redmatrix+7) = old_3;
		*(redmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(greenmatrix+j) = old_white_value;
			*(whitematrix+k) = old_blue_value;
			*(bluematrix+l) = old_yellow_value;
		}
	}
	if (this->left == 'g')
	{
		// Left Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		

		*(greenmatrix+0) = old_2;
		*(greenmatrix+1) = old_5;
		*(greenmatrix+2) = old_8;
		*(greenmatrix+3) = old_1;
		*(greenmatrix+5) = old_7;
		*(greenmatrix+6) = old_0;
		*(greenmatrix+7) = old_3;
		*(greenmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=0, k=6, l=8;i>=0 && j<7 && k<9 && l>=2;i--, j+=3, k++, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_red_value = *(redmatrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(orangematrix+j) = old_white_value;
			*(whitematrix+k) = old_red_value;
			*(redmatrix+l) = old_yellow_value;
		}
	}
	if (this->left == 'y')
	{
		// Left Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		

		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0;i<3 && j<3 && k<3 && l<3;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_red_value;
			*(orangematrix+l) = old_green_value;
		}
	}
	if (this->left == 'w')
	{
		// Left Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		

		*(whitematrix+0) = old_2;
		*(whitematrix+1) = old_5;
		*(whitematrix+2) = old_8;
		*(whitematrix+3) = old_1;
		*(whitematrix+5) = old_7;
		*(whitematrix+6) = old_0;
		*(whitematrix+7) = old_3;
		*(whitematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6;i<9 && j<9 && k<9 && l<9;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_blue_value;
		}
	}
}

void Cube::L2(){
	this->Lt();
	this->Lt();
}

void Cube::U(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->up == 'y')
	{
		// Top Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);

		
		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;


		// Other Faces' rotation
		for (int i=0;i<3;i+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+i) = old_green_value;
			*(greenmatrix+i) = old_orange_value;
			*(orangematrix+i) = old_blue_value;
		}
	}
	if (this->up == 'w')
	{
		// Top Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);

		
		*(whitematrix+0) = old_6;
		*(whitematrix+1) = old_3;
		*(whitematrix+2) = old_0;
		*(whitematrix+3) = old_7;
		*(whitematrix+5) = old_1;
		*(whitematrix+6) = old_8;
		*(whitematrix+7) = old_5;
		*(whitematrix+8) = old_2;


		// Other Faces' rotation
		for (int i=6;i<9;i+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+i) = old_blue_value;
			*(greenmatrix+i) = old_red_value;
			*(orangematrix+i) = old_green_value;
		}
	}
	if (this->up == 'b')
	{
		// Top Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);

		
		*(bluematrix+0) = old_6;
		*(bluematrix+1) = old_3;
		*(bluematrix+2) = old_0;
		*(bluematrix+3) = old_7;
		*(bluematrix+5) = old_1;
		*(bluematrix+6) = old_8;
		*(bluematrix+7) = old_5;
		*(bluematrix+8) = old_2;


		// Other Faces' rotation
		for (int i=0, j=6, k=8 ,l=2;i<3 && j>=0 && k>=6 && l<9;i+=1, j-=3, k--, l+=3)
		{
			char old_white_value = *(whitematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_yellow_value = *(yellowmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(whitematrix+i) = old_red_value;
			*(redmatrix+j) = old_yellow_value;
			*(yellowmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->up == 'g')
	{
		// Top Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);

		
		*(greenmatrix+0) = old_6;
		*(greenmatrix+1) = old_3;
		*(greenmatrix+2) = old_0;
		*(greenmatrix+3) = old_7;
		*(greenmatrix+5) = old_1;
		*(greenmatrix+6) = old_8;
		*(greenmatrix+7) = old_5;
		*(greenmatrix+8) = old_2;


		// Other Faces' rotation
		for (int i=8, j=2, k=0 ,l=6;i>=6 && j<9 && k<3 && l>=0;i--, j+=3, k++, l-=3)
		{
			char old_white_value = *(whitematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_yellow_value = *(yellowmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(whitematrix+i) = old_orange_value;
			*(redmatrix+j) = old_white_value;
			*(yellowmatrix+k) = old_red_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->up == 'r')
	{
		// Top Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);

		
		*(redmatrix+0) = old_6;
		*(redmatrix+1) = old_3;
		*(redmatrix+2) = old_0;
		*(redmatrix+3) = old_7;
		*(redmatrix+5) = old_1;
		*(redmatrix+6) = old_8;
		*(redmatrix+7) = old_5;
		*(redmatrix+8) = old_2;


		// Other Faces' rotation
		for (int i=2, j=2, k=6 ,l=2;i<9 && j<9 && k>=0 && l<9;i+=3, j+=3, k-=3, l+=3)
		{
			char old_blue_value = *(bluematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(bluematrix+i) = old_white_value;
			*(yellowmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_yellow_value;
			*(whitematrix+l) = old_green_value;
		}
	}
	if (this->up == 'o')
	{
		// Top Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);

		
		*(orangematrix+0) = old_6;
		*(orangematrix+1) = old_3;
		*(orangematrix+2) = old_0;
		*(orangematrix+3) = old_7;
		*(orangematrix+5) = old_1;
		*(orangematrix+6) = old_8;
		*(orangematrix+7) = old_5;
		*(orangematrix+8) = old_2;


		// Other Faces' rotation
		for (int i=0, j=0, k=8 ,l=0;i<7 && j<7 && k>=2 && l<7;i+=3, j+=3, k-=3, l+=3)
		{
			char old_blue_value = *(bluematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(bluematrix+i) = old_yellow_value;
			*(yellowmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_white_value;
			*(whitematrix+l) = old_blue_value;
		}
	}
}

void Cube::Ut(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->up == 'y')
	{
		// Top Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0;i<3;i+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+i) = old_blue_value;
			*(greenmatrix+i) = old_red_value;
			*(orangematrix+i) = old_green_value;
		}
	}
	if (this->up == 'w')
	{
		// Top Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);

		
		*(whitematrix+0) = old_2;
		*(whitematrix+1) = old_5;
		*(whitematrix+2) = old_8;
		*(whitematrix+3) = old_1;
		*(whitematrix+5) = old_7;
		*(whitematrix+6) = old_0;
		*(whitematrix+7) = old_3;
		*(whitematrix+8) = old_6;


		// Other Faces' rotation
		for (int i=6;i<9;i+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+i) = old_green_value;
			*(greenmatrix+i) = old_orange_value;
			*(orangematrix+i) = old_blue_value;
		}
	}
	if (this->up == 'b')
	{
		// Top Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);

		
		*(bluematrix+0) = old_2;
		*(bluematrix+1) = old_5;
		*(bluematrix+2) = old_8;
		*(bluematrix+3) = old_1;
		*(bluematrix+5) = old_7;
		*(bluematrix+6) = old_0;
		*(bluematrix+7) = old_3;
		*(bluematrix+8) = old_6;


		// Other Faces' rotation
		for (int i=0, j=6, k=8 ,l=2;i<3 && j>=0 && k>=6 && l<9;i+=1, j-=3, k--, l+=3)
		{
			char old_white_value = *(whitematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_yellow_value = *(yellowmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(whitematrix+i) = old_orange_value;
			*(redmatrix+j) = old_white_value;
			*(yellowmatrix+k) = old_red_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->up == 'g')
	{
		// Top Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);

		
		*(greenmatrix+0) = old_2;
		*(greenmatrix+1) = old_5;
		*(greenmatrix+2) = old_8;
		*(greenmatrix+3) = old_1;
		*(greenmatrix+5) = old_7;
		*(greenmatrix+6) = old_0;
		*(greenmatrix+7) = old_3;
		*(greenmatrix+8) = old_6;


		// Other Faces' rotation
		for (int i=8, j=2, k=0 ,l=6;i>=6 && j<9 && k<3 && l>=0;i--, j+=3, k++, l-=3)
		{
			char old_white_value = *(whitematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_yellow_value = *(yellowmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(whitematrix+i) = old_red_value;
			*(redmatrix+j) = old_yellow_value;
			*(yellowmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->up == 'r')
	{
		// Top Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);

		
		*(redmatrix+0) = old_2;
		*(redmatrix+1) = old_5;
		*(redmatrix+2) = old_8;
		*(redmatrix+3) = old_1;
		*(redmatrix+5) = old_7;
		*(redmatrix+6) = old_0;
		*(redmatrix+7) = old_3;
		*(redmatrix+8) = old_6;


		// Other Faces' rotation
		for (int i=2, j=2, k=6 ,l=2;i<9 && j<9 && k>=0 && l<9;i+=3, j+=3, k-=3, l+=3)
		{
			char old_blue_value = *(bluematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(bluematrix+i) = old_yellow_value;
			*(yellowmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_white_value;
			*(whitematrix+l) = old_blue_value;
		}
	}
	if (this->up == 'o')
	{
		// Top Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);

		
		*(orangematrix+0) = old_2;
		*(orangematrix+1) = old_5;
		*(orangematrix+2) = old_8;
		*(orangematrix+3) = old_1;
		*(orangematrix+5) = old_7;
		*(orangematrix+6) = old_0;
		*(orangematrix+7) = old_3;
		*(orangematrix+8) = old_6;


		// Other Faces' rotation
		for (int i=0, j=0, k=8 ,l=0;i<7 && j<7 && k>=2 && l<7;i+=3, j+=3, k-=3, l+=3)
		{
			char old_blue_value = *(bluematrix+i);
			char old_yellow_value = *(yellowmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_white_value = *(whitematrix+l);

			*(bluematrix+i) = old_white_value;
			*(yellowmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_yellow_value;
			*(whitematrix+l) = old_green_value;
		}
	}
}

void Cube::U2(){
	this->U();
	this->U();
}

void Cube::F(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();
	if (this->front == 'b')
	{
		// Front Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_6;
		*(bluematrix+1) = old_3;
		*(bluematrix+2) = old_0;
		*(bluematrix+3) = old_7;
		*(bluematrix+5) = old_1;
		*(bluematrix+6) = old_8;
		*(bluematrix+7) = old_5;
		*(bluematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8 ;i<9 && j<7 && k>=0 && l>1;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(redmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_red_value;
			*(orangematrix+l) = old_white_value;
			*(yellowmatrix+i) = old_orange_value;
		}
	}
	if (this->front == 'r')
	{
		// Front Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_6;
		*(redmatrix+1) = old_3;
		*(redmatrix+2) = old_0;
		*(redmatrix+3) = old_7;
		*(redmatrix+5) = old_1;
		*(redmatrix+6) = old_8;
		*(redmatrix+7) = old_5;
		*(redmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8 ;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(greenmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_green_value;
			*(bluematrix+l) = old_white_value;
		}
	}
	if (this->front == 'g')
	{
		// Front Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_6;
		*(greenmatrix+1) = old_3;
		*(greenmatrix+2) = old_0;
		*(greenmatrix+3) = old_7;
		*(greenmatrix+5) = old_1;
		*(greenmatrix+6) = old_8;
		*(greenmatrix+7) = old_5;
		*(greenmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=0, k=6, l=8 ;i>=0 && j<7 && k<9 && l>=2;i--, j+=3, k++, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_red_value = *(redmatrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(orangematrix+j) = old_yellow_value;
			*(whitematrix+k) = old_orange_value;
			*(redmatrix+l) = old_white_value;
		}
	}
	if (this->front == 'o')
	{
		// Front Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_6;
		*(orangematrix+1) = old_3;
		*(orangematrix+2) = old_0;
		*(orangematrix+3) = old_7;
		*(orangematrix+5) = old_1;
		*(orangematrix+6) = old_8;
		*(orangematrix+7) = old_5;
		*(orangematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=8, k=0, l=0 ;i<7 && j>=2 && k<7 && l<7;i+=3, j-=3, k+=3, l+=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(greenmatrix+j) = old_white_value;
			*(whitematrix+k) = old_blue_value;
			*(bluematrix+l) = old_yellow_value;
		}
	}
	if (this->front == 'y')
	{
		// Front Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0 ;i<3 && j<3 && k<3 && l<3;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_red_value = *(redmatrix+l);

			*(bluematrix+i) = old_red_value;
			*(orangematrix+j) = old_blue_value;
			*(greenmatrix+k) = old_orange_value;
			*(redmatrix+l) = old_green_value;
		}
	}
	if (this->front == 'w')
	{
		// Front Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		
		*(whitematrix+0) = old_6;
		*(whitematrix+1) = old_3;
		*(whitematrix+2) = old_0;
		*(whitematrix+3) = old_7;
		*(whitematrix+5) = old_1;
		*(whitematrix+6) = old_8;
		*(whitematrix+7) = old_5;
		*(whitematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6 ;i<9 && j<9 && k<9 && l<9;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_red_value = *(redmatrix+l);

			*(bluematrix+i) = old_orange_value;
			*(orangematrix+j) = old_green_value;
			*(greenmatrix+k) = old_red_value;
			*(redmatrix+l) = old_blue_value;
		}
	}
}

void Cube::Ft(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();
	if (this->front == 'b')
	{
		// Front Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_2;
		*(bluematrix+1) = old_5;
		*(bluematrix+2) = old_8;
		*(bluematrix+3) = old_1;
		*(bluematrix+5) = old_7;
		*(bluematrix+6) = old_0;
		*(bluematrix+7) = old_3;
		*(bluematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8 ;i<9 && j<7 && k>=0 && l>1;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(redmatrix+j) = old_white_value;
			*(whitematrix+k) = old_orange_value;
			*(orangematrix+l) = old_yellow_value;
			*(yellowmatrix+i) = old_red_value;
		}
	}
	if (this->front == 'r')
	{
		// Front Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_2;
		*(redmatrix+1) = old_5;
		*(redmatrix+2) = old_8;
		*(redmatrix+3) = old_1;
		*(redmatrix+5) = old_7;
		*(redmatrix+6) = old_0;
		*(redmatrix+7) = old_3;
		*(redmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8 ;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(greenmatrix+j) = old_white_value;
			*(whitematrix+k) = old_blue_value;
			*(bluematrix+l) = old_yellow_value;
		}
	}
	if (this->front == 'g')
	{
		// Front Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_2;
		*(greenmatrix+1) = old_5;
		*(greenmatrix+2) = old_8;
		*(greenmatrix+3) = old_1;
		*(greenmatrix+5) = old_7;
		*(greenmatrix+6) = old_0;
		*(greenmatrix+7) = old_3;
		*(greenmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=0, k=6, l=8 ;i>=0 && j<7 && k<9 && l>=2;i--, j+=3, k++, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_red_value = *(redmatrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(orangematrix+j) = old_white_value;
			*(whitematrix+k) = old_red_value;
			*(redmatrix+l) = old_yellow_value;
		}
	}
	if (this->front == 'o')
	{
		// Front Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_2;
		*(orangematrix+1) = old_5;
		*(orangematrix+2) = old_8;
		*(orangematrix+3) = old_1;
		*(orangematrix+5) = old_7;
		*(orangematrix+6) = old_0;
		*(orangematrix+7) = old_3;
		*(orangematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=8, k=0, l=0 ;i<7 && j>=2 && k<7 && l<7;i+=3, j-=3, k+=3, l+=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(greenmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_green_value;
			*(bluematrix+l) = old_white_value;
		}
	}
	if (this->front == 'y')
	{
		// Front Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0 ;i<3 && j<3 && k<3 && l<3;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_red_value = *(redmatrix+l);

			*(bluematrix+i) = old_orange_value;
			*(orangematrix+j) = old_green_value;
			*(greenmatrix+k) = old_red_value;
			*(redmatrix+l) = old_blue_value;
		}
	}
	if (this->front == 'w')
	{
		// Front Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		
		*(whitematrix+0) = old_2;
		*(whitematrix+1) = old_5;
		*(whitematrix+2) = old_8;
		*(whitematrix+3) = old_1;
		*(whitematrix+5) = old_7;
		*(whitematrix+6) = old_0;
		*(whitematrix+7) = old_3;
		*(whitematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6 ;i<9 && j<9 && k<9 && l<9;i++, j++, k++, l++)
		{
			char old_blue_value = *(bluematrix+i);
			char old_orange_value = *(orangematrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_red_value = *(redmatrix+l);

			*(bluematrix+i) = old_red_value;
			*(orangematrix+j) = old_blue_value;
			*(greenmatrix+k) = old_orange_value;
			*(redmatrix+l) = old_green_value;
		}
	}
}

void Cube::F2(){
	this->F();
	this->F();
}

void Cube::D(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();
	if (this->down == 'w')
	{
		// Down Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		
		*(whitematrix+0) = old_6;
		*(whitematrix+1) = old_3;
		*(whitematrix+2) = old_0;
		*(whitematrix+3) = old_7;
		*(whitematrix+5) = old_1;
		*(whitematrix+6) = old_8;
		*(whitematrix+7) = old_5;
		*(whitematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6;i<9;++i)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(redmatrix+i) = old_blue_value;
			*(greenmatrix+i) = old_red_value;
			*(orangematrix+i) = old_green_value;
			*(bluematrix+i) = old_orange_value;
		}
	}
	if (this->down == 'y')
	{
		// Down Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0;i<3;++i)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(redmatrix+i) = old_green_value;
			*(greenmatrix+i) = old_orange_value;
			*(orangematrix+i) = old_blue_value;
			*(bluematrix+i) = old_red_value;
		}
	}
	if (this->down == 'b')
	{
		// Down Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_6;
		*(bluematrix+1) = old_3;
		*(bluematrix+2) = old_0;
		*(bluematrix+3) = old_7;
		*(bluematrix+5) = old_1;
		*(bluematrix+6) = old_8;
		*(bluematrix+7) = old_5;
		*(bluematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8;i<9 && j<7 && k>=0 && l>=2;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(redmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_red_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->down == 'g')
	{
		// Down Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_6;
		*(greenmatrix+1) = old_3;
		*(greenmatrix+2) = old_0;
		*(greenmatrix+3) = old_7;
		*(greenmatrix+5) = old_1;
		*(greenmatrix+6) = old_8;
		*(greenmatrix+7) = old_5;
		*(greenmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=2, j=8, k=6, l=0;i>=0 && j>=2 && k<9 && l<7;i--, j-=3, k++, l+=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(redmatrix+j) = old_white_value;
			*(whitematrix+k) = old_orange_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->down == 'r')
	{
		// Down Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_6;
		*(redmatrix+1) = old_3;
		*(redmatrix+2) = old_0;
		*(redmatrix+3) = old_7;
		*(redmatrix+5) = old_1;
		*(redmatrix+6) = old_8;
		*(redmatrix+7) = old_5;
		*(redmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(greenmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_green_value;
			*(bluematrix+l) = old_white_value;
		}
	}
	if (this->down == 'o')
	{
		// Down Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_6;
		*(orangematrix+1) = old_3;
		*(orangematrix+2) = old_0;
		*(orangematrix+3) = old_7;
		*(orangematrix+5) = old_1;
		*(orangematrix+6) = old_8;
		*(orangematrix+7) = old_5;
		*(orangematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=8, k=0, l=0;i<7 && j>=2 && k<7 && l<7;i+=3, j-=3, k+=3, l+=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(greenmatrix+j) = old_white_value;
			*(whitematrix+k) = old_blue_value;
			*(bluematrix+l) = old_yellow_value;
		}
	}
}

void Cube::Dt(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();
	if (this->down == 'w')
	{
		// Down Face's rotation
		char old_0 = *(whitematrix+0);
		char old_1 = *(whitematrix+1);
		char old_2 = *(whitematrix+2);
		char old_3 = *(whitematrix+3);
		char old_5 = *(whitematrix+5);
		char old_6 = *(whitematrix+6);
		char old_7 = *(whitematrix+7);
		char old_8 = *(whitematrix+8);
		
		*(whitematrix+0) = old_2;
		*(whitematrix+1) = old_5;
		*(whitematrix+2) = old_8;
		*(whitematrix+3) = old_1;
		*(whitematrix+5) = old_7;
		*(whitematrix+6) = old_0;
		*(whitematrix+7) = old_3;
		*(whitematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6;i<9;++i)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(redmatrix+i) = old_green_value;
			*(greenmatrix+i) = old_orange_value;
			*(orangematrix+i) = old_blue_value;
			*(bluematrix+i) = old_red_value;
		}
	}
	if (this->down == 'y')
	{
		// Down Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0;i<3;++i)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+i);
			char old_green_value = *(greenmatrix+i);
			char old_orange_value = *(orangematrix+i);

			*(redmatrix+i) = old_blue_value;
			*(greenmatrix+i) = old_red_value;
			*(orangematrix+i) = old_green_value;
			*(bluematrix+i) = old_orange_value;
		}
	}
	if (this->down == 'b')
	{
		// Down Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_2;
		*(bluematrix+1) = old_5;
		*(bluematrix+2) = old_8;
		*(bluematrix+3) = old_1;
		*(bluematrix+5) = old_7;
		*(bluematrix+6) = old_0;
		*(bluematrix+7) = old_3;
		*(bluematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8;i<9 && j<7 && k>=0 && l>=2;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(redmatrix+j) = old_white_value;
			*(whitematrix+k) = old_orange_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->down == 'g')
	{
		// Down Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_2;
		*(greenmatrix+1) = old_5;
		*(greenmatrix+2) = old_8;
		*(greenmatrix+3) = old_1;
		*(greenmatrix+5) = old_7;
		*(greenmatrix+6) = old_0;
		*(greenmatrix+7) = old_3;
		*(greenmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=2, j=8, k=6, l=0;i>=0 && j>=2 && k<9 && l<7;i--, j-=3, k++, l+=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(redmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_red_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->down == 'r')
	{
		// Down Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_2;
		*(redmatrix+1) = old_5;
		*(redmatrix+2) = old_8;
		*(redmatrix+3) = old_1;
		*(redmatrix+5) = old_7;
		*(redmatrix+6) = old_0;
		*(redmatrix+7) = old_3;
		*(redmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(greenmatrix+j) = old_white_value;
			*(whitematrix+k) = old_blue_value;
			*(bluematrix+l) = old_yellow_value;
		}
	}
	if (this->down == 'o')
	{
		// Down Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_2;
		*(orangematrix+1) = old_5;
		*(orangematrix+2) = old_8;
		*(orangematrix+3) = old_1;
		*(orangematrix+5) = old_7;
		*(orangematrix+6) = old_0;
		*(orangematrix+7) = old_3;
		*(orangematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=8, k=0, l=0;i<7 && j>=2 && k<7 && l<7;i+=3, j-=3, k+=3, l+=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(greenmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_green_value;
			*(bluematrix+l) = old_white_value;
		}
	}
}

void Cube::D2(){
	this->Dt();
	this->Dt();
}

void Cube::B(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->back == 'g')
	{
		// Back Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_6;
		*(greenmatrix+1) = old_3;
		*(greenmatrix+2) = old_0;
		*(greenmatrix+3) = old_7;
		*(greenmatrix+5) = old_1;
		*(greenmatrix+6) = old_8;
		*(greenmatrix+7) = old_5;
		*(greenmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=2, k=8, l=6;i<3 && j<9 && k>=6 && l>=0;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(redmatrix+j) = old_white_value;
			*(whitematrix+k) = old_orange_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->back == 'b')
	{
		// Back Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_6;
		*(bluematrix+1) = old_3;
		*(bluematrix+2) = old_0;
		*(bluematrix+3) = old_7;
		*(bluematrix+5) = old_1;
		*(bluematrix+6) = old_8;
		*(bluematrix+7) = old_5;
		*(bluematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8;i<9 && j<7 && k>=0 && l>=2;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(redmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_red_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->back == 'r')
	{
		// Back Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_6;
		*(redmatrix+1) = old_3;
		*(redmatrix+2) = old_0;
		*(redmatrix+3) = old_7;
		*(redmatrix+5) = old_1;
		*(redmatrix+6) = old_8;
		*(redmatrix+7) = old_5;
		*(redmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(greenmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_green_value;
			*(bluematrix+l) = old_white_value;
		}
	}
	if (this->back == 'o')
	{
		// Back Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_6;
		*(orangematrix+1) = old_3;
		*(orangematrix+2) = old_0;
		*(orangematrix+3) = old_7;
		*(orangematrix+5) = old_1;
		*(orangematrix+6) = old_8;
		*(orangematrix+7) = old_5;
		*(orangematrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=8;i<7 && j<7 && k<7 && l>=2;i+=3, j+=3, k+=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_blue_value = *(bluematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_green_value = *(greenmatrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(bluematrix+j) = old_yellow_value;
			*(whitematrix+k) = old_blue_value;
			*(greenmatrix+l) = old_white_value;
		}
	}
	if (this->back == 'y')
	{
		// Back Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0;i<3 && j<3 && k<3 && l<3;i+=1, j+=1, k+=1, l+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_blue_value;
		}
	}
	if (this->back == 'w')
	{
		// Back Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_6;
		*(yellowmatrix+1) = old_3;
		*(yellowmatrix+2) = old_0;
		*(yellowmatrix+3) = old_7;
		*(yellowmatrix+5) = old_1;
		*(yellowmatrix+6) = old_8;
		*(yellowmatrix+7) = old_5;
		*(yellowmatrix+8) = old_2;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6;i<9 && j<9 && k<9 && l<9;i+=1, j+=1, k+=1, l+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_red_value;
			*(orangematrix+l) = old_green_value;
		}
	}
}

void Cube::Bt(){
	static char* yellowmatrix = this->Yellow::getMatrix();
	static char* orangematrix = this->Orange::getMatrix();
	static char* bluematrix = this->Blue::getMatrix();
	static char* redmatrix = this->Red::getMatrix();
	static char* greenmatrix = this->Green::getMatrix();
	static char* whitematrix = this->White::getMatrix();

	if (this->back == 'g')
	{
		// Back Face's rotation
		char old_0 = *(greenmatrix+0);
		char old_1 = *(greenmatrix+1);
		char old_2 = *(greenmatrix+2);
		char old_3 = *(greenmatrix+3);
		char old_5 = *(greenmatrix+5);
		char old_6 = *(greenmatrix+6);
		char old_7 = *(greenmatrix+7);
		char old_8 = *(greenmatrix+8);
		
		*(greenmatrix+0) = old_2;
		*(greenmatrix+1) = old_5;
		*(greenmatrix+2) = old_8;
		*(greenmatrix+3) = old_1;
		*(greenmatrix+5) = old_7;
		*(greenmatrix+6) = old_0;
		*(greenmatrix+7) = old_3;
		*(greenmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=2, k=8, l=6;i<3 && j<9 && k>=6 && l>=0;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_orange_value;
			*(redmatrix+j) = old_yellow_value;
			*(whitematrix+k) = old_red_value;
			*(orangematrix+l) = old_white_value;
		}
	}
	if (this->back == 'b')
	{
		// Back Face's rotation
		char old_0 = *(bluematrix+0);
		char old_1 = *(bluematrix+1);
		char old_2 = *(bluematrix+2);
		char old_3 = *(bluematrix+3);
		char old_5 = *(bluematrix+5);
		char old_6 = *(bluematrix+6);
		char old_7 = *(bluematrix+7);
		char old_8 = *(bluematrix+8);
		
		*(bluematrix+0) = old_2;
		*(bluematrix+1) = old_5;
		*(bluematrix+2) = old_8;
		*(bluematrix+3) = old_1;
		*(bluematrix+5) = old_7;
		*(bluematrix+6) = old_0;
		*(bluematrix+7) = old_3;
		*(bluematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=0, k=2, l=8;i<9 && j<7 && k>=0 && l>=2;++i, j+=3, k--, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_red_value = *(redmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_orange_value = *(orangematrix+l);

			*(yellowmatrix+i) = old_red_value;
			*(redmatrix+j) = old_white_value;
			*(whitematrix+k) = old_orange_value;
			*(orangematrix+l) = old_yellow_value;
		}
	}
	if (this->back == 'r')
	{
		// Back Face's rotation
		char old_0 = *(redmatrix+0);
		char old_1 = *(redmatrix+1);
		char old_2 = *(redmatrix+2);
		char old_3 = *(redmatrix+3);
		char old_5 = *(redmatrix+5);
		char old_6 = *(redmatrix+6);
		char old_7 = *(redmatrix+7);
		char old_8 = *(redmatrix+8);
		
		*(redmatrix+0) = old_2;
		*(redmatrix+1) = old_5;
		*(redmatrix+2) = old_8;
		*(redmatrix+3) = old_1;
		*(redmatrix+5) = old_7;
		*(redmatrix+6) = old_0;
		*(redmatrix+7) = old_3;
		*(redmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=8, j=0, k=8, l=8;i>=2 && j<7 && k>=2 && l>=2;i-=3, j+=3, k-=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_green_value = *(greenmatrix+j);
			char old_white_value = *(whitematrix+k);
			char old_blue_value = *(bluematrix+l);

			*(yellowmatrix+i) = old_green_value;
			*(greenmatrix+j) = old_white_value;
			*(whitematrix+k) = old_blue_value;
			*(bluematrix+l) = old_yellow_value;
		}
	}
	if (this->back == 'o')
	{
		// Back Face's rotation
		char old_0 = *(orangematrix+0);
		char old_1 = *(orangematrix+1);
		char old_2 = *(orangematrix+2);
		char old_3 = *(orangematrix+3);
		char old_5 = *(orangematrix+5);
		char old_6 = *(orangematrix+6);
		char old_7 = *(orangematrix+7);
		char old_8 = *(orangematrix+8);
		
		*(orangematrix+0) = old_2;
		*(orangematrix+1) = old_5;
		*(orangematrix+2) = old_8;
		*(orangematrix+3) = old_1;
		*(orangematrix+5) = old_7;
		*(orangematrix+6) = old_0;
		*(orangematrix+7) = old_3;
		*(orangematrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=8;i<7 && j<7 && k<7 && l>=2;i+=3, j+=3, k+=3, l-=3)
		{
			char old_yellow_value = *(yellowmatrix+i);
			char old_blue_value = *(bluematrix+j);
			char old_white_value = *(whitematrix+k);
			char old_green_value = *(greenmatrix+l);

			*(yellowmatrix+i) = old_blue_value;
			*(bluematrix+j) = old_white_value;
			*(whitematrix+k) = old_green_value;
			*(greenmatrix+l) = old_yellow_value;
		}
	}
	if (this->back == 'y')
	{
		// Back Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=0, j=0, k=0, l=0;i<3 && j<3 && k<3 && l<3;i+=1, j+=1, k+=1, l+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_orange_value;
			*(redmatrix+j) = old_blue_value;
			*(greenmatrix+k) = old_red_value;
			*(orangematrix+l) = old_green_value;
		}
	}
	if (this->back == 'w')
	{
		// Back Face's rotation
		char old_0 = *(yellowmatrix+0);
		char old_1 = *(yellowmatrix+1);
		char old_2 = *(yellowmatrix+2);
		char old_3 = *(yellowmatrix+3);
		char old_5 = *(yellowmatrix+5);
		char old_6 = *(yellowmatrix+6);
		char old_7 = *(yellowmatrix+7);
		char old_8 = *(yellowmatrix+8);
		
		*(yellowmatrix+0) = old_2;
		*(yellowmatrix+1) = old_5;
		*(yellowmatrix+2) = old_8;
		*(yellowmatrix+3) = old_1;
		*(yellowmatrix+5) = old_7;
		*(yellowmatrix+6) = old_0;
		*(yellowmatrix+7) = old_3;
		*(yellowmatrix+8) = old_6;

		// Other Faces' rotation
		for (int i=6, j=6, k=6, l=6;i<9 && j<9 && k<9 && l<9;i+=1, j+=1, k+=1, l+=1)
		{
			char old_blue_value = *(bluematrix+i);
			char old_red_value = *(redmatrix+j);
			char old_green_value = *(greenmatrix+k);
			char old_orange_value = *(orangematrix+l);

			*(bluematrix+i) = old_red_value;
			*(redmatrix+j) = old_green_value;
			*(greenmatrix+k) = old_orange_value;
			*(orangematrix+l) = old_blue_value;
		}
	}
}

void Cube::B2(){
	this->B();
	this->B();
}

void Cube::M(){
	this->R();
	this->Lt();
}

void Cube::Mt(){
	this->Rt();
	this->L();
}

void Cube::M2(){
	this->Mt();
	this->Mt();
}

void Cube::r(){
	this->L();
}

void Cube::rt(){
	this->Lt();
}

void Cube::r2(){
	this->L2();
}

void Cube::l(){
	this->R();
}

void Cube::lt(){
	this->Rt();
}

void Cube::d(){
	this->U();
}

void Cube::dt(){
	this->Ut();
}

void Cube::d2(){
	this->U2();
}

void Cube::f(){
	this->B();
}

void Cube::ft(){
	this->Bt();
}

int main(){
	Cube cubeobj;
	cubeobj.printMatrix();

	cubeobj.rt();

	cubeobj.printMatrix();

	// char* whitematrix = cube.Red::getMatrix();
	// for (int i=0;i<9;++i)
	// {
	// 	cout << *(whitematrix+i);
	// }

	return 0;
}