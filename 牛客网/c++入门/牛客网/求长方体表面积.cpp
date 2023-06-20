//#include<bits/stdc++.h>
//using namespace std;
//class rectangle {
//private:
//	int length, width;
//public:
//	rectangle(int x, int y) {
//		length = x;
//		width = y;
//	}
//	void set(int x, int y) {
//		length = x;
//		width = y;
//	}
//	int getlength() {
//		return length;
//	}
//	int getwidth() {
//		return width;
//	}
//	int area() {
//		return length * width;
//	}
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y) {
//		x = x;
//		y = y;
//		height = z;
//	}
//	int area()
//	{
//		return height * rectangle::getlength() * 2 + height * rectangle::getwidth() * 2 + rectangle::area() * 2;
//	}
//
//
//	// write your code here...
//
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.rectangle::area() << '\n' << a.area();
//	return 0;
//}