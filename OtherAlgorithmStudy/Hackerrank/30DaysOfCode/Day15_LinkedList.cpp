//
//  Day15_LinkedList.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Linked List Implementation Problem

#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          if(head == nullptr) return new Node(data);
          else if(head->next == nullptr) head->next = new Node(data);
          else insert(head->next,data);
          return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};

//int main()
//{
//    Node* head=NULL;
//      Solution mylist;
//    int T,data;
//    cin>>T;
//    while(T-->0){
//        cin>>data;
//        head=mylist.insert(head,data);
//    }
//    mylist.display(head);
//        
//}


