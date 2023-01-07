def domar( numero_de_megeras ) #looks like py
end
#------------------------------
def domar( numero_de_megeras )
  numero_de_megeras.times {
    puts "Megera domada"
  }
end

domar 5
#-----------------------------
def domar( numero_de_megeras )
  numero_de_megeras.times {
    puts "Megera domada"
  }
  return numero_de_megeras #pode ser omitido pois Ruby retorna a última variável
end

puts domar(3)
