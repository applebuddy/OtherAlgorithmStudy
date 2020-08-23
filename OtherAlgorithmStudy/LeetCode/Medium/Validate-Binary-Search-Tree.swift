
// MARK: - Valid Binary Search Tree

// MARK: Stack swift 문제풀이

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public var val: Int
 *     public var left: TreeNode?
 *     public var right: TreeNode?
 *     public init() { self.val = 0; self.left = nil; self.right = nil; }
 *     public init(_ val: Int) { self.val = val; self.left = nil; self.right = nil; }
 *     public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
 *         self.val = val
 *         self.left = left
 *         self.right = right
 *     }
 * }
 */

class Solution {
    func isValidBST(_ root: TreeNode?) -> Bool {
        var stack = [TreeNode?]()
        var inorder = Int.min
        var root = root
        while root != nil || !stack.isEmpty {
            while root != nil {
                stack.append(root)
                root = root?.left
            }
            
            root = stack.removeLast()
            if root != nil, root!.val <= inorder { return false }
            inorder = root!.val
            root = root.right
        }
        return true
    }
}
