#include <stdio.h>
   int main() {
	const float Pi = 3.14f;
	int banKinh = 4;
   	float dienTich = banKinh * banKinh * Pi;
   	float chuVi = 2*banKinh*Pi;
   	printf("Dien tich hinh tron la %.2f\n", dienTich);
   	printf("Chu vi hinh tron la %.2f\n", chuVi);
   	return 0;
   }
