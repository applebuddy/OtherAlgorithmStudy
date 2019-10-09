//
//  TreeNode.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - TreeNode Data Structure

#include <iostream>
using namespace std;

class TreeNode {
public:
    TreeNode *left;
    TreeNode *right;
    int data;
    TreeNode(int data) {
        left = NULL;
        right = NULL;
        this->data = data;
    }
};

class Tree{
    public:
          TreeNode* insert(TreeNode* root, int data) {
            if(root == NULL) {
                return new TreeNode(data);
            }
            else {
                TreeNode* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

        int getHeight(TreeNode* root){
            if(!root) return -1;
            int leftCount = getHeight(root->left);
            int rightCount = getHeight(root->right);
            return ((leftCount > rightCount) ? leftCount : rightCount) + 1;
        }

}; //End of Tree Class
