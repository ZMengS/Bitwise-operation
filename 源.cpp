#include<stdio.h>

int main(void) {
	/*      00001001
	*       00000011
	*λ��&  00000001
	 */
	printf("9&3=%d\n", (9 & 3));


	/*      00001001
	*       00000011
	*λ��|  00001011
	 */
	printf("9|3=%d\n", (9 | 3));

	/*       00001001
	*        00000011
	* ���^  00001010
	 */
	printf("9^3=%d\n", (9 ^ 3));

	/*       00001001
	*λ��~   11110110
	 */
	unsigned char x=~9;
	printf("~9=%d\n", (int)x);

	 //����
	printf("8<<1=%d\n", (8 << 1));
	printf("8<<2=%d\n", (8 <<2));

	//����
	printf("10>>1=%d\n", (10 >> 1));
	printf("10>>2=%d\n", (10 >> 2));
	printf("10>>3=%d\n", (10 >> 3));

	//��һ���������4λ��Ϊ0110
	int a = 0;
	printf("������һ������\n");
	scanf_s(" %d", &a);
	int b = a;
	int c =a;
	int i = 0;
	int s[12];
	printf("���������Ķ�����Ϊ��");
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
	printf("������Ϊ��%d\n", a);
	printf("�����Ķ�����Ϊ��");


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