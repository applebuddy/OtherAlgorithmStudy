
// MARK: - Subarray Sum Equals K

// MARK: Hash swift 문제풀이

class Solution {
    func subarraySum(_ nums: [Int], _ k: Int) -> Int {
        var dic: [Int: Int] = [0: 1]
        var sum = 0
        var cnt = 0
        for num in nums {
            sum += num
            if dic[sum - k] != nil {
                cnt += dic[sum - k]!
            }

            dic[sum] = (dic[sum] ?? 0) + 1
        }

        return cnt
    }
}
