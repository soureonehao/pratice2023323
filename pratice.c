#include<stdio.h>
#define N 9
void main() {
	int i, j, Insert, Stu[N + 1], box;
	printf("please input 9 sorce:");
	for (i = 0; i < 9; i++) {
		scanf_s("%d", &Stu[i]);	//����9������
	}
	for (i = 8; i > 0; i--) {//ð�����򷨴Ӵ�С����
		for (j = 0; j < i; j++) {
			if (Stu[j] < Stu[j + 1]) {
				box = Stu[j];
				Stu[j] = Stu[j + 1];
				Stu[j + 1] = box;
			}
		}
	}
	printf("please input insert score:\n");
	scanf_s("%d", &Insert);
	for (i = 0; i < N; i++) {	//�����³ɼ�
		if (Insert < Stu[i])
			;
		else
			break;	
	}
	for (j = N; j > i; j--) {	//����ɼ����������ɼ����������������������棬�Һ����������Ų
		Stu[j] = Stu[j - 1];
	}
	Stu[i] = Insert;
	printf("Now,the score list is:");
	for (i = 0; i < N + 1; i++)
		printf("%4d", Stu[i]);
	getch();
}