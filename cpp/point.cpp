/* NIM/Nama : 13511001/Thea Olivia
	Praktikkum 1 OOP */

#include "point.h"

// Implementasi kelas point
point::Point(){
	x = 0;
	y = 0;
}

point::Point(int newx, int newy){
	newx = x;
	newy = y;
}

point::~Point(){
	delete x;
	delete y;
}

int point::GetAbsis(){
	return x;
}

int point::GetOrdinat(){
	return y;
}

void point::SetAbsis(int newx){
	newx = x;
}

void point::SetOrdinat(int newy){
	newy = y;
}

// Realisasi predikat
int point::IsOrigin(){
	// menghasilkan 1 jika current objek adalah origin
	if (x = 0 && y = 0) {
		return 1;
	} else { return 0; }
} 

// Operator Relasional
int point::IsEqual(Point P){
	// menghasilkan 1 jika P == current objek;
    // nilainya absis dan ordinatnya sama
	if (P == current)
	 {
	 	return 1;
	 } 
	 else {
		return 0;
	}
}

//Operator aritmetika
Point point::Add(Point P1, Point P2){
	// menghasilkan P1+P2
	return Point = P1 + P2;
} 

Point point::Add(Point P){
	// menghasilkan current objek+P
	return Point = temp + P;
} 

Point point::Add(int dx, int dy){
	// menghasilkan Point (P.x+dx, P.x+dy)
	return Point = P.x+dx, P.x+dy;
} 

void point::AddToMe(Point P){
	// current objek = current objek + P
	current = current + P;
} 

void point::AddToMe(int dx, int dy){ 
	// x=x+dx; y=y+dy
	x = x + dx;
	y = y + dy;
}

// Fungsi lain
int point::Kuadran(){
	// menghasilkan kuadran dari Current Objek
	if (x > 0 && y > 0)
		{ return cout << " Kuadran 1 "<< endl;}
	else if (x > 0 && y < 0)
		{ return cout << "Kuadran 3" << endl; }
	else if (x < 0 && y > 0)
		{ return cout << "Kuadran 2" << endl; }
	else if (x < 0 && y < 0)
		{ return cout << "Kuadran 4" << endl; }
} 

// end
