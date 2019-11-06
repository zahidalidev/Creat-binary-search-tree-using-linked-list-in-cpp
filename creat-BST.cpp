#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left, *right;
};
class linkList{
	private:
		node *root;
	public:
		linkList(){
			root = NULL;
		}
		void creatList(int value){
			node *temp = new node;
			node *copyRoot = root;
			temp -> data = value;
			temp -> left = NULL;
			temp -> right = NULL;
			if(root == NULL){
				root = temp;
				copyRoot = temp;
			}
			else{
				while(copyRoot != NULL ){
					if(temp -> data < copyRoot -> data){
						if(copyRoot -> left == NULL){
							copyRoot -> left = temp;
							return;
						}else{
							copyRoot = copyRoot -> left;
						}
					}else{
						if(copyRoot -> right == NULL){
							copyRoot -> right = temp;
							return;
						}else{
							copyRoot = copyRoot -> right;
						}
					}
				}
			}
			
		}
		void printInorder(){
			node *copyRoot = root;
			cout << copyRoot -> data << copyRoot -> left -> data << copyRoot -> right -> data;
			
		}
};
int main(){
	linkList B;
	B.creatList(3);
	B.creatList(4);
	B.creatList(2);
	B.creatList(30);
	B.creatList(1);
	B.creatList(12);
	B.printInorder();
	return 0;
}
