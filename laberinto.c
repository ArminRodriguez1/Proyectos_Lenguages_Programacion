#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define ARRIBA 72 + 256
#define ABAJO 80 + 256
#define DERECHA 77 +256
#define IZQUIERDA 75 + 256


void main(){
	srand(time(NULL));
	
	int dim = 5;
	int laberinto[dim][dim];
	int vidas = 3;
	int ganar = 0;
	int x = 4, y = 4, i, j;

	for(i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5 ; j++){
			laberinto[i][j] = rand()% 2;
		}
	}
	laberinto[0][0] = 8;
	
	
	do{
		for(i = 0 ; i < 5 ; i++){
			for(j = 0 ; j < 5 ; j++){
				printf("%d", laberinto[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		gotoxy(x, y); printf("*");
		int tecla;
		tecla = getch();
			
		if(tecla==0||tecla==224){
			tecla = 256+getch();
		}
		
		switch(tecla){
			case ARRIBA:
				if((y-1)>-1){
					y--;
				}
				break;
			case ABAJO:
				if((y+1)<5){
					y++;
				}
				break;
			case IZQUIERDA:
				if((x-1)>-1){
					x--;
				}
				break;
			case DERECHA: 
				if((x+1)<5){
					x++;
				}
		}
		
		if(laberinto[y][x] == 1){
			vidas--;
		}
		
		if(vidas == 0){
			system("cls");
			printf("Pues haz perdido");
			break;
		}
		
		if(laberinto[y][x] == 8){
			system("cls");
			printf("Vaya, haz gando");
			break;
		}
		system("cls");
	}while(vidas != 0);
	
}


void gotoxy(int x, int y){
	HANDLE hCon;
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon, dwPos);
}
