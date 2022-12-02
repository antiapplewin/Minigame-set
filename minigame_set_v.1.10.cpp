#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <fstream>

int main(void) {
	srand(time(NULL)); // same number dis
	
    // valuable setting
    int Exp = 0, LVL = 0, Endpoint_Exp = (LVL+1)*(LVL+1)*100;
    int Random, players, d_o_a = 0, gon;
    int game_1_lvl = 1, game_2_lvl=1, game_3_lvl=1, game_4_lvl=1, money = 0;
    int Game_type;
    int bring_exp, bring_lvl, b_GL1, b_GL2, b_GL3, b_GL4, b_m;
	char P_C;
    char name[20], signup[20], login[20];
	int bone_meal = 50, coin = 0, time = 0;
	int Plant_lvl = 1, p_c, pg = 0;
    
    printf("        Login or SignUp\n");
    printf("have an account? (y/n) : ");

    P_C = getchar();
    
    system("cls");

    if (P_C == 'y') {
    	printf("What\'s your game name : ");
    	scanf("%s", name);
    	
		strcpy(login,name);
		strcat(login,".txt");
    	
    	FILE* fp = fopen(login, "r");
    	
    	fscanf(fp, "%d", &bring_exp);
    	fscanf(fp, "%d", &bring_lvl);
    	fscanf(fp, "%d", &b_GL1);
    	fscanf(fp, "%d", &b_GL2);
    	fscanf(fp, "%d", &b_GL3);
    	fscanf(fp, "%d", &b_GL4);
    	fscanf(fp, "%d", &b_m);
    	Exp = bring_exp;
    	LVL = bring_lvl;
    	game_1_lvl = b_GL1;
    	game_2_lvl = b_GL2;
    	game_3_lvl = b_GL3;
    	game_4_lvl = b_GL4;
    	money = b_m;

	} else {
		printf("pick your name : ");
		scanf("%s", name);
		
		strcpy(signup,name);
		strcat(signup,".txt");
		
		//FILE* fp = fopen(signup, "w");
	}
	
	system("cls");
    
    // testgame file
	//FILE* fp = fopen("testgame.txt", "r");
	
	bool is_gaming = true; 
	
	while(is_gaming)
	{
		for (; Exp > Endpoint_Exp;) {
			Exp -= Endpoint_Exp;
			LVL += 1;
			money += 100;
		}
		Endpoint_Exp = (LVL+1)*(LVL+1)*100;
		
		printf("%s\n", name);
		printf("Level : %d, Exp %d/%d       Coins : %d \n", LVL, Exp, Endpoint_Exp, money);
		printf("\n");

		//game selete menu
		printf("pick a game\n");
    	printf("1 >>> mary go around (with a bomb)\n");
    	printf("2 >>> test your luck\n");
		printf("3 >>> grow or not?\n");
    	printf("4 >>> coin graber + upgrader\n");
    	printf("9 >>> save\n");
    	printf("choose a game number >>> ");
    	scanf("%d", &Game_type);
    
		system("cls");
    
    	players = rand()%(9-4+1)+4;
    	int num1 = rand()%(50-1+1)+1;
		int num2 = rand()%(50-1+1)+1, num3 = rand()%(50-1+1)+1, num4 = rand()%(50-1+1)+1, num5 = rand()%(50-1+1)+1, num6 = rand()%(50-1+1)+1;
		int num7 = rand()%(50-1+1)+1, num8 = rand()%(50-1+1)+1, num9 = rand()%(50-1+1)+1;
		int n, o, co_num;
    
    	for (int escape = 0; escape != 1;) {
    		Random = 0;
    	
    	//game playing menu
    		switch (Game_type) {
    			case 1:    			
				
					d_o_a = 0;
					Random = rand()%(50-10+1)+10;
				
					while(players >= 1) {
						for (int i=1; i <= players; i++) {
							if (Random <= 0){
								Random = -1;
							} else {
								printf("computer %d turn... --->   ", i);
								gon = rand()%(100-1+1)+1;
						
								if (gon <= 50) {
								printf("stay!\n");
									Random -= 1;
								}else {
									printf("give!\n");
								}
													
								Random -= 1;
								Sleep(1000);
							}
						}
											
						if (Random == 0) {
							d_o_a = 1;
							printf("You die\n");
							escape = 1;
							break;
						} else if (Random == -1) {
							printf("One PC player die\n");
							players -= 1;
							if(players == 0) {
								printf("You win.");
								Exp += game_1_lvl * 10;
								escape =1;
							}
								Random = 13;
						} else {
							
							printf("Are you ganna give this bomb? (y/n) : ");
							getchar();
							scanf("%c", &P_C);
							
							if (P_C == 'n') {
								Random -= 2;
							} else {
								Random -= 1;
							}
						
							Sleep(1000);
							
							system("cls");
						}
					}
    			
				//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
				//printf("%d", arr[0]);
				
				
					Sleep(1000);
					Game_type = 10;
					break;
				case 2:
					for (int i = 0; i<=9;) {
						printf("what number(1~9) and what number(1~50) : ");
						scanf("%d %d", &n, &o);
						if (n==1) {
							if (num1==o) {
								printf("right!\n");
								co_num += 1;
								num1 = 2000000;
							}
						} else if (n==2) {
							if (num2==o) {
								printf("right!\n");
								co_num += 1;
								num2 = 20000000;
							}
						} else if (n==3) {
							if (num3==o) {
								printf("right!\n");
								co_num += 1;
								num3 = 200000000;
							}
						} else if (n==4) {
							if (num4==o) {
								printf("right!\n");
								co_num += 1;
								num4 = 200000000;
							}
						} else if (n==5) {
							if (num5==o) {
								printf("right!\n");
								co_num += 1;
								num5 = 200000000;
							}
						} else if (n==6) {
							if (num6==o) {
								printf("right!\n");
								co_num += 1;
								num6 = 200000000;
							}
						} else if (n==7) {
							if (num7==o) {
								printf("right!\n");
								co_num += 1;
								num7 = 200000000;
							}
						} else if (n==8) {
							if (num8==o) {
								printf("right!\n");
								co_num += 1;
								num8 = 200000000;
							}
						} else {
							if (num9==o) {
								printf("right!\n");
								co_num += 1;
								num9 = 200000000;
							}
						}
						i++;
					}
					Exp += co_num*game_2_lvl;
					escape = 1;
					Game_type = 10;
					break;
				case 3:
					bone_meal = 50;
					coin = 0;
					time = 0;
					Plant_lvl = 1;
					p_c = 0;
					pg = 0;
					int U_C;
					system("cls");
					
					for (int v=1;v<=Plant_lvl+3;v++) {
						printf("\n");
					}
					printf(" W \n");
					
					for (;time <= 100 && bone_meal > 0;) {
						printf("will you give bone powder? (y = 1/n = 0) : ");
						scanf("%d", &p_c);
						
						if (p_c == 315914) {
							coin += 5;
							printf("coins = %d\n", coin);
							Sleep(1000);
							system("cls");
							for (int v=1;v<=Plant_lvl+3-pg;v++) {
								printf("\n");
							}
							for (int lol = 1;lol <= pg; lol++) {
								printf(" | \n");
							}
							printf(" W ");
						}
						
						if (p_c == 1981515) {
							printf("how many bone powder? (5 bone powder = 1 coin) : ");
							scanf("%d", &U_C);
							coin -= U_C;
							bone_meal += U_C *5;
							Sleep(1000);
							system("cls");
							for (int v=1;v<=Plant_lvl+3-pg;v++) {
								printf("\n");
							}
							for (int lol = 1;lol <= pg; lol++) {
								printf(" | \n");
							}
							printf(" W ");
						}
						
						if (p_c == 1) {
							bone_meal -= 1;
							printf("left bone powder : %d\n", bone_meal);
							Sleep(1000);
							gon = rand()%(100-1+1)+1;
							if (gon <= 50) {
								pg += 1;
							}
							if (Plant_lvl+3==pg) {
								Plant_lvl += 1;
								pg = 0;
								coin += 1;
								Exp += 1;
							}
							system("cls");
							for (int v=1;v<=Plant_lvl+3-pg;v++) {
								printf("\n");
							}
							for (int lol = 1;lol <= pg; lol++) {
								printf(" | \n");
							}
							printf(" W ");
							
						} else {
							time += 1;
							system("cls");
							for (int v=1;v<=Plant_lvl+3-pg;v++) {
								printf("\n");
							}
							for (int lol = 1;lol <= pg; lol++) {
								printf(" | \n");
							}
							printf(" W ");
						}
					}
					
					escape = 1;
					Game_type = 10;
					
					Sleep(1000);
					
					break;
				case 4:
					int c, fish_lvl;
					printf("Are you going to upgrade or get money? (1 for upgrade, 2 for coins) : ");
					scanf("%d", &Random);
					system("cls");
					if (Random == 2) {
						for (int i = 1; i<=10; i++) {
							printf("fish number 1\n");
							printf("fish number 2\n");
							printf("fish number 3\n");
							printf("what fish will you catch >>> ");
							scanf("%d", &Random);
							system("cls");
							Random = rand()%(100-1+1)+1;
								if (Random <= 50) {
									money += game_4_lvl;
									printf("You catch a normal fish");
								} else if (Random <= 75) {
									money += 2*game_4_lvl;
									printf("You catch an Asian arowana!");
								} else if (Random <= 87) {
									money += 3*game_4_lvl;
									printf("You catch a bronze fish!!");
								} else if (Random <= 93) {
									money += 4*game_4_lvl;
									printf("You catch a silver fish!!!");
								} else if (Random <= 97) {
									money += 5*game_4_lvl;
									printf("YOU CATCH A GOLD FISH!!!!");
								} else if (Random <= 99) {
									money += 6*game_4_lvl;
									printf("OMG!!!!!! THE FISH SWALLOWED A DIAMOND!!!!!!!!!");
								} else {
									money += 7*game_4_lvl;
									printf("OMG THIS IS AN SUPER RARE RED DIAMOND FISH!!!!!!!! ONLY 1\%!!!!!!!!!");
							}
							Sleep(1000);
							system("cls");
						}
					} else {
						while(1) {
							printf("Coins : %d\n", money);
							printf("Game 1 lvl : %d. Coins to upgrade : %d\n", game_1_lvl, game_1_lvl*1000);
							printf("Game 2 lvl : %d. Coins to upgrade : %d\n", game_2_lvl, game_2_lvl*1000);
							printf("Game 3 lvl : %d. Coins to upgrade : %d\n", game_3_lvl, game_3_lvl*1000);
							printf("Game 4 lvl : %d. Coins to upgrade : %d\n", game_4_lvl, game_4_lvl*1000);
							printf("What game will you upgrade >>> ");
							scanf("%d", &Random);
							if (Random == 1) {
								if (money < game_1_lvl*1000) {
									printf("NOT ENOUGH COINS");
									Sleep(1000);
									escape = 1;
									break;
								} else {
									money -= game_1_lvl*1000;
									game_1_lvl += 1;
								}
							} else if (Random == 2) {
								if (money < game_2_lvl*1000) {
									printf("NOT ENOUGH COINS");
									Sleep(1000);
									escape = 1;
									break;
								} else {
									money -= game_2_lvl*1000;
									game_2_lvl += 1;
								}
							} else if (Random == 3) {
								if (money < game_3_lvl*1000) {
									printf("NOT ENOUGH COINS");
									Sleep(1000);
									escape = 1;
									break;
								} else {
									money -= game_3_lvl*1000;
									game_3_lvl += 1;
								}
							} else {
								if (money < game_4_lvl*1000) {
									printf("NOT ENOUGH COINS");
									Sleep(1000);
									escape = 1;
									break;
								} else {
									money -= game_4_lvl*1000;
									game_4_lvl += 1;
								}
							}
						}
					}
					escape = 1;
					Game_type = 10;
					break;
					
				case 9:
					// AuAa
					char temp[20] ="";
					
					strcpy(temp,name);
					strcat(temp,".txt");
					
					FILE* fp = fopen(temp,"w");
					fprintf(fp,"%d ", Exp);
					fprintf(fp,"%d ", LVL);
					fprintf(fp,"%d ", game_1_lvl);
					fprintf(fp,"%d ", game_2_lvl);
					fprintf(fp,"%d ", game_3_lvl);
					fprintf(fp,"%d ", game_4_lvl);
					fprintf(fp,"%d", money);
					
					fclose(fp);
					
					printf("Be Saved!!");
					Sleep(1000);
					escape = 1;
					Game_type = 10;
					break;
			}		
			system("cls");
		}
    
    }
    //Sleep(1000); <--- wait 1 second
	//system("cls"); <--- clear
  
    return 0;
}
