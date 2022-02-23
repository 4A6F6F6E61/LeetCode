# @param {String} column_title
# @return {Integer}
def title_to_number(column_title)
    chars  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    result = 0
    column_title.reverse.split('').each_with_index do |c, i|
        result += (chars.index(c) + 1) * (26 ** i)
    end
    return result
end

puts title_to_number("ABDAC")