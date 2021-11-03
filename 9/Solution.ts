function isPalindrome(x: number): boolean {
    let s: string = x.toString(),
        s2: string = ""
    for (let p of s) s2 = p + s2
    return s == s2
}
