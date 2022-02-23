def persistence(n, times = 0)
    if n.to_s.length == 1
        return times
    end
    n = n.to_s.chars.map { |i|
        i.to_i
    }.reduce(:*)
    persistence(n, times + 1)
end

def test()
    puts persistence(39) == 3
    puts persistence(4) == 0
    puts persistence(25) == 2
    puts persistence(999) == 4
end

test