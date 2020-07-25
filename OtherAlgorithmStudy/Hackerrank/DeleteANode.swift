//
//  DeleteANode.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Delete a Node

/*

 import Foundation

 /*
  * For your reference:
  *
  * SinglyLinkedListNode {
  *     data: Int
  *     next: SinglyLinkedListNode?
  * }
  *
  */

 func deleteNode(llist: SinglyLinkedListNode?, position: Int) -> SinglyLinkedListNode? {
    if position == 0 { return llist?.next }
    llist?.next = deleteNode(llist: llist?.next, position: position - 1)
    return llist
 }

 */
