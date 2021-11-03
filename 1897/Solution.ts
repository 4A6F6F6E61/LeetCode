function makeEqual(words: string[]): boolean {
    let temp: string = words.join(""),
        vals = {},
        i: number = 0

    for (let char of temp) {
        console.log(char)
        vals[char] = vals[char] == undefined ? 1 : vals[char] + 1
    }
    for (let val in vals) if (vals[val] % Object.keys(words).length == 0) i++

    return i == Object.keys(vals).length
}
