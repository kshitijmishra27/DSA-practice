// This code is Contributed by Manan Bansal


#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int count=0,win=0,lose=0;
char a[9]="         ";
int pinput()
	{
	 int place;
	 cout<<"\n enter the place";
	 cin>>place;
	 a[place-1]='X';
	}

int cplace,cvalue;
int randomising()
	{
	 srand(time(0));
	 cplace=(rand()%8);
	 cvalue=(rand()%2);
	 count=0;
	}

void check()
	{
	 if(a[cplace]=='X' || a[cplace]=='O')
	 randomising();
	 else
	     {
	      a[cplace]='O';
	      count=1;
	     }
	}
void endgame()
	{
	  if(a[0]==a[1] && a[1]==a[2] && a[0]=='X')
	  win=1;
	  else if(a[0]==a[3] && a[3]==a[6] && a[0]=='X')
	  win=1;
	  else if(a[0]==a[4] && a[4]==a[8] && a[0]=='X')
	  win=1;
	 else if(a[1]==a[4] && a[4]==a[7] && a[1]=='X')
	  win=1;
	 else if(a[2]==a[5] && a[5]==a[8] && a[2]=='X')
	  win=1;
	 else if(a[2]==a[4] && a[4]==a[6] && a[2]=='X')
	  win=1;
	 else if(a[3]==a[4] && a[4]==a[5] && a[3]=='X')
	  win=1;
	 else if(a[6]==a[7] && a[7]==a[8] && a[6]=='X')
	  win=1;

	  if(a[0]==a[1] && a[1]==a[2] && a[0]=='O')
	  lose=1;
	  else if(a[0]==a[3] && a[3]==a[6] && a[0]=='O')
	  lose=1;
	  else if(a[0]==a[4] && a[4]==a[8] && a[0]=='O')
	  lose=1;
	 else if(a[1]==a[4] && a[4]==a[7] && a[1]=='O')
	  lose=1;
	 else if(a[2]==a[5] && a[5]==a[8] && a[2]=='O')
	  lose=1;
	 else if(a[2]==a[4] && a[4]==a[6] && a[2]=='O')
	  lose=1;
	 else if(a[3]==a[4] && a[4]==a[5] && a[3]=='O')
	  lose=1;
	 else if(a[6]==a[7] && a[7]==a[8] && a[6]=='O')
	  lose=1;

	}


int main()
{
    int turn=0;
    clrscr();
    cout<<"	       		    TIC TAC TOE\n\n\n";
      for(int i=0;i<=4;i++)
      {
	randomising();
	do
	  {
	    check();
	  }while(count==0);
	cout<<"\t\t\t     |     |\n\t\t\t "<<a[0]<<"   |  "<<a[1]<<"  |  "<<a[2]<<"\n\t\t\t     |     |\n \t\t\t_____|_____|_____\n";
	cout<<"\t\t\t     |     |\n\t\t\t "<<a[3]<<"   |  "<<a[4]<<"  |  "<<a[5]<<"\n\t\t\t     |     |\n \t\t\t_____|_____|_____\n";
	cout<<"\t\t\t     |     |\n\t\t\t "<<a[6]<<"   |  "<<a[7]<<"  |  "<<a[8]<<"\n\t\t\t     |     |\n\t\t\t     |     |\n\n";
	endgame();
	if(lose==1)
	 {
	  cout<<"\n\n you lost comp won";
	  break;
	 }
	else if(win==1)
	 {
	  cout<<"\n\n you won comp lost";
	  break;
	 }
	turn++;
	if(turn==9 && win==0 && lose==0)
	 {
	   cout<<"\n\n IT IS A TIE";
	   break;
	 }

	pinput();
	cout<<"\t\t\t     |     |\n\t\t\t "<<a[0]<<"   |  "<<a[1]<<"  |  "<<a[2]<<"\n\t\t\t     |     |\n \t\t\t_____|_____|_____\n";
	cout<<"\t\t\t     |     |\n\t\t\t "<<a[3]<<"   |  "<<a[4]<<"  |  "<<a[5]<<"\n\t\t\t     |     |\n \t\t\t_____|_____|_____\n";
	cout<<"\t\t\t     |     |\n\t\t\t "<<a[6]<<"   |  "<<a[7]<<"  |  "<<a[8]<<"\n\t\t\t     |     |\n\t\t\t     |     |\n\n";
	endgame();
	if(lose==1)
	 {
	  cout<<"\n\n you lost comp won";
	  break;
	 }
	else if(win==1)
	 {
	  cout<<"\n\n you won comp lost";
	  break;
	 }
	turn++;
	if(turn==9 && win==0 && lose==0)
	 {
	   cout<<"\n\n IT IS A TIE";
	   break;
	 }
       }
getch();
}
