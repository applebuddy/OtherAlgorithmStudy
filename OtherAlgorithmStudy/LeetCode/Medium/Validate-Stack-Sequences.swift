
// MAAK: - Validate Stack Sequences

/*
class Solution {
    func validateStackSequences(_ pushed: [Int], _ popped: [Int]) -> Bool {
        var stack: [Int] = []
        var jdx = 0
        pushed.forEach { puv in
            stack.append(puv)
            while !stack.isEmpty && stack.last! == popped[jdx] {
                jdx += 1
                stack.removeLast()
            }
        }
        
        while !stack.isEmpty && stack.last! == popped[jdx] {
            jdx += 1
            stack.removeLast()
        }
        
        return stack.isEmpty
    }
}
*/
