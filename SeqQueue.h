#ifndef SEQQUEUE_H
#define SEQQUEUE_H

#include <iostream>
#include "Queue.h"

// ѭ������

template <class T>
class SeqQueue : public Queue<T>
{
private:
    int rear, front; // ͷָ�룺ָ���ͷԪ������λ�á�βָ�룺ָ���βԪ�غ�һ��Ϊֹ
    T *elements;     //  ��������
    int maxSize;     // �����������
public:
    SeqQueue(int sz = 10);
    ~SeqQueue()
    {
        delete[] elements;
    }
    bool EnQueue(const T x);   //  x���
    bool DeQueue(T &x);        // ���ӣ���x����
    bool getFront(T &x) const; // ȡ��ͷ����ͷԪ�ط���x
    void makeEmpty()           // ����п�
    {
        front = rear = 0;
    }
    bool IsEmpty() const // �ж��п�
    {
        return front == rear;
    }
    bool IsFull() const // �ж�����
    {
        return (rear + 1) % maxSize == front;
    }
    int getSize() const // ����пռ��С
    {
        return (rear - front + maxSize) % maxSize;
    }
};

template <class T>
SeqQueue<T>::SeqQueue(int sz) : front(0), rear(0), maxSize(sz)
{
    if (sz > 0)
        elements = new T[sz];
}

template <class T>
bool SeqQueue<T>::EnQueue(const T x)
{
    if (IsFull())
        return false;
    else
    {
        elements[rear] = x;
        rear = (rear + 1) % maxSize;
        return true;
    }
}

template <class T>
bool SeqQueue<T>::DeQueue(T &x)
{
    if (IsEmpty())
        return false;
    x = elements[front];
    front = (front + 1) % maxSize;
    return true;
}

template <class T>
bool SeqQueue<T>::getFront(T &x) const
{
    if (IsEmpty())
        return false;
    x = elements[front];
    return true;
}

#endif