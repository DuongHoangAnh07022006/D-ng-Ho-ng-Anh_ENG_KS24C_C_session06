#include <stdio.h>
int main(){
    int a = 8386,b=0,c;
    while (a>0)
    {
    	printf("Nhap mat khau de mo : ");
	    scanf("%d",&c);
	    if (a == c){
	    	printf("Mat khau chinh xác\n");
	    	break;
		}else {
			printf("Mat khau khong chinh xac\n");
		}
		if (c<=3) {
			printf("Ban da nhap sai qua so lan quy dinh\n !!");
			break;
		}
}
    return 0;		

}
