// ����C���Ե�enum
#include <stdio.h>
#include <stdlib.h>

#define aa1 1
#define aa2 2

/*
	�����ǽṹ�塢�����廹��ö�����ͣ���������
	C���Բ㼶�Ľṹ�������ѣ����������������
	��Ϊ������ֵ������֮���û�ˡ�

	���ڻ����������ͣ�����ʵ���ṹ����Щ����һ���ģ�
	��������C���Բ㼶����������������������ֵ��
	Ҳ��������ڻ��㼶���������û�ˡ�

	������Щ��������ʵ����ֻ�Ƿ����˱����������ĳ���
	������֣���Ϊ����û��ʹ�ã�ռ��é�Ӳ���ʺ���ҲŲ�Ҫ����
*/


int a() {
// #define aa2 3 // ��Ҫ�ض��壡�������ȫ�ֵģ�
	enum aa { a1, a2, a3 }; //	ö�����͵���Ҫ���ã����ǹ���{���ƣ�ֵ}�Ķ�Ӧ��ϵ \
								�����Ƶ�ͬ����intֵ���ڱ���ԭ�������ð���
	return a1;
}


int main333() {
	/* 
     * ����ö�ٵ�ʹ�ã��൱����
	 * int a1 = 10;
	 * int a2 = 11;
	 * int a3 = 12;
	 */
	// ֻ��һ�������������ռ�ռ䣬ֻ�ǽ������������ֵ�Ķ�Ӧ��ϵ
	// ��һ�㣬���ܺ�define��һ����
	// Ҳ��Ҫע�⣬enum�ڵı��������ڱ������ڣ�����������������������������
	// defineռ�õı�����ͬ�����У����һ�ȫ�ֲ�����
	// ����define���Զ���ܶ����ݣ�������Ҳ���ԣ����ӱ���ʽҲ���ԣ�enumֻ����int���͵���
	// ����˵������Ҫ����������������Ķ�Ӧ��ϵ��ʱ����enum����
	// �������Ҳֻ����define�ˡ�
	enum aa { a1 = 10, a2, a3 }; // �ֲ�ö������aa

	enum aa abc = a2;  // ��������Ϊ int a2 = 11;  int abc = a2;

	printf("%d\n", a());
	printf("%d\n", a1);
	printf("%d\n", abc);

	abc = 100;
	printf("***%d\n", abc); // ok�����ʱ��abc�͵���int�������ˡ�

	//int a1 = 100; // error�� al����һ���������ˣ�����ֵ��10
	// ���ʣ�enum��size��
	// ֻռ4���ֽڣ�Ҳ����һ��int�Ĵ�С
	printf("size = %d\n", sizeof(enum aa)); // 4 �����union���������ƣ�ֻռһ��ռ�
	printf("size = %d\n", sizeof(abc));		// 4

	// int aa2 = 100;

	struct myAA
	{
		enum aa abcc;
	} myAAa;

	printf("size = %d\n", sizeof(myAAa));	// 4

	myAAa.abcc = a1;
	myAAa.abcc = 200; // ���Գ���Χ��

	return 0;
}