# Plano para ler dados:
- Medir o tempo em microsegundos (medida mais precisa de tempo que se pode conseguir no arduino) que uma rotação leva;
- Dividir o tempo pela quantidade de bits em uma faixa (73728) para saber quantos microsegundos tem um bit;
- Dividir o tempo por 2, pois o plano é obter uma amostra em ~1/3 e em ~2/3 do bit;
- Fazer um código de alta velocidade que consiga gravar todas as amostras em uma grande variavél de 18432 bytes (usar assembly ?);
- Usar código normal para decodificar os dados para uma váriavel de 9216 bytes;
# Plano para gravar dados:
- Usar um código normal para codificar 9216 bytes para 18432 "bytes em MFM" (cada 2 bits serão 1 bit no disquete);
- Medir o tempo em microsegundos que uma rotação leva;
- Dividir o tempo pela quantidade de bits em uma faixa (73728) para saber quantos microsegundos tem um bit;
- Dividir o tempo por 2, pois o plano é mudar de estado (ligado ou desligado) a pelo menos 2 vezes por bit;
- Usar um código de alta velocidade para ligar o modo de gravação e mandar todos os bits dessa variavel;
