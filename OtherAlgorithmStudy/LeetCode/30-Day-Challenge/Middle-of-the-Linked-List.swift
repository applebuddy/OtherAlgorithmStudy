
// MARK: - Middle of the Linked List

// MARK: swift 문제풀이
/*
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init() { self.val = 0; self.next = nil; }
 *     public init(_ val: Int) { self.val = val; self.next = nil; }
 *     public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
 * }
 */


class Solution {
    func middleNode(_ head: ListNode?) -> ListNode? {
        var node = head
        var cnt = 0
        while node?.next != nil {
            cnt += 1
            node = node?.next
        }

        let midIdx = cnt & 1 == 0 ? cnt / 2 : cnt / 2 + 1
        node = head
        for _ in 0 ..< midIdx {
            node = node?.next
        }

        return node
    }
}
*/
