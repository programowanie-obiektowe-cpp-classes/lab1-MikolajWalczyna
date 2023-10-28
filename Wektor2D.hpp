class Wektor2D
{
private:
	float x;
	float y;
public:
	Wektor2D(float a, float b)
	{
		x = a;
		y = b;
		std::cout << std::endl << "Wektor 2 Argumenty: " << x << " " << y<<std::endl;
	}
	Wektor2D(float a)
	{
		x = a;
		y = a;
		std::cout << std::endl << "Wektor 1 Argument: " << x << " " << y << std::endl;
	}
	Wektor2D()
	{
		x = 0;
		y = 0;
		std::cout << std::endl << "Wektor Domyslny: " << x << " " << y << std::endl;
	}
	~Wektor2D()
	{
		std::cout << std::endl << "Dekonstrukcja wektora: " <<x<<" "<<y<< std::endl;
	}
	float norm() { return(sqrt(x*x + y * y)); }
	void print() { std::cout << x << " " << y<<std::endl; }
	Informer Informator{};
	void setX(float a) { x = a; }
	void setY(float a) { y = a; }
	float getX() { return(x); }
	float getY() { return(y); }

	/* Fragment sponorowany przez ChatGPT

	// Przeciążenie operatora dodawania wektorów
	Wektor2D operator+(const Wektor2D& other) const {
		return Wektor2D(x + other.x, y + other.y);
	}

	// Przeciążenie operatora iloczynu skalarnego
	double operator*(const Wektor2D& other) const {
		return x * other.x + y * other.y;
	} */
	Wektor2D operator+(Wektor2D& v) { //& to referecja zeby nie tworzyc kopii
		return Wektor2D(x + v.x, y + v.y);
	}
	double operator*(Wektor2D& v) {
		return x * v.x + y * v.y;
	}
};
