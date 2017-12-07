#include<stdio.h>  
//http://www.cnblogs.com/wdxinren/archive/2005/05/12/154327.html  //链表的创建
//预处理
//链表的创建，查找，插入，删除
//结构体和其他类型基础数据类型一样，例如int类型，char类型 只不过结构体可以做成你想要的数据类型。以方便日后的使用。
//为结构体取一个别名就更好理解了
typedef struct node{
	int number;
	struct node *pNext;//指向下个节点
}Node;//为这个struct取一个别名
struct node* CreateList()//创建一个链表  struct node * 是个什么意思(类似于int * a )
{
	Node *head;//存储头结点的地址
	Node *newNode;//存储尾结点的地址
	int lengthOfNode = sizeof(Node);//一个节点占用的内存空间的大小
	head = malloc(lengthOfNode);//使用的每个节点都会需要一个实例，无论何时我们需要一个新节点，就需要创建这个几点结构体的实例，并为它保留一定的内存

	head->pNext = NULL;
	newNode = head;//newNode和head 指向同一个地址
	for (int i = 0; i <= 10; i++)//i为链表中的值
	{
		newNode->number = i;
		newNode->pNext = malloc(lengthOfNode);
		newNode->pNext->pNext = NULL;
		newNode = newNode->pNext;
	}
	return head;//返回的是一个头指针的地址，根据这个头指针可以得到后续的链表的信息
}
void ReadList(Node  *head)//查找一个数据在链表中的位置
{
	Node *q = NULL;
	q = head->pNext;
	while (q != NULL)//判断头结点是否为空
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
