//构造一个DFA
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class TransitionTable
{
public:
	char present;    //当前状态
	char next;        //下一状态
	char input;        //输入字符
	TransitionTable(char P, char I, char D)
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
	vector<TransitionTable> Trans; //转换函数
	void inti()    //初始化自动机
	{
		cout << "请输入有限状态集S：" << endl;
		cin>>States;
		cout << "请输入字符集A：" << endl;
		cin >> Alphabet;
		cout << "请输入转换函数MOVE --格式为：当前状态-输入字符-下一状态：(输入#结束输入)" << endl;
		int j = 0;
		while (true)
		{
			char input[4];
			cin >> input;
			if (strcmp(input, "#") == 0)
				break;
			TransitionTable Temp(input[0], input[1], input[2]);
			Trans.push_back(Temp);
		}
		cout << "请输入开始状态集S0：" << endl;
		cin >> StartStates;
		cout << "请输入结束状态集F：" << endl;
		cin >> FinalStates;
	}
	void identify()    //识别字符串
	{
		cout << "请输入字符串：" << endl;
		string str;
		cin >> str;
		int i = 0;
		char present = StartStates;
		while (i<str.length())
		{
			present = move(present, str[i]);//move函数即去遍历转换表，返回下个状态
			if (present == 'N')// N 即为move返回错误的状态，
			{
				break;
			}
			i++;
		}
		if (FinalStates.find(present) != FinalStates.npos)//如果返回的状态用find函数 属于最终状态集则表示识别
			cout << "该自动机识别此字符串" << endl;
		else
			cout << "该自动机不识别此字符串" << endl;;
	}
	char move(char P, char I)    //move 转换函数
	{
		for (int i = 0; i<Trans.size(); i++)
		{
			if (Trans[i].present == P&&Trans[i].input == I)
				return Trans[i].next;
		}
		return 'N';
	}
	/*将DNF的信息写入文件中，
	第一行：字符集；
	第二行：状态集;
	第三行：开始状态；
	第四行：结束状态集；
	以下行写入状态转换表*/
	void write()
	{
		fstream ff("DNF.txt", ios::out);//保存操作
		ff << Alphabet << endl;
		ff << States << endl;
		ff << StartStates << endl;
		ff << FinalStates << endl;
		for (int i = 0; i<Trans.size(); i++)
			ff << Trans[i].present << Trans[i].input << Trans[i].next << endl;
		ff.close();
	}
	void Traversal(char present, int N, string strass = "")    //遍历 DFA的语言集列表显示
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

