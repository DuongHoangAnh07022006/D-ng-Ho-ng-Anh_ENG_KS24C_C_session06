#include <stdio.h>
int main(){
	int number[5];
	int sum = 0;
	printf("moi ban nhap 5 so nguyen : \n");
	for(int i = 1;i <= 5; i++){
		scanf("%d",&number[i]);
	}
	for(int i = 1;i <= 5; i++){
	if(i%2 != 0){
		sum += number[i];
	}		
		}
	printf("Tong cac so le la: %d\n", sum);
			
    return 0;
}
