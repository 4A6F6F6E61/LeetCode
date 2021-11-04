function removeDuplicates(nums: number[]): number {
    const numsS: string = nums.join(""),
        temp: any = {},
        tmpNums: number[] = []
    let s: string = "",
        i: number = -1
    for (const num of numsS) {
        temp[num] = temp[num] == undefined ? 1 : temp[num] + 1
    }
    for (const num in temp) {
        i++
        tmpNums[i] = parseInt(num)
    }
    nums = tmpNums
    console.log(nums)
    return nums.length
}

console.log(removeDuplicates([1, 1, 2]))
