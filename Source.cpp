#include<iostream>
#include<iomanip>
using namespace std;
bool chek(char);
void dif();
void drow();
void full(int, char);
bool chin(int);
void com(int, char, char);
bool check_win(char , char);
bool win_x(char);
bool win_o(char);
bool pcom(char, char);
char c1, c2, c3, c4, c5, c6, c7, c8, c9;
int main()
{
	int adad = 0;
	int play;
	char s;
	int c;
	char x;
	cout << "Do you want x or o\n";
	cin >> x;
	while (!chek(x))
	{
		cout << "the chose false, enter true chose \n";
		cin >> x;
	}
	if (x == 'x')
	{
		s = 'o';
	}
	else s = 'x';
	dif();
	drow();
	while (true)
	{
		cout << "play in number " << endl;
		cin >> play;
		while (!chin(play))
		{
			cout << " the number false " << endl;
			cout << "enter true number ";
			cin >> play;
		}
		full(play, x);
		adad++;
		if (adad == 9)
		{
			drow();
			cout << "the game DRAW \n";
			cout << "Do you want to continue playing ? \n1- Yes \n2-No \n";
			cin >> c;
			if (c == 1)
			{
				dif();
				continue;
			}
			else break;
		}

		if (pcom(s, x))
		{
			cout << "the " << s << " win\n";
			drow();
			break;
		}

		com(play, s, x);
		adad++;
		if (adad == 9)
		{
			drow();
			cout << "the game DRAW \n";
			cout << "Do you want to continue playing ? \n1- Yes \n2-No \n";
			cin >> c;
			if (c == 1)
			{
				dif();
				continue;
			}
			else break;
		}
		if (check_win(x, s))
		{
			if (win_x(x))
				cout << "the " << x << " win\n";
			if(win_o(s))
				cout << "the " << s << " win\n";
			drow();
			break;
		}
		drow();
		
	}
	cout<<"thank u"<<endl;
	

		

	return 0; 
}
bool chek(char a)
{
	if (a == 'x' || a == 'o')
	{
		return true;
	}
	else return false;
}
void dif()
{
	c1 = '1';
	c2 = '2';
	c3 = '3';
	c4 = '4';
	c5 = '5';
	c6 = '6';
	c7 = '7';
	c8 = '8';
	c9 = '9';

}
void drow()
{
	system("cls");
	cout << "|\t" << c1 << "\t|" << "\t" << c2 << "\t|"<< "\t" << c3 << "\t|" << endl;
	cout << ".................................................\n";
	cout << "|\t" << c4 << "\t|" << "\t" << c5 << "\t|" << "\t" << c6 << "\t|" << endl;
	cout << ".................................................\n";
	cout << "|\t" << c7 << "\t|" << "\t" << c8 << "\t|" << "\t" << c9 << "\t|" << endl;
	cout << ".................................................\n";

}
void full(int w, char c )
{
	
	switch (w)
	{
	case 1:c1 = c;
		break;
	case 2:c2 = c;
		break;
	case 3:c3 = c;
		break;
	case 4:c4 = c;
		break;
	case 5:c5 = c;
		break;
	case 6:c6 = c;
		break;
	case 7:c7 = c;
		break;
	case 8:c8 = c;
		break;
	case 9:c9 = c;
		break;
	}
	
}
bool chin(int v)
{
	if (v > 9 || v < 0)
	{
		return false;
	}
	switch (v)
	{
 	case 1:
		if (c1 == '1')
		{
			return true;
		}
		break;
	case 2:
		if (c2 == '2')
		{
			return true;
		}
		break;
	case 3:
		if (c3 == '3')
		{
			return true;
		}
		break;
	case 4:
		if (c4 == '4')
		{
			return true;
		}
		break;
	case 5:
		if (c5 == '5')
		{
			return true;
		}
		break;
	case 6:
		if (c6 == '6')
		{
			return true;
		}
		break;
	case 7:
		if (c7 == '7')
		{
			return true;
		}
		break;
	case 8:
		if (c8 == '8')
		{
			return true;
		}
		break;
	case 9:
		if (c9 == '9')
		{
			return true;
		}

		break;
	}
	return false;
}
void com(int p, char s, char x)
{
	srand(time(0));
	int ra = rand() % 4;
	bool cih = c1=='1'&&c2=='2'&&c3=='3'&&c4=='4'&&c6=='6'&&c7=='7'&&c8=='8'&&c9=='9';
	 	 
	switch (p)
	{
	case 1:if (c5 == x && c6 != s)
		c9 = s;
		  else if (c2 == x && c3 != s)
		c3 = s;
		  else if (c3 == x && c2 != s)
		c2 = s;
		  else if (c4 == x && c7 != s)
		c7 = s;
		  else if (c6 == x && c2 != s)
		c2 = s;
		  else if (c7 == x && c4 != s)
		c4 = s;
		  else if (c9 == x && c5 != s)
		c5 = s;
		  else if (c8 == x && c7 != s)
		c7 = s;
		  else if (c5 != 'x' && c5 != 'o')
		c5 = s;
		  else if (c2 != 'x' && c2 != 'o')
		c2 = s;
		break;

	case 2: if (c5 == x && c8 != s)
		c8 = s;
		  else if (c1 == x && c3 != s)
		c3 = s;                       
		  else if (c3 == x && c1 != s)
		c1 = s;
		  else if (c4 == x && c7 != s)
		c7 = s;
		  else if (c6 == x && c3 != s)
		c3 = s;
		  else if (c7 == x && c1 != s)
		c1 = s;
		  else if (c9 == x && c3 != s)
		c3 = s;
		  else if (c8 == x && c5 != s)
		c5 = s;
		  else if (c5 != 'x' && c5 != 'o')
		c5 = s;
		  else if (c6 != 'x' && c6 != 'o')
		c6 = s;
		break;   

	case 3: if (c5 == x && c7 != s)
		c7 = s;
		  else if (c1 == x && c2 != s)
		c2 = s;
		  else if (c2 == x && c1 != s)
		c1 = s;
		  else if (c4 == x && c1 != s)
		c1 = s;
		  else if (c6 == x && c9 != s)
		c9 = s;
		  else if (c7 == x && c5 != s)
		c5 = s;
		  else if (c8 == x && c9 != s)
		c9 = s;
		  else if (c9 == x && c6 != s)
		c6 = s;
		  else if (c5 != 'x' && c5 != 'o')
		c5 = s;
		  else if (c2 != 'x' && c2 != 'o')
		c2 = s;
		break;     

	case 4: if (c5 == x && c6 != s)
		c6 = s;
		  else if (c1 == x && c7 != s)
		c7 = s;
		  else if (c2 == x && c1 != s)
		c1 = s;
		  else if (c3 == x && c1 != s)
		c1 = s;
		  else if (c6 == x && c5 != s)
		c5 = s;
		  else if (c7 == x && c1 != s)
		c1 = s;
		  else if (c8 == x && c7 != s)
		c7 = s;
		  else if (c9 == x && c7 != s)
		c7 = s;
		  else if (c5 != 'x' && c5 != 'o')
		c5 = s;
		  else if (c8 != 'x' && c8 != 'o')
		c8 = s;
		break;

	case 5: if(cih)
			{
		if (ra == 0)
			c1 = s;
		if (ra == 1)
			c3 = s;
		if (ra == 2)
			c7 = s;
		if (ra == 3)
			c9 = s;
			}
		else if (c4 == x && c6 != s)
		c6 = s;
		  else if (c1 == x && c9 != s)
		c9 = s;
		  else if (c2 == x && c8 != s)
		c8 = s;
		  else if (c3 == x && c7 != s)
		c7 = s;
		  else if (c6 == x && c4 != s)
		c4 = s;
		  else if (c7 == x && c3 != s)
		c3 = s;
		  else if (c8 == x && c2 != s)
		c2 = s;
		  else if (c9 == x && c1 != s)
		c1 = s;
		  else if (c9 != 'x' && c9 != 'o')
		c9 = s;
		  else if (c1 != 'x' && c1 != 'o')
		c1 = s;
		break;

	case 6:if (c5 == x && c4 != s)
		c4 = s;
		  else if (c1 == x && c3 != s)
		c3 = s;
		  else if (c2 == x && c3 != s)
		c3 = s;
		  else if (c3 == x && c9 != s)
		c9 = s;
		  else if (c4 == x && c5 != s)
		c5 = s;
		  else if (c7 == x && c9 != s)
		c9 = s;
		  else if (c8 == x && c9 != s)
		c9 = s;
		  else if (c9 == x && c3 != s)
		c3 = s;
		  else if (c2 != 'x' && c2 != 'o')
		c2 = s;
		break;

	case 7:if (c5 == x && c3 != s)
		c3 = s;
		  else if (c1 == x && c4 != s)
		c4 = s;
		  else if (c2 == x && c1 != s)
		c1 = s;
		  else if (c3 == x && c5 != s)
		c5 = s;
		  else if (c6 == x && c9 != s)
		c9 = s;
		  else if (c4 == x && c1 != s)
		c1 = s;
		  else if (c8 == x && c9 != s)
		c9 = s;
		  else if (c9 == x && c8 != s)
		c8 = s;
		  else if (c5 != 'x' && c5 != 'o')
		c5 = s;
		  else if (c8 != 'x' && c8 != 'o')
		c8 = s;
		break;

	case 8: if (c5 == x && c2 != s)
		c2 = s;
		  else if (c1 == x && c7 != s)
		c7 = s;
		  else if (c2 == x && c5 != s)
		c5= s;
		  else if (c3 == x && c9 != s)
		c9 = s;
		  else if (c6 == x && c9 != s)
		c9 = s;
		  else if (c7 == x && c9 != s)
		c9 = s;
		  else if (c4 == x && c7 != s)
		c7 = s;
		  else if (c9 == x && c7 != s)
		c7 = s;
		  else if (c5 != 'x' && c5 != 'o')
	    c5 = s;
		  else if (c6 != 'x' && c6 != 'o')
		c6 = s;
		break;

	case 9: if (c5 == x && c1 != s)
		c1 = s;
		  else if (c1 == x && c5 != s)
		c5 = s;
		  else if (c2 == x && c3 != s)
		c3 = s;
		  else if (c3 == x && c6 != s)
		c6 = s;
		  else if (c6 == x && c3 != s)
		c3 = s;
		  else if (c7 == x && c8 != s)
		c8 = s;
		  else if (c8 == x && c7 != s)
		c7 = s;
		  else if (c4 == x && c7 != s)
		c7 = s;
		  else if (c5 != 'x' && c5 != 'o')
		c5 = s;
		  else c4 = s;
		break;
	}
}
bool check_win(char x, char s)
{
	return win_x(x) || win_o(s);
}
bool win_x(char x)
{
	bool x1 = (c1 == x && c2 == x && c3 == x);
	bool x2 = (c4 == x && c5 == x && c6 == x);
	bool x3 = (c7 == x && c8 == x && c9 == x);
	bool x4 = (c1 == x && c4 == x && c7 == x);
	bool x5 = (c2 == x && c5 == x && c8 == x);
	bool x6 = (c3 == x && c6 == x && c9 == x);
	bool x7 = (c1 == x && c5 == x && c9 == x);
	bool x8 = (c3 == x && c5 == x && c7 == x);
	if (x1 || x2 || x3 || x4 || x5 || x6 || x7 || x8)
	{
		return true;
	}
	else return false;
}
bool win_o(char x)
{
	bool x1 = (c1 == x && c2 == x && c3 == x);
	bool x2 = (c4 == x && c5 == x && c6 == x);
	bool x3 = (c7 == x && c8 == x && c9 == x);
	bool x4 = (c1 == x && c4 == x && c7 == x);
	bool x5 = (c2 == x && c5 == x && c8 == x);
	bool x6 = (c3 == x && c6 == x && c9 == x);
	bool x7 = (c1 == x && c5 == x && c9 == x);
	bool x8 = (c3 == x && c5 == x && c7 == x);
	if (x1 || x2 || x3 || x4 || x5 || x6 || x7 || x8)
	{
		return true;
	}
	else return false;
}
bool pcom(char s, char x)
{
	if (c7 == s && c3 == s)
	{
		if (c5 != x)
		{
			c5 = s;
			return true;
		}
		else return false;
	}
	if (c1 == s && c9 == s)
	{
		if (c5 != x)
		{
			c5 = s;
			return true;
		}
		else return false;
	}
	if (c3 == s && c9 == s)
	{
		if (c6 != x)
		{
			c6 = s;
			return true;
		}
		else return false;
	}
	if (c2 == s && c8 == s)
	{
		if (c5 != x)
		{
			c5 = s;
			return true;
		}
		else return false;
	}
	if (c1 == s && c7 == s)
	{
		if (c4 != x)
		{
			c4 = s;
			return true;
		}
		else return false;
	}
	if (c9 == s && c7 == s)
	{
		if (c8 != x)
		{
			c8 = s;
			return true;
		}
		else return false;
	}
	if (c4 == s && c6 == s)
	{
		if (c5 != x)
		{
			c5 = s;
			return true;
		}
		else return false;
	}
	if (c1 == s && c3 == s)
	{
		if (c2 != x)
		{
			c2 = s;
			return true;
		}
		else return false;
	}
	if (c1 == s && c3 == s)
	{
		if (c2 != x)
		{
			c2 = s;
			return true;
		}
		else return false;
	}
	if (c1 == s && c2 == s)
	{
		if (c3!=x)
		{
			c3 = s;
			return true;
		}
		else return false;
		
	}
	else if (c4 == s && c5 == s)
	{
		if (c6 != x)
		{
			c6 = s;
			return true;
		}
		else return false;
		
	}
	else if (c7 == s && c8 == s)
	{
		if (c9 != x)
		{
			c9 = s;
			return true;
		}
		else return false;
		
	}
	else if (c4 == s && c1 == s)
	{
		if (c7 != x)
		{
			c7 = s;
			return true;
		}
		else return false;
		
	}
	else if (c2 == s && c5 == s)
	{
		if (c8 != x)
		{
			c8 = s;
			return true;
		}
		else return false;
		
	}
	else if (c3 == s && c6 == s)
	{
		if (c9 != x)
		{
			c9 = s;
			return true;
		}
		else return false;
		
	}
	else if (c3 == s && c2 == s)
	{
		if (c1 != x)
		{
			c1 = s;
			return true;
		}
		else return false;
		
	}
	else if (c6 == s && c5 == s)
	{
		if (c4 != x)
		{
			c4 = s;
			return true;
		}
		else return false;
		
	}
	else if (c9 == s && c8 == s)
	{
		if (c7 != x)
		{
			c7 = s;
			return true;
		}
		else return false;
		
	}
	else if (c9 == s && c6 == s)
	{
		if (c3 != x)
		{
			c3 = s;
			return true;
		}
		else return false;
		
	}
	else if (c8 == s && c5 == s)
	{
		if (c2 != x)
		{
			c2 = s;
			return true;
		}
		else return false;
		
	}
	else if (c7 == s && c4 == s)
	{
		if (c1 != x)
		{
			c1 = s;
			return true;
		}
		else return false;
		
	}
	else if (c1 == s && c5 == s)
	{
		if (c9 != x)
		{
		  c9 = s;
		  return true;
		}
		else  return false; 
		
	}
	else if (c9 == s && c5 == s)
	{
		if (c1 != x)
		{
			c1 = s;
			return true;
		}
		else  return false;
		
	}
	else if (c7 == s && c5 == s)
	{
		if (c3 != x)
		{
			c3 = s;
			return true;
		}
		else  return false; 
		
	}
	else if (c3 == s && c5 == s)
	{
		if (c7 != x)
		{
			c7 = s;
			return true;
		}
		else return false;
		
	}
	else return false;
}