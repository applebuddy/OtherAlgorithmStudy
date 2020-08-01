
// MARK: Move Zeroes

func moveZeroes(_ nums: inout [Int]) {
    var idx = 0

    for i in nums.indices {
        if nums[i] != 0 {
            let temp = nums[idx]
            nums[idx] = nums[i]
            nums[i] = temp
            idx += 1
        }
    }
}
