//
//  LinkedListStructure.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - LInkedListStructure Implementation

#include <iostream>
#include <vector>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

    /// MARK: Initialization of SinglyLinkedListNode
        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

    /// MARK: Initialization of SinglyLinkedList
        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

    /// MARK: Insert Node
        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
    
    /// MARK: Delete Node
    SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
        /// 만약 포지션이 0이면 포인터 위치만 그 다음 노드로 바꾸면 도미
        /// 0이 아니라면, position-1 위치의 노드를 제거(Using recursive Function)
        if(position==0) head = head->next;
        else head->next = deleteNode(head->next,position-1);
        return head;
    }
    
    /// MARK: Print Nodes
    
    void printLinkedList(SinglyLinkedListNode* head) {
        while(head!=nullptr) {
            printf("%d\n",head->data);
            head = head->next;
        }
        return;
    }
    
    /// MARK: - Print In Reverse
    void reversePrint(SinglyLinkedListNode* head) {
        // MARK: CASE 1)
        if(head!=NULL) {
            reversePrint(head->next);
            printf("%d\n",head->data);
        }
        
        // MARK: CASE 2)
//        vector<int> Ans;
//        Ans.push_back(head->data);
//        while(head->next!=NULL) {
//            head = head->next;
//            Ans.push_back(head->data);
//        }
//        reverse(Ans.begin(), Ans.end());
//        for(auto v: Ans) printf("%d\n",v);
    }
};
