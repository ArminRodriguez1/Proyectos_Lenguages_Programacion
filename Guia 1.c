 #include<stdio.h>
void main(){
	printf("======CON FOR=========\n");
	int i;
	for(i=1;i<101;i++){
		if(i%3==0 && i%5==0){
			printf("%d = hola mundo\n",i);
			
		}
		else if(i%3==0){
			printf("%d = hola\n",i);
			
		}
		else if(i%5==0){
			printf("%d = mundo\n",i);
		}
		}
		printf("======CON WHILE=========\n");
		int j=1;
	while(j<101){
		if(j%3==0 && j%5==0){
			printf("%d = hola mundo\n",j);
			
		}
		else if(j%3==0){
			printf("%d = hola\n",j);
			
		}
		else if(j%5==0){
			printf("%d = mundo\n",j);
		}
		j++;
		}
	}
	


