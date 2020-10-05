#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node * left;
	Node * right;
	Node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}	
};
void verticalLevelOrder(Node* root,map<int,Node*>& mymap,int level){
        if(root == NULL){
            return;
        }
        queue<pair<int,Node*>> myqueue;
        myqueue.push({level,root});
        while(!myqueue.empty()){
            //myqueue.front()->data
            auto p = myqueue.front();
            Node* root = p.second;
            int level = p.first;
            if(mymap.find(level) == mymap.end()){
                mymap[level] = root;
            }
            if(root->left != NULL){
                myqueue.push({level-1,root->left});
            }
            if(p.second->right != NULL){
                myqueue.push({level+1,root->right});
            }
            myqueue.pop();
        }
    }
    void topView(Node * root) {
        //map of its <sign,Node*> of node
        map<int,Node*> mymap;
        int level = 0;
        verticalLevelOrder(root,mymap,level);
        for(auto it=mymap.begin(); it!=mymap.end(); it++){
            printf("%d ",(it->second)->data);
        }
    }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("Input.txt","r",stdin);
		freopen("Output.out","w",stdout);
	#endif
	Node * root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->right->right = new Node(4);
	root->right->right->right = new Node(5);
	topView(root);
}