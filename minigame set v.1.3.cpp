#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL)); // same number dis
	
    // valuable setting
    int Exp = 0, LVL = 0, Endpoint_Exp = 100;
    int Random, players, d_o_a = 0, gon;
    int game_1_lvl = 1, game_2_lvl=1, game_3_lvl=1, game_4_lvl=1;
    int Game_type;
    char P_C;
    char N_N[100];
	int bone_meal = 50, coin = 0;
	int Plant_lvl = 1;
  
    // testgame file
	FILE* fp = fopen("testgame.txt", "r");
	
	bool is_gaming = true; 
	
	while(is_gaming)
	{
		
		printf("tester\n");
		printf("Level : %d, Exp %d/%d\n", LVL, Exp, Endpoint_Exp);
		printf("\n");		

		//game selete menu
		printf("pick a game\n");
    	printf("1 >>> mary go around (with a bomb)\n");
    	printf("2 >>> still working on it\'s name\n");
		printf("3 >>> grow or not?\n");
    	printf("4 >>> casino\n");
    	printf("choose a game number >>> ");
    	scanf("%d", &Game_type);
    
		system("cls");
    
    	players = rand()%(9-4+1)+4;
    
    	for (int escape = 0; escape != 1;) {
    		Random = 0;
    		printf("player : %d \n", players);
    	
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
					break;
				case 2:
					//working on it.
					break;
				case 3:
					system("cls");
					
					for (int v=1;v<=Plant_lvl+3;v++) {
						printf("\n");
					}
					printf(" ��");
					
					Sleep(1000);
					
					break;
				case 4:
					//this too.
					break;
			}	
			system("cls");
		}
    
    }
    //Sleep(1000); <--- wait 1 second
	//system("cls"); <--- clear
  
    return 0;
}
