# toy
ZZM's data structure toy

## ��������

ͷ�ļ���"toy.h"

�����ĳ�����

const char RefValue = '#';	// ����������ţ���ŮΪ�շ���
const int stackIncrement = 20;	// ջ�Զ������С
const int maxSize = 50;	// ���ݽṹĬ�ϴ�С

## ѭ������

ͷ�ļ���"SeqQueue.h"

ʵ�ֵĹ��ܣ�

    template <class T>
    class SeqQueue : public Queue<T>
    {
    public:
        SeqQueue(int sz = 10);  // ���캯����szΪ���д�С������Ĭ��Ϊ10
        ~SeqQueue();    // ��������
        bool EnQueue(const T x);   // ���:x���
        bool DeQueue(T &x);        // ���ӣ���x����
        bool getFront(T &x) const; // ȡ��ͷ����ͷԪ�ط���x
        void makeEmpty();           // ����п�
        bool IsEmpty() const; // �ж��п�
        bool IsFull() const; // �ж�����
        int getSize() const; // ����пռ��С
    };

## ˳��ջ

ͷ�ļ���"SeqStack.h"

ʵ�ֵĹ��ܣ�

    class SeqStack: public Stack<T>
    {
    public:
        SeqStack(int sz = 50);  // ���캯����sz����Ϊջ�ռ��С��Ĭ��ȡ50
        ~SeqStack();// ��������
        void Push(const T x);   // ѹջ����ջ�����Զ����䣬���践��ֵ
        bool Pop(T &x); // ��ջ����ջԪ����x���
        bool getTop(T &x) const;   // ȡջ��Ԫ�ص�ֵ����x����
        bool IsEmpty() const;    // ��ջ��
        bool IsFull() const;   // ��ջ��
        int getSize() const;   // ����ջ��С
        void MakeEmpty();    // ���ջ
    };
	
## ������

ͷ�ļ���"BinaryTree.h"

��������㶨�壺

	template <class T>
	struct BinTreeNode
	{
		T data;                                 // ������
		BinTreeNode<T> *leftChild, *rightChild; // ������Ůָ��
	};

ʵ�ֵĹ��ܣ�

	template <class T>
	class BinaryTree
	{
	public:
		BinaryTree(); // ���캯��������һ���ն�����
		BinaryTree(const BinaryTree<T> &s);	// ���ƹ��캯��
		~BinaryTree();	// ��������
		int Height();  // ��߶�
		int Size();   // �������
		bool IsEmpty(); // ������
		void Switch();  // ����Գ�
		BinTreeNode<T> *Find(const T x);                 // �������������������x
		BinTreeNode<T> *getRoot() const; // ȡ��ָ��
		// �û��Զ�����ʺ���visit
		void PreOrder(void (*visit)(BinTreeNode<T> *p)); // ǰ�����
		void InOrder(void (*visit)(BinTreeNode<T> *p));  // �������
		void PostOrder(void (*visit)(BinTreeNode<T> *p));   // �������
		void LevelOrder(void (*visit)(BinTreeNode<T> *p));  // �������
		int CountLeaf();    // ����Ҷ������
		friend bool operator==(const BinaryTree<T> &s, const BinaryTree<T> &t); // �����ö������Ƿ����
		friend istream &operator>>(istream &in, BinaryTree<T> &t); // ������������н���������
		friend ostream &operator<<(ostream &out, BinaryTree<T> &t); // ������������
		BinaryTree<T>& operator = (const BinaryTree<T> &oritree)
	};
	
## ����������

ͷ�ļ���"BSTree.h"

�������������Ķ��壺

	template<class E, class K>  // E�������࣬K�ǹؼ�����
	struct BSTNode  // ���������ṹ
	{
		E data; // ������
		BSTNode<E,K> *left, *right; // ������Ůָ��
	};


ʵ�ֵĹ��ܣ�

	template<class E, class K>	// E�������࣬K�ǹؼ�����
	class BSTree
	{
	public:
		BSTree();	// ���캯��������һ���ն���������
		~BSTree();	// ��������
		bool Search(const K x) const;	// �����ؼ���Ϊx�Ľ��
		void makeEmpty();	// ������
		void PrintTree() const;	// �������������������
		E Min();	// ��ؼ�����С�Ľ��
		E Max();	// ��ؼ������Ľ��
		bool Insert(const E e1);	// ����һ������
		bool Remove(const K x);	// ɾ���ؼ���Ϊx�Ľ��
	};