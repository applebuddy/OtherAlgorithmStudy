
// MARK: - Min Stack

// MARK: stack swift 문제풀이
/*
class MinStack {
    typealias Pair = (Int, Int)
    private var element = [Pair]()
    private var min = Int.max

    init() {
        element = []
    }

    func push(_ x: Int) {
        min = min > x ? x : min
        element.append((x, min))
    }

    func pop() {
        let last = element.removeLast().1
        if last == min {
            if element.isEmpty {
                min = Int.max
            } else {
                min = element.last!.1
            }
        }
    }

    func top() -> Int {
        return element.last!.0
    }

    func getMin() -> Int {
        return element.last!.1
    }
}
*/
