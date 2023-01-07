livros = {} #hash vazio
livros["O Arco-Íris da Gravidade"] = :esplendido
livros["Até o Fim"]  = :lixo
livros["Cores Vivas"] = :mediocre

puts livros
puts livros.length
puts livros["O Arco-Íris da Gravidade"]
livros.keys #semelhante ao map em Java

classificacoes = Hash.new {0}
livros.values.each { |classificacao|classificacoes[classificacao] += 1} #semelhante ao foreach
puts classificacoes
