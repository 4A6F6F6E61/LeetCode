function countBits(n: number): number[] {
    let output: number[] = []
    for (let i: number = 0; i <= n; i++)
        output.push((i.toString(2).match(/1/g) || []).length)
    return output
}
