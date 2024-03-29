# TICTACTOE

# Description:

TIC-TAC-TOE using command line interface. It is a simple implementation of famous TIC TAC TOE game. Each player can provide their name. The players will be asked to provide marker position on the board. The first player to get three subsequent markers in a row, column or diagonal wins the game.

# Rules of the game:
   https://en.wikipedia.org/wiki/Tic-tac-toe


## User Interface:

On initialisation of the game, a board of 3 * 3 matrix will appear. Each cell of the matrix will represent a position starting with 1 at the leftmost top corner.

![Screenshot](Interface1.png)

After that, users will be prompted to provide their names. Each player will be asked to give the positions for their marker. Player 1 will have marker O, and Player 2 will have X.

![Screenshot](Interface2.png)

If a player provides a position other than 1 to 9, the player will be prompted to re-enter the position along with appropriate message. If a player enters a position which is already taken by a marker, then player will be asked to enter the position again.

![Screenshot](Interface3.png)

The player to get three markers positioned in a straight line is declared the winner.

![Screenshot](Interface4.png)

If no player is able to get three markers in a straight line, then the game has drawn.

![Screenshot](Interface5.png)


## Command:
### Linux distributions:
              g++ tictactoe.cpp
              ./a.out
