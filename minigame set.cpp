#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL)); // same number dis
	
    // valuable setting
    int Exp = 0, LVL = 0;
    int Random, players, d_o_a = 0, gon;
    int game_1_lvl, game_2_lvl, game_3_lvl, game_4_lvl;
    int Game_type;
    char P_C;
  
    // testgame file
	FILE* fp = fopen("testgame.txt", "r");
    
    for (int escape = 0; escape != 1;) {
    	Random = 0;
    	
    	//game selete menu
    	printf("pick a game\n");
    	printf("1 >>> mary go around (with a bomb)\n");
    	printf("2 >>> still working on it\'s name\n");
	    printf("3 >>> grow or not?\n");
    	printf("4 >>> casino\n");
    	printf("choose a game number >>> ");
    	scanf("%d", &Game_type);
    	
    	system("cls");
    	
    	//game playing menu
    	switch (Game_type) {
    		case 1:    			
				players = rand()%(9-4+1)+4;
				d_o_a = 0;
				
				for (;players>1 || d_o_a == 1;) {
					Random = rand()%(50-10+1)+10;
					
					for (int i = 1; i <= players; i++) {
							if (Random <= 0) {
								players -= 1;
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
								printf("%d\n", Random);
								Sleep(1000);
							}
						}
						
						if (Random <= 0) {
							d_o_a = 1;
						} else {
							
							printf("%d\n", Random);
							Sleep(1000);
							
							printf("Are you ganna give this bomb? (y/n) : ");
							getchar();
							scanf("%c", &P_C);
							
							if (P_C == 'n') {
								Random -= 2;
							} else {
								Random -= 1;
							}
							printf("%d\n", Random);
						
							Sleep(1000);
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
				//this too.
				break;
			case 4:
				//this too.
				break;
		}
		system("cls");
	}
    
    
    //Sleep(1000); <--- wait 1 second
	//system("cls"); <--- clear
  
    return 0;
}
