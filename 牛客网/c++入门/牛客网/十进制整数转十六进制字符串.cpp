//#include <iostream>
//#include <string>
//#include<cstring>
//using namespace std;
//
//string toHexString(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    string hexStr = toHexString(n);
//    cout << hexStr << endl;
//
//    return 0;
//}
//
//string toHexString(int n) {
//    char arr[100];
//    int size = 1;
//    for (int i = 0; i < 100; i++)
//    {
//
//        if (n / 16 != 0)
//        {
//            int y = n % 16;
//            if (y < 10)
//            {
//                arr[i] = y + '0';
//            }
//            else
//            {
//                arr[i] = y - 10 + 'A';
//            }
//            n = n / 16;
//            size++;
//        }
//        else {
//            int y = n % 16;
//            if (y < 10)
//            {
//                arr[i] = y + '0';
//            }
//            else
//            {
//                arr[i] = y - 10 + 'A';
//            }
//            break;
//        }
//    }
//
//    string num;
//    for (int i = size - 1; i >= 0; i--)
//    {
//        num += arr[i];
//    }
//
//    return num;
//
//
//    // write your code here......
//
//}