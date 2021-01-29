#include<iostream>
#include<io.h>
#include<fcntl.h>
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;
void computer_get_first(int, int);
void computer_counter();
void switch_rank(int);
void poker_p();
void poker_o();
void poker_k();
void poker_e();
void poker_r();
void poker_poker();
void start_page1();
void start_page2();
void experience();
void win();
void lose();
int deck[52];
void shuffle(int deck[52]);
void card(int poker);
void divide( int deck[ 52 ]);
void outputcom( int [] );
void outputcom1( int [], int );
int who_start();
void if_cp_first();
void select(int *);
void valid_play();
void permanant();
int rule(int *,int *);
int rule_cont(int *,int *);
int if_you_first(int *);
int player1[ 13 ];
int player2[ 13 ];
int player3[ 13 ];
int player4[ 13 ];
int computer[13];
int output[5]={-1,-1,-1,-1,-1};
int cp[5]={-1,-1,-1,-1,-1};
int s[5]={-1,-1,-1,-1,-1};
int s1[5]={-1,-1,-1,-1,-1};
int computer_card_counter=13;
int player_card_counter=13;
int time_counter=20;

char c;
void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}
void SetColor(int color = 7)
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole,color);
}
int main()
{
	int starter = 0, computerfirst, test = 0, player_pass=0;
	system("color F0");
	
	while(1)
	{
		if(kbhit())
		{
			getch();
			break;
        }
        SetColor(251);
        gotoxy(83,22);
		cout<<"tap to start";
		SetColor(11);
		start_page1();
		_sleep(100);
		poker_poker();
		
		SetColor(253);
        gotoxy(83,22);
		cout<<"tap to start";
		SetColor(13);
		start_page1();
		_sleep(100);
		poker_poker();
		
		SetColor(254);
        gotoxy(83,22);
		cout<<"tap to start";
		SetColor(14);
		start_page1();
		_sleep(100);
		poker_poker();
	}
	system("cls");
	system("color F0");
	SetColor(249);
	start_page2();
	system("cls");
    for(int i=0;i<52;i++)
    	deck[ i ] = i + 1;
	shuffle(deck);
	divide(deck);
	who_start();				
	if( computer[ 0 ] == 1)
	{
		computer_get_first(computerfirst,test);
		computer_counter();	
	}
	while(1)
	{
		if(player_pass==1)
		{
			computer_get_first(computerfirst,test);
			computer_counter();
			if(computer_card_counter==0)
			{
				system("cls");
				break;			
			}
		}
		permanant();
		select(&player_pass);
		if(player_pass==1)
			continue;
		if(player_card_counter==0)
			break;			
		outputcom(computer);
		computer_counter();
		if(computer_card_counter==0)
		{
			system("cls");
			break;			
		}	
	}
	if(player_card_counter==0)
	{
		system("cls");
		gotoxy(30,12);
		win();
	}	
	if(computer_card_counter==0)
	{
		system("cls");
		gotoxy(30,12);
		lose();
	}

	experience();

	return 0;
}
//P
void poker_p()
{
	gotoxy(39,30);
	cout<<"■■■■■■■   "<<endl;
	gotoxy(39,31);
	cout<<"■■■■■■■■   "<<endl;
	gotoxy(39,32);
	cout<<"■■  "<<endl;
	gotoxy(51,32);
	cout<<"■■  "<<endl;
	gotoxy(39,33);
	cout<<"■■   "<<endl;
	gotoxy(51,33);
	cout<<"■■    "<<endl;
	gotoxy(39,34);
	cout<<"■■   "<<endl;
	gotoxy(51,34);
	cout<<"■■  "<<endl;	
	gotoxy(39,35);
	cout<<"■■■■■■■■ "<<endl;
	gotoxy(39,36);
	cout<<"■■■■■■■  "<<endl;
	gotoxy(39,37);
	cout<<"■■    "<<endl;
	gotoxy(39,38);
	cout<<"■■  "<<endl;
	gotoxy(39,39);
	cout<<"■■   "<<endl;
	gotoxy(39,40);
	cout<<"■■  "<<endl;
}
//O
void poker_o()
{
	gotoxy(61,30);
	cout<<"■■■■■■■    "<<endl;
	gotoxy(60,31);
	cout<<"■■■■■■■■  "<<endl;
	gotoxy(60,32);
	cout<<"■■    "<<endl;
	gotoxy(72,32);
	cout<<"■■   "<<endl;
	gotoxy(60,33);
	cout<<"■■   "<<endl;
	gotoxy(72,33);
	cout<<"■■   "<<endl;
	gotoxy(60,34);
	cout<<"■■    "<<endl;
	gotoxy(72,34);
	cout<<"■■   "<<endl;
	gotoxy(60,35);
	cout<<"■■   "<<endl;
	gotoxy(72,35);
	cout<<"■■  "<<endl;
	gotoxy(60,36);
	cout<<"■■  "<<endl;
	gotoxy(72,36);
	cout<<"■■    "<<endl;
	gotoxy(60,37);
	cout<<"■■   "<<endl;
	gotoxy(72,37);
	cout<<"■■   "<<endl;
	gotoxy(60,38);
	cout<<"■■    "<<endl;
	gotoxy(72,38);
	cout<<"■■    "<<endl;
	gotoxy(60,39);
	cout<<"■■■■■■■■  "<<endl;
	gotoxy(61,40);
	cout<<"■■■■■■■  "<<endl;
}
//E
void poker_e()
{
	gotoxy(103,30);
	cout<<"■■■■■■■■    "<<endl;
	gotoxy(103,31);
	cout<<"■■■■■■■■   "<<endl;
	gotoxy(103,32);
	cout<<"■■    "<<endl;
	gotoxy(103,33);
	cout<<"■■      "<<endl;
	gotoxy(103,34);
	cout<<"■■■■■■■■    "<<endl;
	gotoxy(103,35);
	cout<<"■■■■■■■■  "<<endl;
	gotoxy(103,36);
	cout<<"■■    "<<endl;
	gotoxy(103,37);
	cout<<"■■      "<<endl;
	gotoxy(103,38);
	cout<<"■■       "<<endl;
	gotoxy(103,39);
	cout<<"■■■■■■■■ "<<endl;
	gotoxy(103,40);
	cout<<"■■■■■■■■   "<<endl;
}
//K
void poker_k()
{
	gotoxy(81,30);
	cout<<"■■     "<<endl;
	gotoxy(93,30);
	cout<<"■■    "<<endl;
	gotoxy(81,31);
	cout<<"■■  "<<endl;
	gotoxy(92,31);
	cout<<"■■  "<<endl;
	gotoxy(81,32);
	cout<<"■■   "<<endl;
	gotoxy(91,32);
	cout<<"■■      "<<endl;
	gotoxy(81,33);
	cout<<"■■   "<<endl;
	gotoxy(90,33);
	cout<<"■■   "<<endl;
	gotoxy(81,34);
	cout<<"■■    "<<endl;
	gotoxy(89,34);
	cout<<"■■  "<<endl;	
	gotoxy(81,35);
	cout<<"■■  ■■   "<<endl;
	gotoxy(81,36);
	cout<<"■■■■■■    "<<endl;
	gotoxy(81,37);
	cout<<"■■■  "<<endl;
	gotoxy(90,37);
	cout<<"■■  "<<endl;
	gotoxy(81,38);
	cout<<"■■   "<<endl;
	gotoxy(91,38);
	cout<<"■■  "<<endl;
	gotoxy(81,39);
	cout<<"■■    "<<endl;
	gotoxy(92,39);
	cout<<"■■  "<<endl;
	gotoxy(81,40);
	cout<<"■■   "<<endl;
	gotoxy(93,40);
	cout<<"■■    "<<endl;
}
//R
void poker_r()
{
	gotoxy(124,30);
	cout<<"■■■■■■■  "<<endl;
	gotoxy(124,31);
	cout<<"■■■■■■■■   "<<endl;
	gotoxy(124,32);
	cout<<"■■    "<<endl;
	gotoxy(136,32);
	cout<<"■■  "<<endl;
	gotoxy(124,33);
	cout<<"■■    "<<endl;
	gotoxy(136,33);
	cout<<"■■   "<<endl;
	gotoxy(124,34);
	cout<<"■■■■■■■■  "<<endl;
	gotoxy(124,35);
	cout<<"■■■■■■■  "<<endl;
	gotoxy(124,36);
	cout<<"■■   "<<endl;
	gotoxy(133,36);
	cout<<"■■  "<<endl;
	gotoxy(124,37);
	cout<<"■■  "<<endl;
	gotoxy(134,37);
	cout<<"■■   "<<endl;
	gotoxy(124,38);
	cout<<"■■   "<<endl;
	gotoxy(135,38);
	cout<<"■■   "<<endl;
	gotoxy(124,39);
	cout<<"■■    "<<endl;
	gotoxy(137,39);
	cout<<"■■  "<<endl;
	gotoxy(124,40);
	cout<<"■■     "<<endl;
	gotoxy(138,40);
	cout<<"■■   "<<endl;
}
//POKER
void poker_poker()
{
	SetColor(11);
    poker_r();
    SetColor(12);
	poker_e();
	SetColor(13);
	poker_k();
	SetColor(14);
	poker_o();
	SetColor(15);
	poker_p();
	_sleep(200);
	
	SetColor(12);
    poker_r();
    SetColor(13);
	poker_e();
	SetColor(14);
	poker_k();
	SetColor(15);
	poker_o();
	SetColor(11);
	poker_p();
	_sleep(200);
	
	SetColor(13);
    poker_r();
    SetColor(14);
	poker_e();
	SetColor(15);
	poker_k();
	SetColor(11);
	poker_o();
	SetColor(12);
	poker_p();
	_sleep(200);
	
	SetColor(14);
    poker_r();
    SetColor(15);
	poker_e();
	SetColor(11);
	poker_k();
	SetColor(12);
	poker_o();
	SetColor(13);
	poker_p();
	_sleep(200);
	
	SetColor(15);
    poker_r();
    SetColor(11);
	poker_e();
	SetColor(12);
	poker_k();
	SetColor(13);
	poker_o();
	SetColor(14);
	poker_p();
	_sleep(200);
}
//開始介面 1
void start_page1()
{
	gotoxy(47,10);
	cout<<"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"<<endl;
	gotoxy(47,11);
	cout<<"■                                                                            ■"<<endl;
	gotoxy(47,12);
	cout<<"■ ■        ■ ■■■■ ■        ■■■■    ■■■■   ■      ■ ■■■■ ■"<<endl;
	gotoxy(47,13);
	cout<<"■ ■   ■   ■ ■       ■       ■      ■  ■      ■  ■■  ■■ ■       ■"<<endl;
	gotoxy(47,14);
	cout<<"■ ■  ■■  ■ ■■■■ ■       ■         ■        ■ ■ ■■ ■ ■■■■ ■"<<endl;
	gotoxy(47,15);
	cout<<"■ ■ ■  ■ ■ ■       ■       ■      ■  ■      ■  ■  ■  ■ ■       ■"<<endl;
	gotoxy(47,16);
	cout<<"■  ■      ■  ■■■■ ■■■■  ■■■■    ■■■■   ■      ■ ■■■■ ■"<<endl;
	gotoxy(47,17);
	cout<<"■                                                                            ■"<<endl;
	gotoxy(47,18);
	cout<<"■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"<<endl;
	
}
//開始介面 2
void start_page2()
{
	int m,n,p;
	srand(time(0));
	gotoxy(0,5);
	cout<<"         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ 規則 ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"<<endl<<endl;
	cout<<"                                                                             自己去Google啦!!!";
	while(1)
	{
	if(kbhit())
	{
		getch();
		break;
    }
	m=rand()%152;
	n=rand()%30;
	p=rand()%5;
	gotoxy(9+m,9+n);
	SetColor(250+p);
	cout<<"哈";
	_sleep(50);
	cout<<"  ";
	}
}
//洗牌
void shuffle(int deck[52])
{
	srand(time(0));
	for(int j=0;j<100;j++)
	{
	
	for(int i=0;i<52;i++){
		int r=i+rand()%(52-i);
		int swap=deck[i];
		deck[i]=deck[r];
		deck[r]=swap;
	}
}
}
//分配各玩家的牌
void divide( int deck[ 52 ] )
{
	for( int i = 0 ; i < 52 ; i++ )
	{
		if( i < 13 )
			player1[ i ] = deck[ i ];
		else if( i >= 13 && i < 26 )
			player2[ ( i % 13 ) ] = deck[ i ];
		else if( i >= 26 && i < 39 )
			player3[ ( i % 13 ) ] = deck[ i ];
		else if( i >= 39 && i < 52 )
			player4[ ( i % 13 ) ] = deck[ i ];
	}
	for(int i=1;i<13;i++){
		int insert;
		int j=i;
		insert=player1[i];
		while(j>0 && player1[j-1]>insert){
			player1[j]=player1[j-1];
			j--;
		}
		player1[j]=insert;
	}
	for(int i=1;i<13;i++){
		int insert;
		int j=i;
		insert=player2[i];
		while(j>0 && player2[j-1]>insert){
			player2[j]=player2[j-1];
			j--;
		}
		player2[j]=insert;
	}
	for(int i=1;i<13;i++){
		int insert;
		int j=i;
		insert=player3[i];
		while(j>0 && player3[j-1]>insert){
			player3[j]=player3[j-1];
			j--;
		}
		player3[j]=insert;
	}
	for(int i=1;i<13;i++){
		int insert;
		int j=i;
		insert=player4[i];
		while(j>0 && player4[j-1]>insert){
			player4[j]=player4[j-1];
			j--;
		}
		player4[j]=insert;
	}


	/*for(int i=0;i<13;i++)
		cout<<setw(3)<<player1[i];
		cout<<endl<<endl;
	for(int i=0;i<13;i++)
		cout<<setw(3)<<player2[i];
		cout<<endl<<endl;
	for(int i=0;i<13;i++)
		cout<<setw(3)<<player3[i];
		cout<<endl<<endl;
	for(int i=0;i<13;i++)
		cout<<setw(3)<<player4[i];
		cout<<endl<<endl;*/
}
//輸出牌
void card(int poker)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
		if(poker != 0 && poker != -1 ){
			switch(poker%4){
			case 0:
				SetColor(240);
				wcout<<L"\u2660";break;
			case 1:
				SetColor(240);
				wcout<<L"\u2663";break;
			case 2:
				SetColor(252);
				wcout<<L"\u2666";break;
			default:
				SetColor(252);
				wcout<<L"\u2665";break;
			}

		switch((poker-1)/4){
			case 1:
				wcout<<left<<setw(3)<<"4";break;
			case 2:
				wcout<<left<<setw(3)<<"5";break;
			case 3:
				wcout<<left<<setw(3)<<"6";break;
			case 4:
				wcout<<left<<setw(3)<<"7";break;
			case 5:
				wcout<<left<<setw(3)<<"8";break;
			case 6:
				wcout<<left<<setw(3)<<"9";break;
			case 7:
				wcout<<left<<setw(3)<<"10";break;
			case 8:
				wcout<<left<<setw(3)<<"J";break;
			case 9:
				wcout<<left<<setw(3)<<"Q";break;
			case 10:
				wcout<<left<<setw(3)<<"K";break;
			case 11:
				wcout<<left<<setw(3)<<"A";break;
			case 12:
				wcout<<left<<setw(3)<<"2";break;
			case 0:
				wcout<<left<<setw(3)<<"3";break;
			}
		}
		else
			wcout<<setw(5)<<" ";
}
//選牌出牌
void select(int *pass)
{
	SetColor(240);
	int row1[13], row2[13];
	*pass=0;
	time_counter=20;
	for(int i=0;i<13;i++)
	{
		row1[i]=player1[i];
		row2[i]=-1;
	}
	for(int i=0;i<5;i++)
		s[i]=-1;
	int x=0,counter=0;
	gotoxy(39,22);
	for(int i=0;i<x;i++)
		card(row1[i]);
	gotoxy(39+(x+1)*5,22);
	for(int i=x+1;i<13;i++)
		card(row1[i]);
	gotoxy(39,23);
	for(int i=0;i<13;i++)
		card(row2[i]);
	gotoxy(39+x*5,23);
	card(player1[x]);
	gotoxy(39+x*5,23);
	

	while(1)
	{
		
		c=getch();
		if(c=='d' && x<player_card_counter-1){
			for(int i=0;i<5;i++)
				s[i]=-1;
			system("cls");
			permanant();
			x++;
			gotoxy(39,22);
			for(int i=0;i<x;i++)
				card(row1[i]);
			gotoxy(39+(x+1)*5,22);
			for(int i=x+1;i<13;i++)
				card(row1[i]);
			gotoxy(39,23);
			for(int i=0;i<13;i++)
				card(row2[i]);
			gotoxy(39+x*5,23);
			card(player1[x]);
			gotoxy(39+x*5,23);
		}
			
		
			
		
		else if(c=='d' && x==player_card_counter-1){
			for(int i=0;i<5;i++)
				s[i]=-1;
			system("cls");
			permanant();
			x=0;
			gotoxy(39,22);
			for(int i=0;i<x;i++)
				card(row1[i]);
			gotoxy(39+(x+1)*5,22);
			for(int i=x+1;i<13;i++)
				card(row1[i]);
			gotoxy(39,23);
			for(int i=0;i<13;i++)
				card(row2[i]);
			gotoxy(39+x*5,23);
			card(player1[x]);
			gotoxy(39+x*5,23);
		}
		else if(c=='a' && x>0){
			for(int i=0;i<5;i++)
				s[i]=-1;
			system("cls");
			permanant();
			--x;
			gotoxy(39,22);
			for(int i=0;i<x;i++)
				card(row1[i]);
			gotoxy(39+(x+1)*5,22);
			for(int i=x+1;i<13;i++)
				card(row1[i]);
			gotoxy(39,23);
			for(int i=0;i<13;i++)
				card(row2[i]);
			gotoxy(39+x*5,23);
			card(player1[x]);
			gotoxy(39+x*5,23);
		}
		else if(c=='a' && x==0){
			for(int i=0;i<5;i++)
				s[i]=-1;
			system("cls");
			permanant();
			x=player_card_counter-1;
			gotoxy(39,22);
			for(int i=0;i<x;i++)
				card(row1[i]);
			gotoxy(39+(x+1)*5,22);
			for(int i=x+1;i<13;i++)
				card(row1[i]);
			gotoxy(39,23);
			for(int i=0;i<13;i++)
				card(row2[i]);
			gotoxy(39+x*5,23);
			card(player1[x]);
			gotoxy(39+x*5,23);
		}
		else if(c==' ' && counter<5 && row2[x]==-1){
			for(int i=0;i<5;i++)
				s[i]=-1;
			row1[x]=-1;
			row2[x]=player1[x];
			counter++;
		}
		else if(c==' ' && counter>0 && row2[x]!=-1){
			for(int i=0;i<5;i++)
				s[i]=-1;
			row2[x]=-1;
			row1[x]=player1[x];
			counter--;
		}
		else if(c=='c' && counter!=0)
		{
			counter=0;
			x=0;
			for(int i=0;i<13;i++)
			{
				row1[i]=player1[i];
				row2[i]=-1;
			}
			for(int i=0;i<5;i++)
				s[i]=-1;
			gotoxy(39,22);
		    for(int i=0;i<x;i++)
			    card(row1[i]);
			gotoxy(39+(x+1)*5,22);
			for(int i=x+1;i<13;i++)
				card(row1[i]);
			gotoxy(39,23);
			for(int i=0;i<13;i++)
				card(row2[i]);
			gotoxy(39+x*5,23);
			card(player1[x]);
			gotoxy(39+x*5,23);	
		}
		else if(c=='\r')
		{
			system("cls");
			permanant();
			gotoxy(39,22);
			for(int i=0;i<x;i++)
				card(row1[i]);
			gotoxy(39+(x+1)*5,22);
			for(int i=x+1;i<13;i++)
				card(row1[i]);
			gotoxy(39,23);
			for(int i=0;i<13;i++)
				card(row2[i]);
			gotoxy(39+x*5,23);
			card(player1[x]);
			gotoxy(39+x*5,23);
			for(int i=0,j=0;i<13;i++){
				if(row2[i]!=-1){
					s[j]=row2[i];
					j++;
				}
			}
			if(if_you_first(s)==0)
			{
				SetColor(249);
				gotoxy(54,19);
				wcout<<"You must play ";
				card(player1[0]);
				continue;
			}
			if(rule_cont(output,cp)==-1)
			{
				valid_play();
				break;
			}
			if(rule_cont(s,s1)>=rule_cont(output,cp) && rule_cont(s,s1)!=0 && rule_cont(s,s1)!=-1)
			{
					
					if(rule_cont(s,s1)==1)
					{
							if(rule_cont(output,cp)!=1)
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"Error! Please check the rule and select again.";
								continue;
							}
							else if(rule_cont(output,cp)==1 && output[0]>s1[0])
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"You need bigger rank.";
								continue;
							}
							else
							{
								valid_play();
								break;
							}
					}
					else if(rule_cont(s,s1)==2){
							if(rule_cont(output,cp)!=2 )
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"Error! Please check the rule and select again.";
								continue;
							}
							else if(rule_cont(output,cp)==1 && output[0]>s1[0])
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"You need bigger rank.";
								continue;
							}
							else
							{
								valid_play();
								break;
							}
					}
					else if(rule_cont(s,s1)==3){
					if(rule_cont(output,cp)<3)
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"Error! Please check the rule and select again.";
								continue;
							}
							else
							{
								if(rule_cont(output,cp)==3 && output[4]>s1[4])
								{
									SetColor(249);
									gotoxy(54,19);
									wcout<<"You need bigger rank.";
									continue;
								}
								else
								{
									valid_play();
									break;									
								}
							}
					}
					else if(rule_cont(s,s1)==4){
					if(rule_cont(output,cp)==4 && output[2]>s1[2])
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"You need bigger rank.";
								continue;
							}
							else
							{
								valid_play();
								break;
							}
					}
					else if(rule_cont(s,s1)==5){
					if(rule_cont(output,cp)==5 && output[2]>s1[2])
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"You need bigger rank.";
								continue;
							}
							else
							{
								valid_play();
								break;
							}
					}
					else if(rule_cont(s,s1)==6){
					if(rule_cont(output,cp)==6 && output[4]>s1[4])
							{
								SetColor(249);
								gotoxy(54,19);
								wcout<<"You need bigger rank.";
								continue;
							}
							else
							{
								valid_play();
								break;									
							}
					}
				
			}
			else if(rule_cont(s,s1)==0)
			{
				SetColor(249);
				gotoxy(54,19);
				wcout<<"Error! Please check the rule and select again.";
				continue;
			}
			else if(rule_cont(s,s1)==-1)
			{
				*pass=1;
				SetColor(249);
				gotoxy(39,19);
				wcout<<"Player pass.";
				/*gotoxy(39+x*7,15);
				wcout<<"    ";*/
				gotoxy(39,22);
				SetColor(240);
				wcout<<"    ";
				break;
			}
			else
			{
			SetColor(249);
			gotoxy(54,19);
				wcout<<"Error! Please check the rule and select again.";
				continue;				
			}
		}
	}

}
//牌型
int rule(int *a,int *a1)
{
	if(if_you_first==0)
		return 0;
	for(int i=0;i<5;i++)
		a1[i]=a[i];
	for(int i=0;i<5;i++){
		if(a[i]!=-1){
		switch((a[i]-1)/4){
		case 0:a[i]=3;break;
		case 1:a[i]=4;break;
		case 2:a[i]=5;break;
		case 3:a[i]=6;break;
		case 4:a[i]=7;break;
		case 5:a[i]=8;break;
		case 6:a[i]=9;break;
		case 7:a[i]=10;break;
		case 8:a[i]=11;break;
		case 9:a[i]=12;break;
		case 10:a[i]=13;break;
		case 11:a[i]=1;break;
		case 12:a[i]=2;break;
		}
		}
	}
	/*for(int i=0;i<5;i++)
	wcout<<a[i];*/
	if(a[0]==-1)
		return -1;
	else if(a[1]==a[0]){
		if(a[2]==-1)
			return 2;
		else{
			if(a[3]==-1)
				return 0;
			else if(a[2]==a[1]){
				if(a[4]==-1)
					return 0;
				else if(a[3]==a[2]){
					if(a[4]==a[3])
						return 0;
					else
						return 5;
				}
				else{
					if(a[4]==a[3])
						return 4;
					else if(a[4]==a[2])
						return 5;
					else
						return 0;
				}
			}
			else{
				if(a[4]==-1)
					return 0;
				else if(a[3]==a[2]){
					if(a[4]==a[3])
						return 4;
					else if(a[4]==a[1])
						return 5;
					else
						return 0;
				}
				else if(a[3]==a[1]){
					if(a[4]==a[3])
						return 5;
					else if(a[4]==a[2])
						return 4;
					else
						return 0;
				}
				else
					return 0;
			}
		}
	}
	else{
		if(a[1]==-1)
			return 1;
		else{
			if(a[2]==-1)
				return 0;
			else{
				if(a[3]==-1)
					return 0;
				else if(a[2]==a[1]){
					if(a[4]==-1)
						return 0;
					else if(a[3]==a[2]){
						if(a[4]==a[3])
							return 5;
						else if(a[4]==a[0])
							return 4;
						else
							return 0;
					}
					else if(a[3]==a[0]){
						if(a[4]!=a[3] && a[4]!=a[2])
							return 0;
						else
							return 4;
					}
					else
						return 0;
				}
				else if(a[2]==a[0]){
					if(a[4]==-1)
						return 0;
					else if(a[3]==a[2]){
						if(a[4]==a[3])
							return 5;
						else if(a[4]==a[1])
							return 4;
						else
							return 0;
					}
					else if(a[3]==a[1]){
						if(a[4]!=a[3] && a[4]!=a[2])
							return 0;
						else
							return 4;
					}
					else
						return 0;
				}
				else{
					if(a[3]!=a[0] && a[3]!=a[1] && a[3]!=a[2]){
						if(a[4]!=a[0] && a[4]!=a[1] && a[4]!=a[2] && a[4]!=a[3]){
							for(int i=0;i<5;i++){
								for(int j=0;j<5;j++){
									if(a[i]<a[j])
										swap(a[i],a[j]);
								}
							}
							if(a[4]==a[3]+1 && a[3]==a[2]+1 && a[2]==a[1]+1 && a[1]==a[0]+1){
								if(a1[4]%4==a1[3]%4 && a1[3]%4==a1[2]%4 && a1[2]%4==a1[1]%4 && a1[1]%4==a1[0]%4)
									return 6;
								else
									return 3;
						 	}

							else if(a[4]==a[3]+1 && a[3]==a[2]+1 && a[2]==a[1]+1 && a[1]==a[0]+9)
								if(a1[4]%4==a1[3]%4 && a1[3]%4==a1[2]%4 && a1[2]%4==a1[1]%4 && a1[1]%4==a1[0]%4)
									return 6;
								else
									return 3;
							else
								return 0;
						}
						else
							return 0;
					}
					else
						return 0;
				}
			}
		}
	}
}
//牌型CONT.
int rule_cont(int *a,int *a1)
{
	int r=rule(a,a1);
	for(int i=0;i<5;i++)
		a[i]=a1[i];
	return r;
}
//玩家拿到梅花3
int if_you_first(int *s)
{
	for(int i=0;i<13;i++)
	{
		if(player1[i]==1 )
		{
			if(s[4]!=1 && s[3]!=1 && s[2]!=1 && s[1]!=1 && s[0]!=1)
			return 0;
		}
		else 
		continue;
			
	}
	
		return 1;
}
//誰有梅花3
int who_start()
{
	for(int i=0;i<52;i++)
	{
		if(deck[i]==1)
		{
			switch(i/13)
			{
				case 0: for(int i=0;i<13;i++)
				 		{
				 			computer[i]=player2[i];
						}
						return 1;
				case 1:
						for(int i=0;i<13;i++)
				 		{
				 			computer[i]=player2[i];
						}
						return 2;
				case 2:
						for(int i=0;i<13;i++)
				 		{
				 			computer[i]=player3[i];
						}
						return 3;
				case 3:
						for(int i=0;i<13;i++)
				 		{
				 			computer[i]=player4[i];
						}
						return 4;
			}
		}
	}
	return 0;
}
//電腦出牌
void outputcom( int computer[] )
{
    int suit, num, suit2, num2, suits, nums, counter, counter2, sumotput = 0, suminput = 0, temp;
    for( int i = 0 ; i <= 4 ; i++ )
    {
        output[ i ] = -1;
    }
    switch(rule_cont( s ,s1))
	{
    case 6:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            suit = computer[ i ] % 4;
            num = (computer[ i ] - 1) / 4;
            counter = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    suit2 = computer[ j ] % 4;
                    num2 = (computer[ j ] - 1) / 4;
                    if( suit == suit2 && ( num + 1 + counter ) == num2 && output[ 4 ] == -1 && computer[ j ] != -1 )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++ ;
                    }
                if( counter == 4 )
                {
                    output[ 0 ] = computer[ i ];
                    break;
                }
            }
            if( output[ 4 ] > s1[ 4 ] )
                break;
            else if( counter == 4 )
                break;
        }
        if( counter != 4 )
        {
            for( int i = 0 ; i <= 4 ; i++ )
            {
                output[ i ] = -1;
            }
        }
    break;
    case 5:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            num = (computer[ i ] - 1) / 4;
            nums = (s1[ 1 ] - 1) / 4;
            counter = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    num2 = (computer[ j ] - 1) / 4;
                    if( num == num2 && output[ 3 ] == -1 && computer[ j ] != -1 && num > nums )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++;
                    }
                    if( counter == 3 )
                    {
                        output[ 0 ] = computer[ i ];
                        break;
                    }
            }
            if( counter == 3 )
            {
                temp = 0;
                for( int k = 0 ; k < i ; k++ )
                {
                    if( computer[ k ] != -1 )
                    {
                        temp = computer[ k ];
                        break;
                    }
                    else
                        temp = 0;
                }
                if( temp == 0 )
                    temp = computer[ i + 4 ];
                output[ 4 ] = temp;
                break;
            }
        }
        if( counter != 3 )
        {
            for( int i = 0 ; i <= 4 ; i++ )
            {
                output[ i ] = -1;
            }
        }
    break;
    case 4:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            num = (computer[ i ] - 1) / 4;
            nums = (s1[ 1 ] - 1) / 4;
            counter = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    num2 = (computer[ j ] - 1) / 4;
                    if( num == num2 && output[ 2 ] == -1 && computer[ j ] != -1 && num > nums )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++;
                    }
                    if( counter == 2 )
                    {
                        output[ 0 ] = computer[ i ];
                        break;
                    }
            }
            if( counter == 2 )
            {
                counter2 = 0;
                for( int k = 0 ; k < i ; k++ )
                {
                    num = (computer[ k ] - 1) / 4;
                    num2 = (computer[ k + 1 ] - 1) / 4;
                    temp = 0;
                    if( num == num2 && computer[ k ] != -1 && computer[ k + 1 ] != -1 )
                    {
                        output[ 3 ] = computer[ k ];
                        output[ 4 ] = computer[ k + 1 ];
                        temp = 1;
                        break;
                    }
                }
                if( temp != 1 )
                {
                    for( int k = ( i + 3 ) ; k <= 12 ; k++ )
                    {
                        num = (computer[ k ] - 1) / 4;
                        num2 = (computer[ k + 1 ] - 1) / 4;
                        temp = 0;
                        if( num == num2 && computer[ k ] != -1 && computer[ k + 1 ] != -1 )
                        {
                            output[ 3 ] = computer[ k ];
                            output[ 4 ] = computer[ k + 1 ];
                            temp = 1;
                            break;
                        }
                    }
                }
                if( num == num2 )
                {
                    break;
                }
            }
        }
        if( counter != 2 || temp != 1 )
        {
            for( int i = 0 ; i <= 4 ; i++ )
            {
                output[ i ] = -1;
            }
        }
    break;
    case 3: 
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            suit = (computer[ i ] - 1) % 4;
            num = (computer[ i ] - 1) / 4;
            nums = (s1[ 0 ] - 1) / 4;
            suits = (s1[ 4 ] - 1) % 4;
            counter = 0;
            temp = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    suit2 = (computer[ j ] - 1) % 4;
                    num2 = (computer[ j ] - 1) / 4;
                    if( counter == 3 && num == nums && suit2 < suits && num2 == 12 )
                    {
                        temp = -2;
                    }
                    if( ( num + 1 + counter ) == num2 && output[ 4 ] == -1 && computer[ j ] != -1 && num >= nums && temp != -2 )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++;
                    }
                if( counter == 4 )
                {
                    output[ 0 ] = computer[ i ];
                    break;
                }
            }
            if( counter == 4 )
                break;

            for( int i = 0 ; i <= 4 ; i++ )
                {
                    output[ i ] = -1;
                }
        }

    break;
    case 2:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            suit = (computer[ i ] -1) % 4;
            num = (computer[ i ] - 1) / 4;
            suits = (s1[ 1 ] - 1) % 4;
            nums = (s1[ 0 ] - 1) / 4;
            temp = 0;
            for( int j = 1 ; j <= 3 ; j++ )
            {
                suit2 = (computer[ i + j ] - 1) % 4;
                num2 = (computer[ i + j ] - 1) / 4;
                if( num == nums && suit2 < suits )
                    {
                        temp = -2;
                    }
                    //cout << num << num2 << nums << temp << endl;
                if( num == num2 && output[ 1 ] == -1 && computer[ i + j ] != -1 && num >= nums && temp != -2 )
                    {
                        output[ 0 ] = computer[ i ];
                        output[ 1 ] = computer[ i + j ];
                        break;
                    }
            }
            if( output[ 1 ] != -1 )
                break;
        }
    break;
    case 1:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            if(computer[ i ] > s1[ 0 ] )
            {
                output[ 0 ] = computer[ i ];
                break;
            }
            else 
				continue;
        }
    break;
	}
    for( int i = 0 ; i <= 4 ; i++ )
    {
        for( int k = 0 ; k <= 12 ; k++ )
        {
            if( output[ i ] == computer[ k ])
            {
                computer[ k ] = -1;
            }
        }
    }
    for(int i=0;i<13;i++)
    	{
    		if(computer[i]==-1)
   			{
    			for(int j=i;j<13;j++)
  				{
    				if(computer[j]!=-1)
    				{
    					swap(computer[i],computer[j]);
    					break;
    				}
				}
			}
		}
}
//如果電腦先出的判斷
void outputcom1( int computer[], int computerfirst )
{
    int suit, num, suit2, num2, suits, nums, counter, counter2, sumotput = 0, suminput = 0, temp;
    for( int i = 0 ; i <= 4 ; i++ )
    {
        output[ i ] = -1;
    }
    switch(computerfirst)
	{
    case 6:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            suit = computer[ i ] % 4;
            num = (computer[ i ] - 1) / 4;
            counter = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    suit2 = computer[ j ] % 4;
                    num2 = (computer[ j ] - 1) / 4;
                    if( suit == suit2 && ( num + 1 + counter ) == num2 && output[ 4 ] == -1 && computer[ j ] != -1 )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++ ;
                    }
                if( counter == 4 )
                {
                    output[ 0 ] = computer[ i ];
                    break;
                }
            }
            if( output[ 4 ] > s1[ 4 ] )
                break;
            else if( counter == 4 )
                break;
        }
        if( counter != 4 )
        {
            for( int i = 0 ; i <= 4 ; i++ )
            {
                output[ i ] = -1;
            }
        }
    break;
    case 5:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            num = (computer[ i ] - 1) / 4;
            nums = (s1[ 1 ] - 1) / 4;
            counter = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    num2 = (computer[ j ] - 1) / 4;
                    if( num == num2 && output[ 3 ] == -1 && computer[ j ] != -1 && num > nums )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++;
                    }
                    if( counter == 3 )
                    {
                        output[ 0 ] = computer[ i ];
                        break;
                    }
            }
            if( counter == 3 )
            {
                temp = 0;
                for( int k = 0 ; k < i ; k++ )
                {
                    if( computer[ k ] != -1 )
                    {
                        temp = computer[ k ];
                        break;
                    }
                    else
                        temp = 0;
                }
                if( temp == 0 )
                    temp = computer[ i + 4 ];
                output[ 4 ] = temp;
                break;
            }
        }
        if( counter != 3 )
        {
            for( int i = 0 ; i <= 4 ; i++ )
            {
                output[ i ] = -1;
            }
        }
    break;
    case 4:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            num = (computer[ i ] - 1) / 4;
            nums = (s1[ 1 ] - 1) / 4;
            counter = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    num2 = (computer[ j ] - 1) / 4;
                    if( num == num2 && output[ 2 ] == -1 && computer[ j ] != -1 && num >= nums )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++;
                    }
                    if( counter == 2 )
                    {
                        output[ 0 ] = computer[ i ];
                        break;
                    }
            }
            if( counter == 2 )
            {
                counter2 = 0;
                for( int k = 0 ; k < i ; k++ )
                {
                    num = (computer[ k ] - 1) / 4;
                    num2 = (computer[ k + 1 ] - 1) / 4;
                    temp = 0;
                    if( num == num2 && computer[ k ] != -1 && computer[ k + 1 ] != -1 )
                    {
                        output[ 3 ] = computer[ k ];
                        output[ 4 ] = computer[ k + 1 ];
                        temp = 1;
                        break;
                    }
                }
                if( temp != 1 )
                {
                    for( int k = ( i + 3 ) ; k <= 12 ; k++ )
                    {
                        num = (computer[ k ] - 1) / 4;
                        num2 = (computer[ k + 1 ] - 1) / 4;
                        temp = 0;
                        if( num == num2 && computer[ k ] != -1 && computer[ k + 1 ] != -1 )
                        {
                            output[ 3 ] = computer[ k ];
                            output[ 4 ] = computer[ k + 1 ];
                            temp = 1;
                            break;
                        }
                    }
                }
                if( num == num2 )
                {
                    break;
                }
            }
        }
        if( counter != 2 || temp != 1 )
        {
            for( int i = 0 ; i <= 4 ; i++ )
            {
                output[ i ] = -1;
            }
        }
    break;
    case 3: 
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            suit = (computer[ i ] - 1) % 4;
            num = (computer[ i ] - 1) / 4;
            nums = (s1[ 0 ] - 1) / 4;
            suits = (s1[ 4 ] - 1) % 4;
            counter = 0;
            temp = 0;
            for( int j = 0 ; j <= 12 ; j++ )
            {
                if( j == i )
                    continue;
                else
                    suit2 = (computer[ j ] - 1) % 4;
                    num2 = (computer[ j ] - 1) / 4;
                    if( counter == 3 && num == nums && suit2 < suits && num2 == 12 )
                    {
                        temp = -2;
                    }
                    if( ( num + 1 + counter ) == num2 && output[ 4 ] == -1 && computer[ j ] != -1 && num >= nums && temp != -2 )
                    {
                        output[ counter + 1 ] = computer[ j ];
                        counter++;
                    }
                if( counter == 4 )
                {
                    output[ 0 ] = computer[ i ];
                    break;
                }
            }
            if( counter == 4 )
                break;

            for( int i = 0 ; i <= 4 ; i++ )
                {
                    output[ i ] = -1;
                }
        }

    break;
    case 2:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            suit = (computer[ i ] -1) % 4;
            num = (computer[ i ] - 1) / 4;
            suits = (s1[ 1 ] - 1) % 4;
            nums = (s1[ 0 ] - 1) / 4;
            temp = 0;
            for( int j = 1 ; j <= 4 ; j++ )
            {
                suit2 = (computer[ i + j ] - 1) % 4;
                num2 = (computer[ i + j ] - 1) / 4;
                if( num == nums && suit2 < suits )
                    {
                        temp = -2;
                    }
                    //cout << num << num2 << nums << temp << endl;
                if( num == num2 && output[ 1 ] == -1 && computer[ i + j ] != -1 && num >= nums && temp != -2 )
                    {
                        output[ 0 ] = computer[ i ];
                        output[ 1 ] = computer[ i + j ];
                        break;
                    }
            }
            if( output[ 1 ] != -1 )
                break;
        }
    break;
    case 1:
    
        for( int i = 0 ; i <= 12 ; i++ )
        {
            if(computer[ i ] > s1[ 0 ] )
            {
                output[ 0 ] = computer[ i ];
                break;
            }
            else 
				continue;
        }
    break;
	}

}
//rank
void switch_rank(int x)
{
		switch((x-1)/4){
		case 0:x=3;break;
		case 1:x=4;break;
		case 2:x=5;break;
		case 3:x=6;break;
		case 4:x=7;break;
		case 5:x=8;break;
		case 6:x=9;break;
		case 7:x=10;break;
		case 8:x=11;break;
		case 9:x=12;break;
		case 10:x=13;break;
		case 11:x=1;break;
		case 12:x=2;break;
		}
}
//成功出牌 
void valid_play()
{
		SetColor(240);
				gotoxy(39,22);
				wcout<<"     ";
				gotoxy(39,13);
				for(int k=0;k<5;k++)
					card(s[k]);
				gotoxy(39,15);
				SetColor(249);
				switch(rule_cont(s,s1))
				{
				case 6: wcout<<"Straight Flush!!! Skr~Skr~";
						player_card_counter=player_card_counter-5;
						break;
				case 5: wcout<<"Four of a Kind! Owesome~";
						player_card_counter=player_card_counter-5;
						break;
				case 4: wcout<<"Full House can't live in...";
						player_card_counter=player_card_counter-5;
						break;
				case 3: wcout<<"Straight to Victory!";
						player_card_counter=player_card_counter-5;
						break;
				case 2: wcout<<"Pair is eaviable.";
						player_card_counter=player_card_counter-2;
						break;
				case 1: wcout<<"Single like you.";
						player_card_counter=player_card_counter-1;
						break;
				case 0: wcout<<"Error! Please check the rule and select again.";
						break;
				}
				for( int i = 0 ; i <= 4 ; i++ )
    			{
        			for( int k = 0 ; k <= 12 ; k++ )
        			{
            			if( s[ i ] == player1[ k ])
            			{
                			player1[ k ] = -1;
            			}
        			}
    			}
    			for(int i=0;i<13;i++)
    			{
    				if(player1[i]==-1)
    				{
    					for(int j=i;j<13;j++)
    					{
    						if(player1[j]!=-1)
    						{
    							swap(player1[i],player1[j]);
    							break;
    						}
						}
					}
				}
}
//背景 
void permanant()
{
	int road_x=81,road_y=22;
	_setmode(_fileno(stdout), _O_TEXT);
	SetColor(249);
	gotoxy(62,30);
	cout<<"【 Operation 】";
	gotoxy(50,34);
	cout<<"'a' to left";
	gotoxy(75,34);	
	cout<<"'d' to right";	
	gotoxy(50,37);
	cout<<"space to select";
	gotoxy(75,37);	
	cout<<"enter to play";
	gotoxy(57,40);
	cout<<"'c' to cancel all select";
	SetColor(34);
	for(int i=11;i<22;i++)
	{
		gotoxy(33,i);
		cout<<"■"<<endl;
	}
	for(int i=11;i<22;i++)
	{
		gotoxy(115,i);
		cout<<"■"<<endl;
	}
	for(int i=33;i<116;i=i+2)
	{
		gotoxy(i,11);
		cout<<"■"<<endl;
	}
	for(int i=33;i<116;i=i+2)
	{
		gotoxy(i,21);
		cout<<"■"<<endl;
	}
	/*SetColor(98);
	for(int j=35;j<114;j=j+2)
	{
		
		for(int i=12;i<21;i++)
	{
		gotoxy(j,i);
		cout<<"  "<<endl;
	}
	}*/
	SetColor(240); 
	gotoxy(89,17);
	for(int i=0;i<5;i++)
		card(output[i]);
	SetColor(253);
	gotoxy(36,26);
	wcout<<"You have "<<player_card_counter<<" cards.";	
	SetColor(250);
	gotoxy(89,4);
	wcout<<"Computer has "<<computer_card_counter<<" cards.";
	
	gotoxy(89,8);
	SetColor(175);
	wcout<<" Computer ";
	gotoxy(89,7);
	wcout<<"          ";
	gotoxy(89,9);
	wcout<<"          ";
	gotoxy(39,8);
	SetColor(223);
	wcout<<"    You    ";
	gotoxy(39,7);
	wcout<<"           ";
	gotoxy(39,9);
	wcout<<"           ";
    SetColor(240);
    
	
	
/*	SetColor(33);
	for(int i=9;i<16;i++)
	{
		gotoxy(38,i);
		cout<<"                                                                                                ";
	}*/
	
	
	
	
	
}
//電腦先手
void computer_get_first(int computerfirst,int test)
{
	for(int j=6;j>=1;j--)
		{
			computerfirst = j;
			outputcom1(computer, computerfirst);
			for( int i = 0 ; i<= 4 ; i++ )
			{
				if( output[ i ] == computer[0] )
				test = 1;
			}
			if( test == 1 )
				break;
		}
		for( int i = 0 ; i <= 4 ; i++ )
    	{
        	for( int k = 0 ; k <= 12 ; k++ )
        	{
            	if( output[ i ] == computer[ k ])
            	{
                	computer[ k ] = -1;
            	}
        	}
    	}
    	for(int i=0;i<13;i++)
    	{
    		if(computer[i]==-1)
   			{
    			for(int j=i;j<13;j++)
  				{
    				if(computer[j]!=-1)
    				{
    					swap(computer[i],computer[j]);
    					break;
    				}
				}
			}
		}
		/*gotoxy(60,5);
		for(int i=0;i<5;i++)
			card(output[i]);*/
}
//電腦剩餘牌數 
void computer_counter()
{
	switch(rule_cont(output,cp))
	{
		case -1:gotoxy(89,12);
				wcout<<"Computer pass.";
				break;
		case 1: computer_card_counter=computer_card_counter-1;
				break;
		case 2: computer_card_counter=computer_card_counter-2;
				break;
		case 3: computer_card_counter=computer_card_counter-5;
				break;
		case 4: computer_card_counter=computer_card_counter-5;
				break;
		case 5: computer_card_counter=computer_card_counter-5;
				break;
		case 6: computer_card_counter=computer_card_counter-5;
				break;
	}
}
//win
void win()
{
	_setmode(_fileno(stdout), _O_TEXT);
	while(1)
	{
	if(kbhit())
	{
		getch();
		break;
    }
	SetColor(206);
	gotoxy(47,15);
	cout<<"  ■■                  ■■       ■■■■■■■       ■■        ■■        "<<endl;
	gotoxy(48,16);
	cout<<"  ■■                ■■        ■■■■■■■       ■■■      ■■       "<<endl;
	gotoxy(48,17);
	cout<<"  ■■                ■■             ■■            ■■■■    ■■       "<<endl;
	gotoxy(49,18);
	cout<<"  ■■              ■■              ■■            ■■ ■■   ■■      "<<endl;
	gotoxy(50,19);
	cout<<"  ■■     ■     ■■               ■■            ■■  ■■  ■■     "<<endl;
	gotoxy(51,20);
	cout<<"  ■■  ■■■  ■■                ■■            ■■   ■■ ■■    "<<endl;
	gotoxy(52,21);
	cout<<"  ■■■■■■■■                 ■■            ■■    ■■■■   "<<endl;
	gotoxy(53,22);
	cout<<"  ■■■  ■■■            ■■■■■■■■      ■■      ■■■  "<<endl;
	gotoxy(53,23);
	cout<<"  ■■      ■■            ■■■■■■■■      ■■        ■■  "<<endl;
}
}
//lose
void lose()
{
	while(1)
	{
	if(kbhit())
	{
		getch();
		break;
    }
		_setmode(_fileno(stdout), _O_TEXT);
	SetColor(120);
	gotoxy(45,15);
	cout<<"   ■■            ■■■■■         ■■■■■         ■■■■■■    "<<endl;
	gotoxy(44,16);
	cout<<"   ■■           ■■■■■■■      ■■■■■■       ■■■■■■    "<<endl;
	gotoxy(43,17);
	cout<<"   ■■           ■■        ■■    ■■      ■■     ■■            "<<endl;
	gotoxy(42,18);
	cout<<"   ■■          ■■          ■■   ■■               ■■■■■■    "<<endl;
	gotoxy(41,19);
	cout<<"   ■■          ■■          ■■     ■■■■         ■■■■■■    "<<endl;
	gotoxy(40,20); 
	cout<<"  ■■           ■■          ■■       ■■■■       ■■            "<<endl;
	gotoxy(39,21);
	cout<<"  ■■            ■■        ■■   ■■      ■■      ■■            "<<endl;
	gotoxy(38,22);
	cout<<"  ■■■■■■■   ■■■■■■■      ■■■■■■      ■■■■■■■  "<<endl;
	gotoxy(37,23);
	cout<<"  ■■■■■■■     ■■■■■■        ■■■■■      ■■■■■■■  "<<endl;
	
	}
	
}
//心得 
void experience()
{
	system("color F0");
	for(int i=17;i>5;i--)
	{
		system("cls");
		gotoxy(70,3);
		cout<<"【 版權所有 】"<<endl;
		gotoxy(66,i);
		cout<<"有個好隊友比什麼都重要！";
		_sleep(200);
	}
	for(int i=17;i>6;i--)
	{
		system("cls");
		gotoxy(70,3);
		cout<<"【 版權所有 】"<<endl;
		gotoxy(66,5);
		cout<<"有個好隊友比什麼都重要！";
		gotoxy(67,i);
		cout<<"由衷感謝 —— 姜林建宇";
		_sleep(200);
	}
	for(int i=17;i>8;i--)
	{
		system("cls");
		gotoxy(70,3);
		cout<<"【 版權所有 】"<<endl;
		gotoxy(66,5);
		cout<<"有個好隊友比什麼都重要！";
		gotoxy(67,7);
		cout<<"由衷感謝 —— 姜林建宇";
		gotoxy(71,i);
		cout<<"陳泳翰  李明憲";
		_sleep(200);
	}
	
}
