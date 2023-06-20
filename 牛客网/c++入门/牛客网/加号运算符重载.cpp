//#include <iostream>
//using namespace std;
//
//class Time {
//
//public:
//    int hours;      // Ð¡Ê±
//    int minutes;    // ·ÖÖÓ
//    Time() {
//        hours = 0;
//        minutes = 0;
//    }
//
//    Time(int h, int m) {
//        this->hours = h;
//        this->minutes = m;
//    }
//    Time operator+(Time& p)
//    {
//        Time temp;
//        temp.hours = this->hours + p.hours;
//        temp.minutes = this->minutes + p.minutes;
//        if (temp.minutes >= 60)
//        {
//            temp.hours++;
//            temp.minutes = temp.minutes % 60;
//        }
//        return temp;
//    }
//    void show() {
//        cout << hours << " " << minutes << endl;
//    }
//    // write your code here......
//};
//
//int main() {
//
//    int h, m;
//    cin >> h;
//    cin >> m;
//
//    Time t1(h, m);
//    Time t2(2, 20);
//
//    Time t3 = t1 + t2;
//    t3.show();
//
//    return 0;
//}