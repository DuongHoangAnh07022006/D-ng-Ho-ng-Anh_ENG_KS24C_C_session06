#include <stdio.h>
int main(){
	int a, b=0, c=0;
	printf("Moi ban nhap vao 5 so nguyen: \n");
	for(int i=1;i<=5;i++){
		scanf("%d",&a);
		if(a%2 == 0){
			b = b+1;
		}else {
			c= c+1;
		}
	}
	printf("So luong so chan: %d\n",b);
	printf("So luong so le: %d\n",c);
    return 0;
}
