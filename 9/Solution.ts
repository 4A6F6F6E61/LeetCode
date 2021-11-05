function _isPalindrome(x: number): boolean {
    const s = x.toString()
    let s2 = ""
    for (const p of s) s2 = p + s2
    return s == s2
}
