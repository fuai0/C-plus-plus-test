//#include <cctype>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    int letter = 0;
//    int digit = 0;
//    int space = 0;
//    int other = 0;
//
//    char buf[1024] = { 0 };
//    cin.getline(buf, sizeof(buf));
//    for (int i = 0; i < strlen(buf); i++)
//    {
//        if (isalpha(buf[i]))
//        {
//            letter++;
//        }
//        else if (isdigit(buf[i]))
//        {
//            digit++;
//        }
//        else if (buf[i] == ' ')
//        {
//            space++;
//        }
//        else {
//            other++;
//        }
//    }
//    // write your code here......
//
//
//    cout << "letter:" << letter << " digit:" << digit << " space:" << space << " other:" << other << endl;
//
//    return 0;
//}