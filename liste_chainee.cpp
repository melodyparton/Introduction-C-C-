#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>

struct paire {
    int first;
    int second;
};

struct Node {
    paire val;
    Node * next;
};

Node* insert(Node* list, const paire & pair){
    if (list == nullptr){
        Node * list = new Node [1];
        list->val = pair;
        list->next = nullptr;
    }
    else {
        Node * tmp = list->next;
        list->val = pair ;
        list->next = tmp;
        delete [] tmp;
    }
    return list;
    
}

void printList(Node *list){
    Node* current = list;
    while(current != nullptr){
        std::cout << '(' << current->val.first << ',' << current->val.second << ")   ";
        current = current -> next;
    }
    std::cout << '\n';
}


Node* insertBack(Node *list, const paire & pair){
    Node * new_node =  new Node [1];
    new_node->val =  pair;
    new_node->next = nullptr;
    Node * current = list;
    if (current == nullptr){
        delete [] list;
        return new_node;
    }
    while(current -> next != nullptr){
        current = current-> next;
    }
    current->next = new_node;
    return list;

}

int main(){
    return 0;
}