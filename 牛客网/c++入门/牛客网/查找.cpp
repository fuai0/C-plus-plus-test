//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	set<int>s;
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		s.insert(num);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int x;
//		cin >> x;
//
//		set<int>::iterator it = s.end();
//		it--;
//		if (*it <= x)
//		{
//			cout << -1 << endl;
//		}
//		else
//		{
//			for (int i = x + 1; i < 1000000; i++)
//			{
//				set<int>::iterator w = s.find(i);
//				if (w != s.end())
//				{
//					cout << *w << endl;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
