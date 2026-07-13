class Solution {
public:
 void helper(TreeNode* root, int val,TreeNode** res){
     if(root==NULL){
            return ;
        }

        if(val<root->val){
           helper(root->left,val,res);

        }
        else if(val>root->val){
           helper(root->right,val,res);
        }
        else{
            *res=root;
            return;
        }
 }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res = NULL;
       helper(root,val,&res);
       return res;
    }
};