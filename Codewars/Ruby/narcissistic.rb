# @param {String} value
# @return {Boolean}
def narcissistic?(value)
    temp = 0
    length = value.to_s.length
    
    value.to_s.chars.each do |v|
        temp += v.to_i ** length
    end
    return temp == value
end

puts narcissistic?(153)