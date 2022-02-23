# @param {String} haystack
# @param {String} needle
# @return {Integer}
def str_str(haystack, needle)
    i = haystack.index(needle)
    
    return i ? i : -1
end