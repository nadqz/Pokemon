#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <MMsystem.h>

using namespace std;

// Define ASCII Arrow Key
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


void music()
{
	PlaySound(TEXT("Harry.wav"),NULL,SND_SYNC);
}
// Define function Color Set
void setcolor(unsigned short color)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

// Define function to Move the Player
void playerMovement(int key);

// Define Function of coloring and symbolic
void displayMap();

// Define function Color Set
void setcolor(unsigned short color);

const int panjangPeta = 20;
const int lebarPeta = 20;
int playerX = 7;
int playerY = 7;
int arrowKey = ' ';


// Define Map
int peta[lebarPeta][panjangPeta] = {
		{9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7},
		{9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7},
		{9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 7},
		{9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 7},
		{1, 9, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 9, 9, 9, 9, 9, 1, 1, 1, 1, 1, 1, 7, 7, 7, 9, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7, 7, 9, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7, 7, 7, 9, 1, 1, 1},
		{1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7, 9, 8, 6, 8},
		{1, 1, 8, 1, 9, 1, 1, 1, 7, 7, 7, 7, 7, 7, 7, 7, 9, 1, 1, 1},
		{1, 8, 1, 1, 9, 1, 1, 1, 1, 1, 7, 7, 7, 7, 7, 7, 9, 1, 1, 1},
		{8, 1, 4, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 1, 1},
		{1, 8, 1, 1, 9, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 8, 1, 9, 1, 1, 1, 1, 1, 8, 1, 1, 6, 1, 1, 1, 2, 2, 1},
		{1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 2, 2, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 8, 8, 8, 8},
		{1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 5, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 8, 1, 1, 1},
};

// Define Player Structure
struct Hero
{
	string name;
	int hp;
	int atk;
	int def;

	void baseAtkPlayer(int *Pokemon_hp, int *Pokemon_def)
	{
		*Pokemon_hp = *Pokemon_hp - (atk - *Pokemon_def);
	}
};

// Define Pokemon Structure
struct Pokemon
{
	string name;
	int hp;
	int atk;
	int def;

	void baseAtkPokemon(int *player_hp, int *player_def)
	{
		*player_hp = *player_hp - (atk - *player_def);
	}
};

//Define function to Move the Player
void playerMovement(int key)
{
  	if (key == KEY_UP
  	&& peta[playerY - 1][playerX] < 7)
	{
	  playerY -= 1;
	  playerY < 0 ? playerY =
	    0 : playerY;
	}
      else if (key == KEY_DOWN
		&& peta[playerY + 1][playerX] < 7)
	{
	  playerY += 1;
	  playerY > 19 ? playerY =
	    19 : playerY;
	}
      else if (key == KEY_LEFT
	       && peta[playerY][playerX - 1] < 7)
	{
	  playerX -= 1;
	  playerX < 0 ? playerX =
	    0 : playerX;
	}
      else if (key == KEY_RIGHT
	       && peta[playerY][playerX + 1] < 7)
	{
	  playerX += 1;
	  playerX > 19 ? playerX =
	    19 : playerX;
	}
		else
    {  
    	//nothing to do
    };     
}

// Define Function of coloring and symbolic
void displayMap()
{
	int koordinat = peta[playerY][playerX];
	
	//Clear Screen
	system("cls");
	
	for (int i = 0; i < lebarPeta; i++)
	{
	  for (int j = 0; j < panjangPeta; j++)
	    {
	      	if (playerX == j && playerY == i
		  	&& koordinat < 7)
			{
		  		setcolor (13);		//pink
		  		cout << "&";		//Player
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 1)
			{
		  		setcolor (14);		//Yellow
		  		cout << "_";		//Rumput pendek
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 2)
			{
		  		setcolor (9);		//Blue
		  		cout << "@";		//Genangan air
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 3)
			{
		  		setcolor (13);		//pink
		  		cout << "&";		//Harry Potter
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 4)
			{
		  		setcolor (4);		//Maroon
		  		cout << "M";		//Acromantula
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 5)
			{
		  		setcolor (12);		//Red
		  		cout << "Z";		//Basilisk
		  		setcolor (7);
			}
		  		else if (peta[i][j] == 6)
			{
		  		setcolor (11);		//cyan
		  		cout << "G";		//Dementors
		 		 setcolor (7);
			}
		  		else if (peta[i][j] == 7)
			{
		  		setcolor (2);		//Green
		  		cout << "^";		//Pohon
		 		setcolor (7);
			}	
	      		else if (peta[i][j] == 8)
			{
		  		setcolor (8);		//Grey
		  		cout << "o";		//Batu
		  		setcolor (7);
			}
	     		else if (peta[i][j] == 9)
			{
		  		setcolor (10);		//Light Green
		  		cout << "#";		//Semak
		  		setcolor (7);
			}
	     		else
	     	{
		  // nothing to do
		}
	    }
	  cout << "\n";
	};
}

int main()
{
		
	while (true)
	{
		// Input Keyboard
		cout << "===========================\n";
		cout << "=   Welcome to Hogwarts   =\n";
		cout << "===========================\n";
		cout << "Click Arrow key to play\n";
		cout << "Click R to exit\n";
		arrowKey = getch();
		
		// Gerak Player
		playerMovement(arrowKey);
		// Tampilan Peta
		displayMap();
		

		// Hero Object
		Hero player;
		player.name = "Harry Potter";
		player.hp = 500;
		player.atk = 50;
		player.def = 10;

		// find pokemon
		if (peta[playerY][playerX] == 4)
		{
			// Pokemon Object
			Pokemon pokemon1;
			pokemon1.name = "Acromantula";
			pokemon1.hp = 300;
			pokemon1.atk = 25;
			pokemon1.def = 15;

			while (true)
			{
				system("cls");

				char input_battle = ' ';
				cout << "You found " << pokemon1.name << " Harrry!!" << endl;
				cout << player.name << ": " << player.hp << endl;
				cout << pokemon1.name << ": " << pokemon1.hp << endl;
				cout << "Click the Q button to attack!" << endl;
				input_battle = getch();

				if (input_battle == 'q' || input_battle == 'Q')
				{
					player.baseAtkPlayer(&pokemon1.hp, &pokemon1.def);
					pokemon1.baseAtkPokemon(&player.hp, &player.def);
				}

				if (pokemon1.hp <= 0)
				{
					peta[playerY][playerX] = 1;
					setcolor(11);
					cout << "Harry has slain " << pokemon1.name << endl;
					setcolor(7);
					Sleep(4000);
					system("cls");
					break;
				}
			}
		}
		if (peta[playerY][playerX] == 5)
		{
			// Pokemon Object
			Pokemon pokemon2;
			pokemon2.name = "Basilisk";
			pokemon2.hp = 200;
			pokemon2.atk = 25;
			pokemon2.def = 10;

			while (true)
			{
				system("cls");

				char input_battle = ' ';
				cout << "You found " << pokemon2.name << " Harrry!!" << endl;
				cout << player.name << ": " << player.hp << endl;
				cout << pokemon2.name << ": " << pokemon2.hp << endl;
				cout << "Click the Q button to attack!" << endl;
				input_battle = getch();

				if (input_battle == 'q' || input_battle == 'Q')
				{
					player.baseAtkPlayer(&pokemon2.hp, &pokemon2.def);
					pokemon2.baseAtkPokemon(&player.hp, &player.def);
				}

				if (pokemon2.hp <= 0)
				{
					peta[playerY][playerX] = 1;
					setcolor(11);
					cout << "Harry has slain " << pokemon2.name << endl;
					setcolor(7);
					Sleep(4000);
					system("cls");
					break;
				}
			}
		}
		if (peta[playerY][playerX] == 6)
		{
			// Pokemon Object
			Pokemon pokemon3;
			pokemon3.name = "Dementors";
			pokemon3.hp = 100;
			pokemon3.atk = 25;
			pokemon3.def = 5;

			while (true)
			{
				system("cls");

				char input_battle = ' ';
				cout << "You found " << pokemon3.name << " Harrry!!" << endl;
				cout << player.name << ": " << player.hp << endl;
				cout << pokemon3.name << ": " << pokemon3.hp << endl;
				cout << "Click the Q button to attack!" << endl;
				input_battle = getch();

				if (input_battle == 'q' || input_battle == 'Q')
				{
					player.baseAtkPlayer(&pokemon3.hp, &pokemon3.def);
					pokemon3.baseAtkPokemon(&player.hp, &player.def);
				}

				if (pokemon3.hp <= 0)
				{
					peta[playerY][playerX] = 1;
					setcolor(11);
					cout << "Harry has slain " << pokemon3.name << endl;
					setcolor(7);
					Sleep(4000);
					system("cls");
					break;
				}
			}
		}
		else if (peta[playerY][playerX] == 2)
		{
			int chance;
			srand(time(NULL));
			chance = rand() % 10;

			if (chance < 3)
			{
				while(true)
				{
					system("cls");
					int choice;
					cout << "You Found Enemy, Harry!"<<endl;
	      			cout << "1. Fight\n2. Run" << endl;
	      			cout << "What will you do?";
					choice = getch();
				
	      			if (choice == '1')
					{
	      				//Pokemon Object
						Pokemon pokemon4;
						pokemon4.name = "Bowtruckle";
						pokemon4.hp = 100;
						pokemon4.atk = 25;
						pokemon4.def = 5;
						
						while(true)
						{	
							system("cls");
							char input_battle = ' ';
							cout << "You found " << pokemon4.name << " Harrry!!" << endl;
							cout << player.name << ": " << player.hp << endl;
							cout << pokemon4.name << ": " << pokemon4.hp << endl;
							cout << "Click the Q button to attack!" << endl;
							input_battle = getch();
							
							if (input_battle == 'q' || input_battle == 'Q')
							{
								player.baseAtkPlayer(&pokemon4.hp, &pokemon4.def);
								pokemon4.baseAtkPokemon(&player.hp, &player.def);
							}
							if (pokemon4.hp <= 0)
							{
								setcolor(11);
								cout << "Harry has slain " << pokemon4.name << endl;
								setcolor(7);
								Sleep(4000);
								break;
								break;
							}
						}
					}
					else if (choice == '2')
					{
						break;
					}
				
				}
			}
		}
	};
	getch();
	return 0;
}