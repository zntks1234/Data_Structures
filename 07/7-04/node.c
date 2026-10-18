#include <stdio.h>
#include "node.h"

void displayInorder(treeNode* root){
	if (root){
		displayInorder(root->left);
		printf("%C_",root->key);
		displayInorder(root->right);
	}
}
