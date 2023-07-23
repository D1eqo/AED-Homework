typedef struct {
    int head, tail;
    int q[64];
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* qp = malloc(sizeof(MyQueue));
    qp->head = 0;
    qp->tail = 0;
    return qp;
}

//pushes x then increments head
void myQueuePush(MyQueue* obj, int x) {
  obj->q[obj->head++] = x;
}

int myQueuePop(MyQueue* obj) {
  return obj->q[obj->tail++];
}

int myQueuePeek(MyQueue* obj) {
  return obj->q[obj->tail];
}

bool myQueueEmpty(MyQueue* obj) {
    if (obj->head == obj->tail) return true;
    else return false;
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
