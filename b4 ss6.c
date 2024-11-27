#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Nhap vao so a: ");
    scanf("%f", &a);
    printf("Nhap vao so b: ");
    scanf("%f", &b);
    printf("Nhap vao so c: ");
    scanf("%f", &c);
    delta = (b*b) - (4*a*c);
    if (delta > 0) {
    	x1= (-b + sqrt(delta)) /2*a;
    	x2= (-b - sqrt(delta)) /2*a;
        printf("Phuong tr�nh c� 2 nghiem ph�n biet: x1 = %.2f v� x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
    	x1 = x2 = (-b) / 2*a;
        printf("Phuong tr�nh c� nghiem k�p: x1 = x2 = %.2f\n", x1);
    } else {
        printf("Phuong tr�nh v� nghiem.\n");
    }

    return 0;
}
