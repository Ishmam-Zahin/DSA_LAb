using namespace std;
class Queue{
    struct nodes{
        int item;
        struct nodes *next;
    };
typedef struct nodes *node;
    int n=0;
    node xfront=NULL, xrear=NULL;
public:
    node makememory(){
        return (node)malloc(sizeof(struct nodes));
    }
    void xinsert(int item){
        node newnode=makememory();
        newnode->item=item;
        newnode->next=NULL;
        if(xfront==NULL){
            xfront=newnode;
            xrear=xfront;
        }
        else{
            xrear->next=newnode;
            xrear=newnode;
        }
        n++;
    }

    int xpop(){
        int item=xfront->item;
        node p=xfront;
        xfront=xfront->next;
        free(p);
        n--;

        return item;
    }

    int xFront(){
        return xfront->item;
    }

    int xgetsize(){
        return n;
    }
};
