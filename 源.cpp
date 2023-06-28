#include<stdio.h>

int main(void) {
	/*      00001001
	*       00000011
	*位与&  00000001
	 */
	printf("9&3=%d\n", (9 & 3));


	/*      00001001
	*       00000011
	*位或|  00001011
	 */
	printf("9|3=%d\n", (9 | 3));

	/*       00001001
	*        00000011
	* 异或^  00001010
	 */
	printf("9^3=%d\n", (9 ^ 3));

	/*       00001001
	*位非~   11110110
	 */
	unsigned char x=~9;
	printf("~9=%d\n", (int)x);

	 //左移
	printf("8<<1=%d\n", (8 << 1));
	printf("8<<2=%d\n", (8 <<2));

	//右移
	printf("10>>1=%d\n", (10 >> 1));
	printf("10>>2=%d\n", (10 >> 2));
	printf("10>>3=%d\n", (10 >> 3));

	//将一个数的最低4位变为0110
	int a = 0;
	printf("请输入一个整数\n");
	scanf_s(" %d", &a);
	int b = a;
	int c =a;
	int i = 0;
	int s[12];
	printf("输入整数的二进制为：");
	while (c != 0) {
		s[i] = (c % 2);
		i++;
		c = b >>i;
	}
	
	for (int k = i - 1; k >= 0; k--) {
		printf("%d", s[k]);
	}
	printf("\n");

	a = (a & ~15);
	a = (a | 6);
	printf("处理后变为：%d\n", a);
	printf("处理后的二进制为：");


	 b = a;
	 c = a;
	 i = 0;
	 int d[12];
	while (c != 0) {
		d[i] = (c % 2);
		i++;
		c = b >> i;
	}

	for (int k = i - 1; k >= 0; k--) {
		printf("%d", d[k]);
	}
	printf("\n");

	return 0;
}