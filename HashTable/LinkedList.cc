#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*
void LinkedList::krprintList(intNode *head){

  unsigned int c;
  c = 0;

  while (head){
    printf("intNode %d, value: %d\n", c++, head->data);
    head = head->next;
  }
}

struct intNode *LinkedList::buildListN(int num, const int coe){
  int i;
  i = 1;
  struct intNode *previntNode = NULL;

  for (; num >= i; num--){
    struct intNode *newintNode = (intNode*) malloc( sizeof( *previntNode ));
    if (newintNode){
      newintNode->data = num*coe;
      newintNode->next = previntNode;
      previntNode = newintNode;
    }
  }
  return previntNode;
}

int LinkedList::countInt(struct intNode *node, int desired){
  unsigned int c;

  c = 0;

  while(node){
    if (node->data == desired){
      c++;
    }
    node = node->next;
  }
  return c;
}

void LinkedList::test(struct intNode *headintNode){
  struct intNode *newintNode = (intNode*)malloc( sizeof( struct intNode));
  headintNode = newintNode;

  return;
}

int LinkedList::getNth2(struct intNode* head, const int index){

  int i;

  for (i=0; i < index-1 || head; ++i, head = head->next){}

  return (i == index) ? head->data : -13;
}

int LinkedList::getNth(struct intNode *head, const int index){

  unsigned int i;
  i =  0;

  while(head) {
    if (index-1 == i){
      return head->data;
    }
    head = head->next;
    ++i;
  }
  assert(head);
}

// 11/15/2015 -- Don't copy -- special-cased for having
// original node on stack in caller function
void LinkedList::deleteList(struct intNode **headintNode){
  struct intNode *n = (*headintNode)->next;
  struct intNode *next  = NULL;

  while(n){
    printf("intNode value %d\n", n->data);
    next = n->next;
    free(n);
    n = next;
  }
  *headintNode = NULL;
}

// Tested 11/20/2015
// Verified works
void LinkedList::append(struct intNode** refA, struct intNode** refB){

  if(!*refB || !refB)
    return;

  if(!refA || !*refA){
    *refA = *refB;
    *refB = NULL;
    return;
  }


  struct intNode *nodeA = *refA;
  struct intNode *nodeB = *refB;

  while(nodeA->next){ // XXX: WHY ->NEXT ????
    nodeA = nodeA->next;
  }

  nodeA->next = nodeB;
  nodeB = NULL;
}


// Verfied works -- 11/19/2015
// Off by one testing shows desired effect
void LinkedList::insertNth(struct intNode** headRef, const int index, const int data){

  assert(*headRef || headRef);

  int c;
  for(c = 1; c < index && *headRef; ++c){ //variation -- (c=0; c<=index; ++c)
    printf("rounding: %d, index: %d\n", c, index);
    headRef = &(*headRef)->next;
  }

  assert(*headRef);

  struct intNode *newintNode = (intNode*)malloc(sizeof(struct intNode));
  if(newintNode){
    newintNode->data = data;
    newintNode->next = *headRef;
    *headRef  = newintNode;
  }
}

// Version 1 using len()
// 11/20/2015
// Testing
void LinkedList::frontBackSplit(struct intNode* src, struct intNode **frontRef, struct intNode **backRef){
  if(!src)
    return;

  int l = len(src);
  *frontRef = src;
  int odd;
  odd = l % 2;

  int t;
  for(t = 0; t < l/2; ++t){
    src = src->next;
  }

  if(odd){
    printf("odd\n");
    *backRef = src->next->next;
    src->next->next = NULL;
  } else {
    printf("even!!\n");
    *backRef = src->next;
    src->next = NULL;
  }
  return;
}

int LinkedList::len(struct intNode *head){
  int c;
  for(c = 0; head; ++c, head = head->next){}
  return c;
}


// 11/20/2015
// Verified working
void LinkedList::removeDuplicates(struct intNode* head){
  if(!head)
    return;

  while(head->next){
    if (head->data != head->next->data){
      head = head->next;
    }else if (head->next->next){
      struct intNode *tmp = head->next;
      head->next = head->next->next;
      free(tmp);
      // Version from book
      //struct intNode *nextNext = head->next->next;
      //free(head->next);
      //head->next = nextNext;
    }
  }
}


// 11/20/2015
// Verified tested
void LinkedList::moveNode(struct intNode** destRef, struct intNode** srcRef){
  if(!*srcRef)
    return;

  struct intNode *tmp = (*srcRef)->next;
  (*srcRef)->next = *destRef;
  *destRef = *srcRef;
  *srcRef = tmp;
}


// 11/24/2015
// Verified tested
// Really struggled to understand the moveintNode part
void LinkedList::alternatingSplit(struct intNode* src, struct intNode** aRef, struct intNode** bRef){
  struct intNode* tmpA = NULL;
  struct intNode* tmpB = NULL;

  while(src){
    moveNode(&tmpA, &src);

    if(src){
      moveNode(&tmpB, &src);
    }
  }

  *aRef = tmpA;
  *bRef = tmpB;
}

// 11/24/2015
// Verified tested
// This made sense to me when I wrote it
void LinkedList::reverseWithPointers(struct intNode** headRef){
  struct intNode* tmp = NULL;
  struct intNode* next = NULL;
  struct intNode* cur = *headRef;

  while (cur) {
    next = cur->next;
    cur->next = tmp;
    tmp = cur;
    cur = next;
  }
  *headRef = tmp;
}

void LinkedList::recursiveReverse(struct intNode** headRef){

}

*/
