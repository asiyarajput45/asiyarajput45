#include<iostream>
using namespace std;
char game[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkWin();
void board();
int main()
{ 
cout<<"***********************"<<endl;
cout<<"**TIC TAC TOE**"<<endl;
cout<<"***********************"<<endl;
	int n1 = 1,i,choice;
	char mark;
	do{
		board();
		n1 = (n1%2)?1:2;
		cout<<"Player"<<n1<<", Enter any number:   ";
		cin>>choice;
		mark = (n1 == 1)? 'X' : '0';
    	if(choice == 1 && game[1] == '1')
		game[1] = mark;
	else if(choice == 2 && game[2] == '2')
		game[2] = mark;
	else if(choice == 3 && game[3] == '3')
		game[3] = mark;
	else if(choice == 4 && game[4] == '4')
		game[4] = mark;
	else if(choice == 5 && game[5] == '5')
		game[5] = mark;
	else if(choice == 6 && game[6] == '6')
		game[6] = mark;
	else if(choice == 7 && game[7] == '7')
		game[7] = mark;
	else if(choice == 8 && game[8] == '8')
		game[8] = mark;
	else if(choice == 9 && game[9] == '9')
		game[9] = mark;
	else {
		cout<<"INVALID INPUT!!!!";
		n1--;
		cin.ignore();
		cin.get();
	}
	i=checkWin();
	n1++;
	}
	while(i==-1);
	board();
	if(i==1)
	cout<<"===>\aPlayer "<<--n1<<" is WINNER!!!";
	else
	cout<<"===>\aGAME DRAW:("<<endl;
	cin.ignore();
	cin.get();
	return 0;
}
int checkWin()
{
	if (game[1] == game[2] && game[2] == game[3])
	return 1;
	else if (game[4] == game[5] && game[5] == game[6])
	return 1;
	else if (game[7] == game[8] && game[8] == game[9])
	return 1;
	else if (game[1] == game[4] && game[4] == game[7])
	return 1;
	else if (game[2] == game[5] && game[5] == game[8])
	return 1;
	else if (game[3] == game[6] && game[6] == game[9])
	return 1;
	else if (game[1] == game[5] && game[5] == game[9])
	return 1;
	else if (game[3] == game[5] && game[5] == game[7])
	return 1;
	else if (game[1] != '1' && game[2] != '2' && game[3] != '3' && game[4] != '4' &&
	 game[5] != '5' && game[6] != '6' && game[7] != '7' && game[8] != '8' && 
	 game[9] != '9' )
	 return 0;
	else
	return -1;
}
void board ()
{
	system("cls");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"***********************"<<endl;
	cout<<"      TIC TAC TOE      "<<endl;
	cout<<"***********************"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"PLAYER 1 (X) - PLAYER 2 (0) "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"    |      |     "<<endl;
	cout<<"  "<< game[1] <<" |  "<< game[2] <<"   |  "<< game[3] <<endl;
    cout<<"____|______|____"<<endl;
	cout<<"    |      |    "<<endl;
	cout<<"  "<< game[4] <<" |  "<< game[5] <<"   |  "<< game[6] <<endl;
    cout<<"____|______|____"<<endl;
    cout<<"    |      |    "<<endl;
	cout<<"  "<< game[7] <<" |  "<< game[8] <<"   |  "<< game[9] <<endl;
	cout<<"    |      |     "<<endl;
cout<<endl;
cout<<endl;
}
