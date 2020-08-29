
// MARK: - Add Two Numbers

// MARK: swift 문제풀이

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

extension Array where Element == Int {
    func convertArrayToList() -> ListNode? {
        var list = ListNode()
        var result = list
        for (key, value) in enumerated() {
            list.val = value
            if key == count - 1 { break }
            list.next = ListNode()
            list = list.next!
        }
        return result
    }

    func sum(of arr: [Int]) -> [Int] {
        let mxLen = count > arr.count ? count + 1 : arr.count + 1
        let first = [Int](repeating: 0, count: mxLen - count) + self
        let second = [Int](repeating: 0, count: mxLen - arr.count) + arr
        var result = [Int](repeating: 0, count: mxLen)
        var idx = mxLen - 1
        var rem = 0
        while idx >= 0 {
            result[idx] = (first[idx] + second[idx] + rem) % 10
            rem = (first[idx] + second[idx] + rem) / 10
            idx -= 1
        }

        while result.count > 1, result.first! == 0 {
            result.removeFirst()
        }

        return result.reversed()
    }
}

class Solution {
    private func getListNum(_ list: inout ListNode?) -> [Int] {
        var stk = [Int]()
        while list != nil {
            stk.append(list!.val)
            list = list!.next
        }

        return stk.reversed()
    }

    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        var list = l1, list2 = l2
        var ar = getListNum(&list)
        var ar2 = getListNum(&list2)
        var answer = ar.sum(of: ar2).convertArrayToList()
        return answer
    }
}
