if 1 < 2
  puts "É verdade: 1 é menor que 2"
end
#-------------------------
a = 0

if a == 100
  puts "A expressão é verdadeira, mas agora a é: #{a}"
else
  puts "#{a} não é igual a 100"
end
#-------------------------
def fome?(hora_do_dia)
  if hora_do_dia > 12
  	puts "Mim fome"
  	true
  else 
    puts "Mim sem fome"
    false
  end
end

def comer_um(o_que)
  puts "Mim comer #{o_que}\n"
end

comer_um 'maçã' if fome?(14)

comer_um 'maçã' if fome?(10)
