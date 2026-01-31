class MyLinkedList {
public:
    struct node
    {
        int val;
        node* next;
    };

    node* head;
    int size;

    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if((index<0)||(index>=size))
        {
            return -1;
        }

        node* temp;
        temp=head;

        for(int i=0;i<index;i++)
        {
            temp=temp->next;
        }
        
        return temp->val;
    }
    
    void addAtHead(int val) {
        node* n=new node;
        
        n->val=val;
        n->next=head;

        head=n;
        size++;
                
    }
    
    void addAtTail(int val) {
        node *n=new node;

        n->val=val;
        n->next=nullptr;

        if(size==0)
        {
            head=n;
        }
        else{
            node *temp;
            temp=head;

            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }

            temp->next=n;
            n->next=nullptr;
        }
        
        size++;
    }
    
    void addAtIndex(int index, int val) {
        node* temp;
        temp=head;
        
            if (index<0||index>size)
            {
                return;
            }

            if(index==size)
            {
                addAtTail(val);
                return;
            }
            if(index==0)
            {
                addAtHead(val);
                return;
            }
            
            for(int i=0;i<index-1;i++)
            {
            temp=temp->next; 
            }
          
            node* n=new node;  
            n->val=val;
            n->next=temp->next;
            temp->next=n;

            size++;
        
    }
    
    void deleteAtIndex(int index) {
        node* temp;
        temp=head;

        if((index<0)||(index>=size))
        {
            return;
        }

        if(index==0)
        {
           node* t;
           t=head;
           head=head->next;
           delete t;
           size--;
           return;
        }
        
        for(int i=0;i<index-1;i++)
        {
            temp=temp->next;
        }

        node* n;
        n=temp->next;
        temp->next=temp->next->next;
        delete n;

        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
