#pragma once
typedef struct BiTNode {
	char data;
	struct BiTNode* lchild, * rchild;
	BiTNode() :data(), lchild(), rchild() {} //�޲�����ʼ��ʱ����
	BiTNode(char val) {  //�в�����ʼ��ʱ����
		data = val;
		lchild = NULL;
		rchild = NULL;
	}
}BiTNode, * BiTree;