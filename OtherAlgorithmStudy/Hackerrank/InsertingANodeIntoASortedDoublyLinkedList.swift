//
//  InsertingANodeIntoASortedDoublyLinkedList.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Inserting a Node into a Sorted DoublyLinkedList

// MARK: - 정렬된 연결리스트 요소삽입 구현

import Foundation

/*

 final class DoublyLinkedListNode {
    var data: Int
    var next: DoublyLinkedListNode?
    weak var prev: DoublyLinkedListNode?

    public init(nodeData: Int) {
        self.data = nodeData
    }
 }

 final class DoublyLinkedList {
    var head: DoublyLinkedListNode?
    var tail: DoublyLinkedListNode?

    public init() {}

    public func insertNode(nodeData: Int) {
        self.insertNode(node: DoublyLinkedListNode(nodeData: nodeData))
    }

    private func insertNode(node: DoublyLinkedListNode) {
        if let tail = tail {
            tail.next = node
            node.prev = tail
        } else {
            head = node
        }

        tail = node
    }
 }

 func printDoublyLinkedList(head: DoublyLinkedListNode?, sep: String, fileHandle: FileHandle) {
    var node = head

    while node != nil {
        fileHandle.write(String(node!.data).data(using: .utf8)!)

        node = node!.next

        if node != nil {
            fileHandle.write(sep.data(using: .utf8)!)
        }
    }
 }

 // Complete the sortedInsert function below.

 /*
  * For your reference:
  *
  * DoublyLinkedListNode {
  *     data: Int
  *     next: DoublyLinkedListNode?
  *     prev: DoublyLinkedListNode?
  * }
  *
  */
 func sortedInsert(llist: DoublyLinkedListNode?, data: Int) -> DoublyLinkedListNode? {
    let newNode = DoublyLinkedListNode(nodeData: data)
    guard let head = llist else { return newNode }

    if data <= head.data {
        newNode.next = head
        head.prev = newNode
        return newNode
    }
    else {
        let keyNode = sortedInsert(llist: head.next, data: data)
        head.next = keyNode
        keyNode?.prev = head
        return head
    }

 }

 let stdout = ProcessInfo.processInfo.environment["OUTPUT_PATH"]!
 FileManager.default.createFile(atPath: stdout, contents: nil, attributes: nil)
 let fileHandle = FileHandle(forWritingAtPath: stdout)!

 guard let t = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
 else { fatalError("Bad input") }

 for tItr in 1...t {
    guard let llistCount = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    let llist = DoublyLinkedList()

    for _ in 1...llistCount {
        guard let llistItem = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
        else { fatalError("Bad input") }
        llist.insertNode(nodeData: llistItem)
    }

    guard let data = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    let llist1 = sortedInsert(llist: llist.head!, data: data)

    printDoublyLinkedList(head: llist1, sep: " ", fileHandle: fileHandle)
    fileHandle.write("\n".data(using: .utf8)!)
 }
 */
