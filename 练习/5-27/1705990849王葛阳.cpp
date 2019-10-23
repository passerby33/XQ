#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class fun
{
public:
	char present;    
	char next;       
	char input;        
	fun(char P, char I, char D)
	{
		present = P;
		next = D;
		input = I;
	}
};

class DFA
{
public:
	DFA()
	{
		inti();
	}
	string States;    //状态集
	char StartStates;    //开始状态
	string FinalStates;    //结束状态集
	string Alphabet;    //字符集
	vector<fun> Trans; //转换函数
	void inti()    //初始化自动机
	{
		cout << "限状态集：" << endl;
		cin >> States;
		cout << "字符集：" << endl;
		cin >> Alphabet;
		cout << "输入状态转换：#结束输入" << endl;
		int j = 0;
		while (true)
		{
			char input[4];
			cin >> input;
			if (strcmp(input, "#") == 0)
				break;
			fun Temp(input[0], input[1], input[2]);
			Trans.push_back(Temp);
		}
		cout << "请输入开始状态集S0：" << endl;
		cin >> StartStates;
		cout << "请输入结束状态集F：" << endl;
		cin >> FinalStates;
	}
	void identify()    
	{
		cout << "请输入字符串：" << endl;
		string str;
		cin >> str;
		int i = 0;
		char present = StartStates;
		while (i<str.length())
		{
			present = move(present, str[i]);
			if (present == 'N')
			{
				break;
			}
			i++;
		}
		if (FinalStates.find(present) != FinalStates.npos)
			cout << "该自动机识别此字符串" << endl;
		else
			cout << "该自动机不识别此字符串" << endl;;
	}
	char move(char P, char I)    
	{
		for (int i = 0; i<Trans.size(); i++)
		{
			if (Trans[i].present == P&&Trans[i].input == I)
				return Trans[i].next;
		}
		return 'N';
	}
	void write()
	{
		fstream ff("DNF.txt", ios::out);
		ff << Alphabet << endl;
		ff << States << endl;
		ff << StartStates << endl;
		ff << FinalStates << endl;
		for (int i = 0; i<Trans.size(); i++)
			ff << Trans[i].present << Trans[i].input << Trans[i].next << endl;
		ff.close();
	}
	void Traversal(char present, int N, string strass = "")    
	{
		if (present == 'N' || N<0)
			return;
		N--;
		if (FinalStates.find(present) != FinalStates.npos)
		{
			cout << "该自动机识别字符串:" << strass << endl;
		}
		else if (FinalStates.find(present) == FinalStates.npos&&N<0)
			return;
		for (int i = 0; i<Alphabet.length(); i++)
		{
			string temp;
			temp = strass;
			strass += Alphabet[i];
			Traversal(move(present, Alphabet[i]), N, strass);
			strass = temp;
		}
	}
};
int main()
{
	DFA example;
	example.identify();
	int N;
	cout << "请输入N" << endl;
	cin >> N;
	example.Traversal(example.StartStates, N);
	example.write();
	system("pause");
	return 0;
}

