#include<stdio.h>  
//http://www.cnblogs.com/wdxinren/archive/2005/05/12/154327.html  //����Ĵ���
//Ԥ����
//����Ĵ��������ң����룬ɾ��
//�ṹ����������ͻ�����������һ��������int���ͣ�char���� ֻ�����ṹ�������������Ҫ���������͡��Է����պ��ʹ�á�
//Ϊ�ṹ��ȡһ�������͸��������
typedef struct node{
	int number;
	struct node *pNext;//ָ���¸��ڵ�
}Node;//Ϊ���structȡһ������
struct node* CreateList()//����һ������  struct node * �Ǹ�ʲô��˼(������int * a )
{
	Node *head;//�洢ͷ���ĵ�ַ
	Node *newNode;//�洢β���ĵ�ַ
	int lengthOfNode = sizeof(Node);//һ���ڵ�ռ�õ��ڴ�ռ�Ĵ�С
	head = malloc(lengthOfNode);//ʹ�õ�ÿ���ڵ㶼����Ҫһ��ʵ�������ۺ�ʱ������Ҫһ���½ڵ㣬����Ҫ�����������ṹ���ʵ������Ϊ������һ�����ڴ�

	head->pNext = NULL;
	newNode = head;//newNode��head ָ��ͬһ����ַ
	for (int i = 0; i <= 10; i++)//iΪ�����е�ֵ
	{
		newNode->number = i;
		newNode->pNext = malloc(lengthOfNode);
		newNode->pNext->pNext = NULL;
		newNode = newNode->pNext;
	}
	return head;//���ص���һ��ͷָ��ĵ�ַ���������ͷָ����Եõ��������������Ϣ
}
void ReadList(Node  *head)//����һ�������������е�λ��
{
	Node *q = NULL;
	q = head->pNext;
	while (q != NULL)//�ж�ͷ����Ƿ�Ϊ��
	{
		printf("%d", q->number);
		q = q->pNext;
		int a = 10;
	}
}
main()
{
	ReadList(CreateList());
}
