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
//	// write your code here...
//	int getvolume()
//	{
//		return rectangle::area() * this->height;
//	}
//
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	cout << a.getvolume();
//	return 0;
//}