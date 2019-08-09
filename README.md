# toy
ZZM's data structure toy

## 常量定义

头文件："toy.h"

包含的常量：

const char RefValue = '#';	// 结束输入符号，子女为空符号
const int stackIncrement = 20;	// 栈自动扩充大小
const int maxSize = 50;	// 数据结构默认大小

## 循环队列

头文件："SeqQueue.h"

实现的功能：

    template <class T>
    class SeqQueue : public Queue<T>
    {
    public:
        SeqQueue(int sz = 10);  // 构造函数：sz为队列大小参数，默认为10
        ~SeqQueue();    // 析构函数
        bool EnQueue(const T x);   // 入队:x入队
        bool DeQueue(T &x);        // 出队：用x返回
        bool getFront(T &x) const; // 取队头：队头元素放在x
        void makeEmpty();           // 设队列空
        bool IsEmpty() const; // 判队列空
        bool IsFull() const; // 判队列满
        int getSize() const; // 求队列空间大小
    };

## 顺序栈

头文件："SeqStack.h"

实现的功能：

    class SeqStack: public Stack<T>
    {
    public:
        SeqStack(int sz = 50);  // 构造函数：sz参数为栈空间大小，默认取50
        ~SeqStack();// 析构函数
        void Push(const T x);   // 压栈：若栈满则自动扩充，不需返回值
        bool Pop(T &x); // 出栈：出栈元素用x存放
        bool getTop(T &x) const;   // 取栈顶元素的值，用x返回
        bool IsEmpty() const;    // 判栈空
        bool IsFull() const;   // 判栈满
        int getSize() const;   // 返回栈大小
        void MakeEmpty();    // 设空栈
    };
	
## 二叉树

头文件："BinaryTree.h"

二叉树结点定义：

	template <class T>
	struct BinTreeNode
	{
		T data;                                 // 数据域
		BinTreeNode<T> *leftChild, *rightChild; // 左右子女指针
	};

实现的功能：

	template <class T>
	class BinaryTree
	{
	public:
		BinaryTree(); // 构造函数：构造一个空二叉树
		BinaryTree(const BinaryTree<T> &s);	// 复制构造函数
		~BinaryTree();	// 析构函数
		int Height();  // 求高度
		int Size();   // 求结点个数
		bool IsEmpty(); // 判树空
		void Switch();  // 镜像对称
		BinTreeNode<T> *Find(const T x);                 // 按照先序遍历序列搜索x
		BinTreeNode<T> *getRoot() const; // 取根指针
		// 用户自定义访问函数visit
		void PreOrder(void (*visit)(BinTreeNode<T> *p)); // 前序遍历
		void InOrder(void (*visit)(BinTreeNode<T> *p));  // 中序遍历
		void PostOrder(void (*visit)(BinTreeNode<T> *p));   // 后序遍历
		void LevelOrder(void (*visit)(BinTreeNode<T> *p));  // 层序遍历
		int CountLeaf();    // 计算叶结点个数
		friend bool operator==(const BinaryTree<T> &s, const BinaryTree<T> &t); // 判两棵二叉树是否相等
		friend istream &operator>>(istream &in, BinaryTree<T> &t); // 按先序遍历序列建立二叉树
		friend ostream &operator<<(ostream &out, BinaryTree<T> &t); // 按先序遍历输出
		BinaryTree<T>& operator = (const BinaryTree<T> &oritree)
	};
	
## 二叉搜索树

头文件："BSTree.h"

二叉搜索树结点的定义：

	template<class E, class K>  // E是数据类，K是关键码类
	struct BSTNode  // 二叉树结点结构
	{
		E data; // 数据域
		BSTNode<E,K> *left, *right; // 左右子女指针
	};


实现的功能：

	template<class E, class K>	// E是数据类，K是关键码类
	class BSTree
	{
	public:
		BSTree();	// 构造函数：构造一个空二叉搜索树
		~BSTree();	// 析构函数
		bool Search(const K x) const;	// 搜索关键码为x的结点
		void makeEmpty();	// 设树空
		void PrintTree() const;	// 按中序输出二叉搜索树
		E Min();	// 求关键码最小的结点
		E Max();	// 求关键码最大的结点
		bool Insert(const E e1);	// 插入一个数据
		bool Remove(const K x);	// 删除关键码为x的结点
	};