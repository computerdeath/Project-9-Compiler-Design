#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;
bool accept = false; int state = 0; stack<string>stringStack;string input;
void displayF()
{

}
void popStack()
{
	string hold;
	hold = stringStack.top();
}
void checkStack()
{
	string check;
	check = stringStack.top();
}
void nonTerminal(string receive)
{
	
}
void shift(string receive)
{
	stringstream ss; string ass;
	char hold = input[0];
	ss << hold;
	ss >> ass;
	stringStack.push(ass);
	//delete first element of input string
	input.erase(0);
	stringStack.push(receive);
}
void shiftTerminal()
{

}
void determineState(int column ,int state,string chart[16][11])
{
	string hold;
		hold = chart[state][column];
		if (hold == "s5")
			shift("5");
		if (hold == "s4")
			shift("4");
		if (hold == "s6")
			shift("6");
		if (hold == "s7")
			shift("6");
		if (hold == "s8")
			shift("6");
		if (hold == "s9")
			shift("9");
		if (hold == "s15")
			shift("15");
		if (hold == "r1")
			nonTerminal("r1");
		if (hold == "r2")
			nonTerminal("r2");
		if (hold == "r3")
			nonTerminal("r3");
		if (hold == "r4")
			nonTerminal("r4");
		if(hold=="r5")
			nonTerminal("r5");
		if (hold == "r6")
			nonTerminal("r6");
		if (hold == "r7")
			nonTerminal("r7");
		if (hold == "r8")
			nonTerminal("r8");
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
	//case'E':column = 8; break;//E
	//case'T':column = 9; break;//F
	//case'F':column = 10; break;//
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
	int column,length, position = 0;
	//intialize stack
	stringStack.push("0");
	cout << stringStack.top();
	cout << "Enter input string terminating with $:";
	cin >> input;
	//length = input.length();
	while (input[position]!='$')
	{
		parseColumn(input[position],column);
		determineState(column, position, chart);
		position++;
	}
	//cout << column<< endl;
	system("pause");
	return 0;
}