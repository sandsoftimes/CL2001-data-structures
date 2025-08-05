class DynIntQueue
{private:	struct QueueNode	
int info;QueueNode *link;	
QueueNode *front;
QueueNode *rear;
int numItems;
public:	
DynIntQueue(void);
 	~DynIntQueue(void);
	void push(int);
	void pop(void);
	int front();bool isEmpty(void);
	void makeNull(void);};

