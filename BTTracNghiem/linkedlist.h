#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
struct Node{
    T m_data;
    Node* m_next;
    Node(T srcData, Node* srcNext=nullptr):m_data(srcData), m_next(srcNext){}
    ~Node(){}
};

template <typename T>

struct LinkedList{
    typedef Node<T>* NodePtrT;
private:
    NodePtrT m_pHead;
    NodePtrT m_pTail;
public:
    LinkedList(NodePtrT pHead = nullptr, NodePtrT pTail= nullptr): m_pHead(pHead), m_pTail(pTail){}
    ~LinkedList()
    {
        if (m_pHead == nullptr && m_pTail == nullptr)
            return;
        if (m_pHead == m_pTail)
        {
            delete m_pHead;
            m_pHead = nullptr;
            m_pTail = nullptr;
        }

        NodePtrT temp = m_pHead;
       do
        {
            m_pHead = temp->m_next;
            delete temp;
            temp = m_pHead;
        } while(temp != nullptr);
    }
    void PushBack(NodePtrT newNode)
    {
        if (m_pHead == nullptr && m_pTail == nullptr)
        {
            m_pHead = m_pTail = newNode;
            return;
        }

        m_pTail->m_next = newNode;
        m_pTail = newNode;
    }

    void PushFront(NodePtrT newNode)
    {
        if (m_pHead == nullptr && m_pTail == nullptr)
        {
            m_pHead = m_pTail = newNode;
            return;
        }

        newNode->m_next = m_pHead;
        m_pHead = newNode;
    }

    NodePtrT GetByIndex(int index)
    {
        int i = 0;
        if (m_pHead == nullptr && m_pTail == nullptr)
            return nullptr;
        NodePtrT temp = m_pHead;
        while(temp != nullptr)
        {
            if (i == index)
            {
                return temp;
            }
            temp = temp->m_next;
            i++;
        }
        return nullptr;
    }
};

#endif // LINKEDLIST_H
