#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
public:
T data;
Node* left;
Node* right;
Node(T data)
{
    this -> data = data;
    this -> left = NULL;
    this -> right = NULL;
}
};
template<class T>
class BinaryTree{
public:
Node* root;
BinaryTree(){
    root = NULL;
}
void addNode(T data){
    Node* newNode = new Node(data);
    if(root == NULL)
    {
        root = newNode;
    }
    else
    {
        Node* temp = root;
        Node* parentNode;
        while(true){
            parentNode = temp;
            if(data < temp -> data)
            {
                temp = temp -> left;
                if(temp == NULL){
                parentNode -> left = newNode;
                return;
                }
            }
            else
            {
                temp = temp -> right;
                if(temp == NULL){
                parentNode -> right = newNode;
                return;
                }
            }

        }
    }

}
};
