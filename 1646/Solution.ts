const getMaximumGenerated = (n: number): number => {
    const nums: number[] = []
    const max = (n - 1) / 2
    nums[0] = 0
    nums[1] = 1
    for (let i = 1; i <= max; i++) {
        nums[2 * i] = nums[i]
        nums[2 * i + 1] = nums[i] + nums[i + 1]
    }
    return Math.max(...nums)
}

console.log(getMaximumGenerated(7))
