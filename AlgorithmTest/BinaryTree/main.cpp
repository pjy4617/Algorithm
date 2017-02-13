#include <iostream>
#include <list>

#include "node.h"
using namespace std;

list<NODE*>	stack;



void InitTree(void);
void MakeTree(void);
void Traverse(NODE* pNode);
void LevelTraverse(NODE* pNode);
void Visit(NODE* pNode);

int main(void)
{
	InitTree();
	MakeTree();
	stack.clear();
	Traverse(pHeadNode->pLeft);
	getchar();
	stack.clear();
	LevelTraverse(pHeadNode->pLeft);
	getchar();
	return 1;
}

void Traverse(NODE* pNode)
{
	stack.push_back(pNode);//
	while (!stack.empty()) {
		pNode = stack.back();
		stack.pop_back();
		Visit(pNode);
		if (pNode->pRight != pEndNode)
			stack.push_back(pNode->pRight);
		if (pNode->pLeft != pEndNode)
			stack.push_back(pNode->pLeft);
	}
}

void LevelTraverse(NODE* pNode)
{
	stack.push_back(pNode);
	while (!stack.empty()) {
		pNode = stack.front();
		stack.pop_front();
		Visit(pNode);
		if (pNode->pLeft != pEndNode)
			stack.push_back(pNode->pLeft);
		if (pNode->pRight != pEndNode)
			stack.push_back(pNode->pRight);
	}
}

void Visit(NODE* pNode)
{
	cout << pNode->Data << "->";
}

void InitTree(void)
{
	pHeadNode = new NODE();
	pEndNode = new NODE();

	pHeadNode->pLeft = pEndNode;
	pHeadNode->pRight = pEndNode;

	pEndNode->pLeft = pEndNode;
	pEndNode->pRight = pEndNode;
}

void MakeTree(void)
{
	NODE *pParent, *pLeftChild, *pRightChild;

	pParent = new NODE();//레벨1
	pParent->Data = 'A';
	pLeftChild = new NODE();//레벨2
	pLeftChild->Data = 'B';
	pRightChild = new NODE();//레벨2
	pRightChild->Data = 'C';
	pParent->pLeft = pLeftChild;
	pParent->pRight = pRightChild;
	pHeadNode->pLeft = pParent;//제일 상위
	pHeadNode->pRight = pParent;//제일 상위
	
	pParent = pParent->pLeft;//레벨2
	pLeftChild = new NODE();
	pLeftChild->Data = 'D';
	pLeftChild->pLeft = pEndNode;
	pLeftChild->pRight = pEndNode;
	pRightChild = new NODE();
	pRightChild->Data = 'E';
	pRightChild->pLeft = pEndNode;
	pRightChild->pRight = pEndNode;
	pParent->pLeft = pLeftChild;
	pParent->pRight = pRightChild;

	pParent = pHeadNode->pRight->pRight;//레벨2
	pLeftChild = new NODE();
	pLeftChild->Data = 'F';
	pLeftChild->pLeft = pEndNode;
	pLeftChild->pRight = pEndNode;
	pRightChild = new NODE();
	pRightChild->Data = 'G';
	pRightChild->pLeft = pEndNode;
	pRightChild->pRight = pEndNode;
	pParent->pLeft = pLeftChild;
	pParent->pRight = pRightChild;
}

