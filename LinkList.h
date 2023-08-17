class LinkList{
    struct node{
        int num;
        struct node *next;
    };
typedef struct node *nodeptr;

    nodeptr first=NULL, last=NULL, current=NULL;
    int n=0;
public:
    nodeptr createMemory(){
        return (nodeptr)malloc(sizeof(struct node));
    }

    void add(int num){
        //cout<<nu<<" "<<name;
        nodeptr p=createMemory();
        p->num=num;
        if(n==0){
            first=p;
            last=p;
            p->next=NULL;
        }
        else{
            last->next=p;
            last=p;
            p->next=NULL;
        }
        n++;
    }

    int getSize(){
        return n;
    }

    nodeptr getFirst(){
        return first;
    }

    nodeptr getLast(){
        return last;
    }

    int getNode(){
        int x=current->num;
        current=current->next;
        return x;
    }

    void reposition(){
        current=first;
    }

    void xinsert(int num, int loc){
        loc--;
        nodeptr newnode=createMemory();
        newnode->num=num;
        if(loc==0){
            newnode->next=first;
            first=newnode;
        }
        else{
            nodeptr p=first;
            loc--;
            while(loc>0){
                loc--;
                p=p->next;
            }

            newnode->next=p->next;
            p->next=newnode;
        }
        n++;
    }

    void xinsert(int num){
        nodeptr previousptr=NULL, p=first;
        nodeptr newnode=createMemory();
        newnode->num=num;
        while(p!=NULL){
            if(num<=p->num){
                break;
            }
            else{
                previousptr=p;
                p=p->next;
            }
        }
        if(previousptr==NULL){
            first=newnode;
            newnode->next=p;
        }
        else if(p==NULL){
            last=newnode;
            previousptr->next=newnode;
            newnode->next=NULL;
        }
        else{
            previousptr->next=newnode;
            newnode->next=p;
        }
        n++;
    }

    void xdelete(int loc){
        nodeptr previousptr=NULL, p=first;
        loc--;
        while(loc>0){
            previousptr=p;
            p=p->next;
            loc--;
        }
        if(previousptr==NULL){
            first=first->next;
        }
        else if(p==last){
            previousptr->next=NULL;
            last=previousptr;
        }
        else{
            previousptr->next=p->next;
        }
        n--;
    }

    void xsort(){
        int size=n;
        for(int i=size-1; i>0; i--){
            int tmp=i;
            nodeptr p=NULL;
            while(tmp>0){
                tmp--;
                if(p==NULL){
                    p=first;
                }
                else{
                    p=p->next;
                }
                if(p->num>p->next->num){
                    int tmp=p->num;
                    p->num=p->next->num;
                    p->next->num=tmp;
                }
                else continue;
            }
        }
    }

};
