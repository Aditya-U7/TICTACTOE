#include<iostream>
using namespace std;
string board[3][3]={{"1","2","3"},
                 {"4","5","6"},
                 {"7","8","9"}};

string player1,player2;
int p1_input,p2_input;
int row,col;
void Banner()
{
cout<<endl;
cout<<endl;
cout<<"================    ================    =============="<<endl;  
cout<<"     ====                 ==            =             "<<endl;
cout<<"     ====                 ==            =             "<<endl;
cout<<"     ====                 ==            =             "<<endl;  
cout<<"     ====                 ==            =             "<<endl;
cout<<"     ====           ================    =============="<<endl;
cout<<endl;
cout<<"================        ========        =============="<<endl;  
cout<<"     ====            =           =      =             "<<endl;
cout<<"     ====           =              =    =             "<<endl;
cout<<"     ====           = ============ =    =             "<<endl;  
cout<<"     ====           =              =    =             "<<endl;
cout<<"     ====           =              =    =============="<<endl;
cout<<endl;
cout<<"================        ========        =============="<<endl;  
cout<<"     ====            =            =     =            "<<endl;
cout<<"     ====           =              =    =_____________"<<endl;
cout<<"     ====           =              =    =             "<<endl;  
cout<<"     ====            =            =     =             "<<endl;
cout<<"     ====               ========        =============="<<endl;
cout<<endl;
cout<<endl;   
cout<<"======================Welcome to the game==================================="<<endl;
cout<<endl;


}
void Board()
{
cout<<endl;
cout<<" "<<board[0][0]<<"   |  "<<board[0][1]<<"  |  "<<board[0][2]<<endl; 
cout<<"________________"<<endl;
cout<<endl;
cout<<" "<<board[1][0]<<"   |  "<<board[1][1]<<"  |  "<<board[1][2]<<endl;
cout<<"________________"<<endl;
cout<<endl;
cout<<" "<<board[2][0]<<"   |  "<<board[2][1]<<"  |  "<<board[2][2]<<endl;
cout<<endl;
}
void plotInput(int input,int player)
{
if(player==1)
board[row][col]="O";
else
board[row][col]="X";

}
bool checkInput(int input)
{
row=input/3;
col=(input%3)-1;
if(input<1 || input>9)
{
cout<<"Invalid input"<<endl;
cout<<"Please enter the position again."<<endl;
return false;
}

if(board[row][col]=="X" || board[row][col]=="O")
{
cout<<"Already occupied"<<endl;
return false;
}
return true;
}
void takeUserInput(int c)
{
bool valid_Input=false;
if(c%2!=0)
{
cout<<endl;
cout<<player1<<",enter the position of your marker(O):"<<endl;
while(1)
{
cin>>p1_input;
valid_Input=checkInput(p1_input);
if(valid_Input)
break;
}
plotInput(p1_input,1);
}
else
{
cout<<endl;
cout<<player2<<" ,enter the position of your marker(X):"<<endl;
while(1)
{
cin>>p2_input;
valid_Input=checkInput(p2_input);
if(valid_Input)
break;
}
plotInput(p2_input,2);
}
}

bool checkForWinner()
{
bool winner;
string player;
if(board[0][0]=="X" && board[0][1]=="X" && board[0][2]=="X"  ||  board[0][0]=="X" && board[1][0]=="X" && board[2][0]=="X" || board[0][0]=="X" && board[1][1]=="X" && board[2][2]=="X" ) 
{
player=player2;
winner=true;
}
else if(board[2][0]=="X" && board[2][1]=="X" && board[2][2]=="X"  ||  board[0][2]=="X" && board[1][2]=="X" && board[2][2]=="X" || board[2][0]=="X" && board[1][1]=="X" && board[0][2]=="X" || board[0][1]=="X" && board[1][1]=="X" && board[2][1]=="X" || board[1][0]=="X" && board[1][1]=="X" && board[1][2]=="X") 
{
player=player2;
winner=true;
}
else if(board[0][0]=="O" && board[0][1]=="O" && board[0][2]=="O"  ||  board[0][0]=="O" && board[1][0]=="O" && board[2][0]=="O" || board[0][0]=="O" && board[1][1]=="O" && board[2][2]=="O" ) 
{
player=player1;
winner=true;
}
else if(board[2][0]=="O" && board[2][1]=="O" && board[2][2]=="O"  ||  board[0][2]=="O" && board[1][2]=="O" && board[2][2]=="O" || board[2][0]=="O" && board[1][1]=="O" && board[0][2]=="O" || board[0][1]=="O" && board[1][1]=="O" && board[2][1]=="O" || board[1][0]=="O" && board[1][1]=="O" && board[1][2]=="O"  ) 
{
player=player1;
winner=true;
}
else
{
winner=false;
}
if(winner)
cout<<player<<" has won the game."<<endl;
return(winner);
}
int main()
{
int count=1;
bool winnerFound=false;
Banner();
cout<<"Player1 (O) ,please enter your name"<<endl;
cout<<endl;
cin>>player1;
cout<<endl;
cout<<"Player2 (X) ,please enter your name"<<endl;
cout<<endl;
cin>>player2;
cout<<endl;
while(1)
{
Board();
if(count>9)
break;
takeUserInput(count);
winnerFound=checkForWinner();
if(winnerFound)
{
Board();
break;
}
count++;


}
if(winnerFound==false)
cout<<"It's a draw"<<endl;
return 0;
}