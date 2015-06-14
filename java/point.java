// File : point.java

public class Point (int x, int y) {
// java constructor tanpa parameter
public Point () {
	x = 0;
	y = 0;
}

public Point (int newx, int newy) {
	x = newx;
	y = newy;
}


// getter
public int GetAbsis(){
	return x;
}

public int GetOrdinat(){
	return y;
}

// setter
public void SetAbsis(){
	this.x-> x;
}

public void SetOrdinat(){

	this.y-> y;
}

// Predikat
public int IsOrigin(){
	if ((x =0) && (y = 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
// Operator relasional
public int IsEqual(Point P){
	if ((P.x = x) && (P.y = y))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// operator aritmatika
public Point Add(Point P1, Point P2){
	// menghasilkan P1+P2
	return Point = P1 + P2;
} 
public Point Add(Point P){
	// menghasilkan current objek+P
	return Point = current + P;
} 
public Point Add(int dx, int dy){
	// menghasilkan Point (P.x+dx, P.x+dy)
	return Point (P.x+dx, P.x+dy);
} 

public void AddToMe(Point P){
	// current objek = current objek + P
	current = current + P;
}

public void AddToMe(int dx, int dy){
	// x=x+dx; y=y+dy
	x = x + dx;
	y = y + dy;
} 

// Fungsi lain
public int Kuadran(){
	// menghasilkan kuadran dari Current Objek
		if (x > 0 && y > 0)
		{ return System.out.println("Kuadran 1"); }
	else if (x > 0 && y < 0)
		{ return System.out.println("Kuadran 3"); }
	else if (x < 0 && y > 0)
		{ return System.out.println("Kuadran 2"); }
	else if (x < 0 && y < 0)
		{ return System.out.println("Kuadran 4"); }
} 

public static void main (String[] args){
	// main
	Point object = new Point();
}
}