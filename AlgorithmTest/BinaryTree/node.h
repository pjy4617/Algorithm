#ifndef __NODE_H
#define __NODE_H

typedef struct _NODE {
	char Data;
	struct _NODE *pLeft;
	struct _NODE *pRight;
}NODE;
NODE *pHeadNode, *pEndNode;

#endif