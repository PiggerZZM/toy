# toy
ZZM's data structure toy

## ѭ������

ͷ�ļ���"SeqQueue.h","Queue.h"

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

ͷ�ļ���"SeqStack.h","Stack.h"

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