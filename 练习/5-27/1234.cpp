//����һ��DFA
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class TransitionTable
{
public:
	char present;    //��ǰ״̬
	char next;        //��һ״̬
	char input;        //�����ַ�
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
	string States;    //״̬��
	char StartStates;    //��ʼ״̬
	string FinalStates;    //����״̬��
	string Alphabet;    //�ַ���
	vector<TransitionTable> Trans; //ת������
	void inti()    //��ʼ���Զ���
	{
		cout << "����������״̬��S��" << endl;
		cin>>States;
		cout << "�������ַ���A��" << endl;
		cin >> Alphabet;
		cout << "������ת������MOVE --��ʽΪ����ǰ״̬-�����ַ�-��һ״̬��(����#��������)" << endl;
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
		cout << "�����뿪ʼ״̬��S0��" << endl;
		cin >> StartStates;
		cout << "���������״̬��F��" << endl;
		cin >> FinalStates;
	}
	void identify()    //ʶ���ַ���
	{
		cout << "�������ַ�����" << endl;
		string str;
		cin >> str;
		int i = 0;
		char present = StartStates;
		while (i<str.length())
		{
			present = move(present, str[i]);//move������ȥ����ת���������¸�״̬
			if (present == 'N')// N ��Ϊmove���ش����״̬��
			{
				break;
			}
			i++;
		}
		if (FinalStates.find(present) != FinalStates.npos)//������ص�״̬��find���� ��������״̬�����ʾʶ��
			cout << "���Զ���ʶ����ַ���" << endl;
		else
			cout << "���Զ�����ʶ����ַ���" << endl;;
	}
	char move(char P, char I)    //move ת������
	{
		for (int i = 0; i<Trans.size(); i++)
		{
			if (Trans[i].present == P&&Trans[i].input == I)
				return Trans[i].next;
		}
		return 'N';
	}
	/*��DNF����Ϣд���ļ��У�
	��һ�У��ַ�����
	�ڶ��У�״̬��;
	�����У���ʼ״̬��
	�����У�����״̬����
	������д��״̬ת����*/
	void write()
	{
		fstream ff("DNF.txt", ios::out);//�������
		ff << Alphabet << endl;
		ff << States << endl;
		ff << StartStates << endl;
		ff << FinalStates << endl;
		for (int i = 0; i<Trans.size(); i++)
			ff << Trans[i].present << Trans[i].input << Trans[i].next << endl;
		ff.close();
	}
	void Traversal(char present, int N, string strass = "")    //���� DFA�����Լ��б���ʾ
	{
		if (present == 'N' || N<0)
			return;
		N--;
		if (FinalStates.find(present) != FinalStates.npos)
		{
			cout << "���Զ���ʶ���ַ���:" << strass << endl;
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
	cout << "������N" << endl;
	cin >> N;
	example.Traversal(example.StartStates, N);
	example.write();
	system("pause");
	return 0;
}

