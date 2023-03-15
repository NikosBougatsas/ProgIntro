//Askisi 19/20

#include <iostream>
#include <cstdio>

using namespace std;

struct node {
  int info;
  node *next;
};

class list {
  public:
    list ();
    bool empty ();
    int size ();
    void add (int k, int x);
    int get (int k);
    void remove (int k);
    int searchMF (int x);
  private:
    node *front,*rear;
};

list::list() {
  front = rear = NULL;
}

bool list::empty() {
  return front == nullptr;
}

int list::size() {
  int count=0;
  node *n;
  n=front;

  while (n!=NULL) {
    count++;
    n=n->next;
  }
  return count;
}

void list::add(int k, int x) {
  node *n=new node;
  node *p;
  n->info=x;
  if (k==1) {
    if (front==NULL) {
      front=n;
      rear=n;
    }
    else {
      n->next=front;
      front=n;
    }
  }
  else {
    p=front;

    for (int i=1; i<k-1; i++) {
      p=p->next;
    }

    if (p==rear) {
      p->next=n;
      rear=n;
    }
    else {
      n->next=p->next;
      p->next=n;
    }
  }
}

int list::get(int k) {
  node *n;
  n=front;

  if (k!=1) {
    for (int i=1; i<k; i++) {
      n=n->next;
    }
  }
  return n->info;
}

void list::remove(int k) {
  node *n,*p;
  n=front;

  if (k==1) {
    front=front->next;
    delete n;
  }
  else {
    for (int i=1; i<k; i++) {
      p=n;
      n=n->next;
    }

    if (n==rear) {
      p->next=NULL;
      rear=p;
      delete n;
    }
    else {
      p->next=n->next;
      delete n;
    }
  }
}

int main() {
  int N,K,X,M,count=0;
  list a;

  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> K; cin >> X;
    a.add(K,X);
  }

  cin >> M;

  for (int i=0; i<M; i++) {
    cin >> X;
    count += a.searchMF(X);
  }

  cout << count << endl;

  return 0;
}
