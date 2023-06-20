//#include<bits/stdc++.h>
//#include <endian.h>
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
//	virtual int getval()
//	{
//		return length * width;
//	}
//	// write your code here...
//
//};
//class cuboid :public rectangle {
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y) {
//		height = z;
//	}
//	int getval()
//	{
//		return rectangle::getval() * height;
//	}
//	// write your code here...
//
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}