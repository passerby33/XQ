//#include<iostream> 
//using namespace std;
//const int MaxLen = 10;
//const int Length = 10;
//char Vn[5] = { 'E', 'G', 'T', 'S', 'F' };
//char Vt[8] = { 'i', '(', ')', '+', '-', '*', '/', '#' };
//char ch, X;
//char strToken[Length];
//struct LL {
//	char*c;
//};
//LL E[8] = { "TG", "TG", "error", "error", "error", "error", "error", "error" };
//LL G[8] = { "error", "error", "null", "+TG", "-TG", "error", "error", "null" };
//LL T[8] = { "FS", "FS", "error", "error", "error", "error", "error", "error" };
//LL S[8] = { "error", "error", "null", "null", "null", "*FS", "/FS", "null" };
//LL F[8] = { "i", "(i)", "error", "error", "error", "error", "error", "error"
//};
//class stack
//{
//public:
//	stack();
//	bool empty() const;
//	bool full() const;
//	bool get_top(char &c)const;
//	bool push(const char c);
//	bool pop(); void out();
//	~stack(){}
//private:
//	int count;//栈长度
//	char data[MaxLen];//栈中元素
//};
//stack::stack()
//{
//	count = 0;
//}
//bool stack::empty() const
//{
//	if (count == 0)
//		return true;
//	return false;
//}
//bool stack::full() const
//{
//	if (count == MaxLen)
//		return true;
//	return false;
//}
//bool stack::get_top(char &c)const
//{
//	if (empty()) return false;
//	else
//	{
//		c = data[count - 1];
//	} bool stack::push(const char c)
//	{
//		if (full())
//			return false;
//		data[count++] = c;
//	}
//	bool stack::pop()
//	{
//		if (empty()) return false;
//		count--;
//		return true;
//	} void stack::out()
//	{
//		for (int i = 0; i<count; i++)
//			cout << data[i];
//		cout << " ";
//	}
//	int length(char *c)
//	{
//		int l = 0;
//		for (int i = 0; c[i] != '\0'; i++)
//			l++;
//		return l;
//	}
//	void print(int i, char*c)
//	{
//		for (int j = i; j<Length; j++)
//			cout << c[j]; cout << " ";
//	}
//	void run()
//	{
//		bool flag = true;
//		int step = 0, point = 0;
//		int len;
//		cout << "请输入要规约的字符串 (与 i 有关的串 )：" << endl;
//		cin >> strToken;
//		ch = strToken[point++];
//		stack s;
//		s.push('#');
//		s.push('E');
//		s.get_top(X);
//		cout << "步骤 " << " 分析栈 " << " 剩余输入串 " << "所用产生式 " << "动作" << endl;
//		cout << step++ << " ";
//		s.out(); print(point - 1, strToken);
//		cout << " " << " 初始化 " << endl;
//		while (flag)
//		{
//			if ((X == Vt[0]) || (X == Vt[1]) || (X == Vt[2]) || (X == Vt[3]) || (X == Vt[4]) || (X == Vt[5]) || (X == V t[6]))
//			{
//				if (X == ch)
//				{
//					s.pop();
//					s.get_top(X);
//					ch = strToken[point++];
//					cout << step++ << " ";
//					s.out();
//					print(point - 1, strToken);
//					cout << " " << "GETNEXT(I)" << endl;
//				}
//				else {
//					flag = false;
//					cout << "error!" << endl;
//				}
//			}
//			else if (X == '#')
//			{
//				if (X == ch)
//				{
//					cout << step++ << " ";
//					s.out();
//					print(point - 1, strToken);
//					cout << " " << X << "->" << ch << " " << " 结束" << endl;
//					s.pop(); flag = false;
//				}
//				else { flag = false; cout << "error!" << endl; }
//			}
//			else if (X == Vn[0])
//			{
//				for (int i = 0; i<8; i++)
//				if (ch == Vt[i])
//				{
//					if (strcmp(E[i].c, "error") == 0)
//					{
//						flag = false; cout << "error" << endl;
//					}
//					else{
//						s.pop();
//						len = length(E[i].c) - 1;
//						for (int j = len; j >= 0; j--)
//							s.push(E[i].c[j]);
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << X << "->" << E[i].c << " " << "POP,PUSH(";
//						for (int z = len; z >= 0; z--)
//							cout << E[i].c[z]; cout << ")" << endl;
//						s.get_top(X);
//					}
//				}
//			}
//			else if (X == Vn[1])
//			{
//				for (int i = 0; i<8; i++)
//				if (ch == Vt[i])
//				{
//					if (strcmp(G[i].c, "null") == 0)
//					{
//						s.pop();
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << " " << X << "->" << " ε" << " " << "POP" << endl;
//						s.get_top(X);
//					}
//					else if (strcmp(G[i].c, "error") == 0)
//					{
//						flag = false;
//						cout << "error" << endl;
//					}
//					else{
//						s.pop();
//						en = length(G[i].c) - 1;
//						for (int j = len; j >= 0; j--)
//							s.push(G[i].c[j]);
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << X << "->" << G[i].c << " " << "POP,PUSH(";
//						for (int z = len; z >= 0; z--)
//							cout << G[i].c[z]; cout << ")" << endl;
//						s.get_top(X);
//					}
//				}
//			}
//			else if (X == Vn[2])
//			{
//				for (int i = 0; i<8; i++)
//				if (ch == Vt[i])
//				{
//					if (strcmp(T[i].c, "error") == 0)
//					{
//						flag = false;
//						cout << "error" << endl;
//					}
//					else{
//						s.pop();
//						len = length(T[i].c) - 1;
//						for (int j = len; j >= 0; j--)
//							s.push(T[i].c[j]);
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << X << "->" << T[i].c << " " << "POP,PUSH(";
//						for (int z = len; z >= 0; z--)
//							cout << T[i].c[z]; cout << ")" << endl;
//						s.get_top(X);
//					}
//				}
//			}
//			else if (X == Vn[3])
//			{
//				for (int i = 0; i<8; i++)
//				if (ch == Vt[i])
//				{
//					if (strcmp(S[i].c, "null") == 0)
//					{
//						s.pop();
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << " " << X << "->" << " ε" << " " << "POP" << endl;
//						s.get_top(X);
//					}
//					else if (strcmp(S[i].c, "error") == 0)
//					{
//						flag = false; cout << "error" << endl;
//					}
//					else{
//						s.pop();
//						len = length(S[i].c) - 1;
//						for (int j = len; j >= 0; j--)
//							s.push(S[i].c[j]);
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << X << "->" << S[i].c << " " << "POP,PUSH(";
//						for (int z = len; z >= 0; z--)
//							cout << S[i].c[z]; cout << ")" << endl;
//						s.get_top(X);
//					}
//				}
//			}
//			else if (X == Vn[4])
//			{
//				for (int i = 0; i<7; i++)
//				if (ch == Vt[i])
//				{
//					if (strcmp(F[i].c, "error") == 0)
//					{
//						flag = false;
//						cout << "error" << endl;
//					}
//					else{
//						s.pop();
//						len = length(F[i].c) - 1;
//						for (int j = len; j >= 0; j--)
//							s.push(F[i].c[j]);
//						cout << step++ << " ";
//						s.out();
//						print(point - 1, strToken);
//						cout << X << "->" << F[i].c << " " << "POP,PUSH(";
//						for (int z = len; z >= 0; z--)
//							cout << F[i].c[z]; cout << ")" << endl;
//						s.get_top(X);
//					}
//				}
//			}
//			else
//			{
//				flag = false;
//				cout << "error" << endl;
//			}
//		}
//	}
//	int main()
//	{
//		run();
//		system("pause");
////		return 0;
//#include <iostream>
//#include <vector>
//using namespace std;
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		// write code here
//		int b[1000] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			b[gifts[i]]++;
//		}
//		int i = 0;
//		while (n)
//		{
//			if (b[gifts[i]] >= n / 2)
//			{
//				return gifts[i];
//			}
//		}
//		return 0;
//	}
//};
