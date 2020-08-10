#include <iostream>
#include <cstddef>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
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

		int getHeight(Node* root){
            if(root->left==NULL&&root->right==NULL){
                return 0;
            }
            if(root==NULL){
                return 0;
            }
             int n1=0;
              int n2=0;
            if(root->left!=NULL){
             n1=getHeight(root->left);
            }

            if(root->right!=NULL){
                 n2=getHeight(root->right);
            }

            int max=(n1 >= n2) ? n1 : n2;
            return 1+max;
          //Write your code here
        }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}




