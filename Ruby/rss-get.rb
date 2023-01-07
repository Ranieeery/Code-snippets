#https://news.google.com/rss/search?q=aurora%20aksnes&hl=pt-BR&gl=BR&ceid=BR:pt-419 (google news rss feed)
get_shakey
#-----------------------
s = get_shakey

s["William Shakespeare"].each { |key, val|
  puts val["title"]
}
#----------------------
def count_plays(year)
  s = get_shakey

  s["William Shakespeare"]
    .select { |k, v|
      v["finished"] == year
    }.each { |key, val|
      puts val["title"]
    }.count
end

puts count_plays(1591)
#-----------------------
def print_plays(year_from, year_to)
  get_shakey["William Shakespeare"]
    .select { |k, v|
      year_from <= v["finished"] &&
      year_to   >= v["finished"]
    }.each { |k, v|
      puts "#{v["title"].ljust(30)} #{v["finished"]}"
    }
end
print_plays(1600, 1605)
