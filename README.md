# toy
ZZM's data structure toy

## 循环队列

头文件："SeqQueue.h","Queue.h"

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

头文件："SeqStack.h","Stack.h"

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