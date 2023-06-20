//#include <cctype>
//#include <iostream>
//#include<cstring>
//#include<map>
//#include<ctype.h>
//// write your code here......
//
//using namespace std;
//
//int main() {
//
//    char str[100] = { 0 };
//    cin.getline(str, sizeof(str));
//    int len = strlen(str);
//    map<char, int>mp;
//    for (int i = 0; i < len; i++)
//    {
//        if (!isalpha(str[i]))
//        {
//
//        }
//        else if (mp.find(str[i]) == mp.end())
//        {
//            pair<char, int> p((char)str[i], 1);
//            mp.insert(p);
//        }
//        else {
//            mp.find(str[i])->second++;
//        }
//    }
//    for (pair x : mp)
//    {
//        cout << x.first << ":" << x.second << endl;
//    }
//    // write your code here......
//
//
//    return 0;
//}