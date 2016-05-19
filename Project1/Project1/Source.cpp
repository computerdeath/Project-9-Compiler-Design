#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool accept = false;
void determineState(int column ,int state,string chart[16][11])
{
	cout << chart[state][column] << endl;
}
void nonTerminal(string receive)
{

}
void shift(string receive)
{

}
void parseColumn(char input,int &column)
{
	switch (input)
	{
	case 'i':column = 0; break;
	case'+':column = 1; break;
	case'-':column = 2; break;
	case'*':column = 3; break;
	case'/':column = 4; break;
	case'(':column = 5; break;
	case')':column = 6; break;
	case'$':column = 7; break;
	case'E':column = 8; break;//E
	case'T':column = 9; break;//F
	case'F':column = 10; break;//
	}

	//return newState;
}
void displayStack(string stack,string hold, string entry)
{
	cout << "Stack	Input	Entry";

}
int main()
{
	// ll parsers for left to right
	//~ is blank
	string chart[16][11] = { {"s5","~","~","~","~","s4","~","~","1","2","3" },{"~","s6","s7","~","~","~","~","acc","~","~","~"},{"~","r3","r3","s8","s9","~","r3","r3","~","~","~"},
	{"~","r6","r6","r6","r6","~","r6","r6","~","~","~"},{"s5","~","~","~","s4","~","~","10","2","3"},{"~","r8","r8","r8","r8","~","r8","~","~","~" },{"s5","~","~","~","~","s4","~","~","~","11","3"},
	{ "s5","~","~","~","~","s4","~","~","~","12","3" },{ "s5","~","~","~","~","s4","~","~","~","~","13" },{ "s5","~","~","~","~","s4","~","~","~","~","14" },{"~","s6","s7","~","~","~","s15","~","~","~","~"},
	{"~","r1","r1","s8","s9","~","r1","r1","~","~","~"},{ "~","r2","r2","s8","s9","~","r2","r2","~","~","~" },{ "~","r4","r4","r4","r4","~","r4","r4","~","~","~" },{ "~","r5","r5","r5","r5","~","r5","r5","~","~","~" },
	{ "~","r7","r7","r7","r7","~","r7","r7","~","~","~" }
	};
	string input,stack;
	int state = 0, column,length, position = 0;
	//intialize stack
	stack = "0";
	cout << "Enter input string terminating with $:";
	cin >> input;
	length = input.length();
	//while (input[position]!='$')
	//{
		parseColumn(input[position],column);
		determineState(column, position, chart);
		position++;
	//}
	//cout << column<< endl;
	system("pause");
	return 0;
}