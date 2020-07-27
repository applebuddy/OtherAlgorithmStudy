
// MARK: - Single Number

// MARK: TimeComplexity O(N), SpaceComplexity O(1) Solution


func singleNumber2(_ nums: [Int]) -> Int {
    var result = 0
    for num in nums {
        result ^= num
    }
    return result
}


// MARK: TimeComplexity O(N), SpaceComplexity O(N) Solution

func singleNumber(_ nums: [Int]) -> Int {
    var dic = [Int: Int]()
    var dic2 = [Int: Int]()
    var Ans = 0
    
    for num in nums {
        dic[num] = (dic[num] ?? 0) + 1
    }
    
    for d in dic {
        if d.value == 1 { return d.key }
    }
    
    return 0
}

