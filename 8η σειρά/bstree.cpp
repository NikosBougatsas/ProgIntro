//Askisi 21

#include <iostream>

using namespace std;

struct node {
  int info;
  node *left;
  node *right;
};

node *root;

class bstree {
  public:
    bstree ();
    int height (node *t);
    void insert (node *t, int x) {
      root=insert_helper(t, x);
    }
    int search (node *t, int x, int count);
    int min (node *t);
    int max1 (node *t);
    void inorder (node *t);
    void preorder (node *t);
    void postorder (node *t);
  private:
    node *insert_helper(node *t, int x);
};

bstree::bstree() {
  root=NULL;
}

int bstree::height(node *t) {
  if (t==NULL) {return 0;}
  return (1+max(height(t->left),height(t->right)));
}

node* bstree::insert_helper (node *t, int x) {
  if (t==NULL) {
    node *p=new node;
    p->info=x;
    p->left=p->right=NULL;
    return p;
  }
  if (t->info > x) {
    t->left=insert_helper(t->left, x);
  }
  else if (t->info < x) {
    t->right=insert_helper(t->right, x);
  }
  return t;
}

int bstree::search (node *t, int x, int count) {
  if (t==NULL) return 0;
  if (t->info==x) return count;
  if (t->info > x) {
    return search(t->left, x, ++count);
  }
  else {
    return search(t->right, x, ++count);
  }
}

int bstree::min (node *t) {

  while (t->left!=NULL) {
    t=t->left;
  }
  return t->info;
}

int bstree::max1 (node *t) {

  while (t->right!=NULL) {
    t=t->right;
  }
  return t->info;
}

void bstree::inorder (node *t) {
  if (t!=NULL) {
    inorder(t->left);
    cout << t->info << " ";
    inorder(t->right);
  }
}

void bstree::preorder (node *t) {
  if (t!=NULL) {
    cout << t->info << " ";
    preorder(t->left); preorder(t->right);
  }
}

void bstree::postorder (node *t) {
  if (t!=NULL) {
    postorder(t->left); postorder(t->right);
    cout << t->info << " ";
  }
}

int main() {
  int N,X,M;
  bstree t;

  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> X;
    t.insert(root,X);
  }

  cin >> M;
  int a[M];

  for (int i=0; i<M; i++) {
    cin >> a[i];
  }

  cout << t.height(root) << endl;
  cout << t.min(root) << " " << t.max1(root) << endl;
  cout << t.search(root,a[0],1);

  for (int i=1; i<M; i++) {
    cout << " " << t.search(root,a[i],1);
  }

  cout << endl;

  t.inorder(root);
  cout << "end" << endl;
  t.preorder(root);
  cout << "end" << endl;
  t.postorder(root);
  cout << "end" << endl;

  return 0;
  
}
