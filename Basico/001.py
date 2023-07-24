"""Fazer um algoritmo em linguagem C para receber do usuário um tempo em 
segundos, correspondente à duração de um evento qualquer (por ex. jogo de 
futebol), calcular e mostrar ao usuário o tempo equivalente em horas, minutos 
e segundos."""

seg = int(input("Informe em segundos a duração do evento: \n"))

hora = seg//3600

m = seg % 3600
min = m//60

resto = m % 60

print(f"o tempo do evento é {hora}h: {min}min: {resto}s ")
