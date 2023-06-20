//#include <iostream>
//#include <vector>
//#include<algorithm>
//// write your code here......
//using namespace std;
//
//class myprint {
//public:
//    void operator()(int val)
//    {
//        cout << val << " ";
//    }
//};
//class mycompare {
//public:
//    int operator()(int val1, int val2)
//    {
//        return val1 > val2;
//    }
//};
//
//int main() {
//
//    int num;
//    vector<int> v;
//    for (int i = 0; i < 5; i++) {
//        cin >> num;
//        v.push_back(num);
//    }
//    mycompare compare;
//    sort(v.begin(), v.end(), compare);
//    myprint print;
//    for_each(v.begin(), v.end(), print);
//    // write your code here......
//
//
//    return 0;
//}