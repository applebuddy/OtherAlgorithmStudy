
// MARK: - 색상 코드 변환하기

/*
 func getInt(_ list: [Character]) -> Int {
 var result = 0
 if list[0].asciiValue! < 65 {
     result = Int(list[0].asciiValue! - 48) * 16
 } else {
     result = Int(list[0].asciiValue! - 55) * 16
 }

 if list[1].asciiValue! < 65 {
     result += Int(list[1].asciiValue! - 48)
 } else {
     result += Int(list[1].asciiValue! - 55)
 }

 return result
 }

 func solve(_ colorCodes: [String]) -> [(Int, Int, Int)] {
 var Ans: [(Int, Int, Int)] = []
 for color in colorCodes {
     let list = Array(color)
     Ans.append((getInt(Array(list[1...2])), getInt(Array(list[3...4])), getInt(Array(list[5...6]))))
 }

 return Ans
 }
 */
