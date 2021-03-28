# Arduino_AC1
## Nossa primeira AC, observe bem o código, procure pelos erros.

Use o FORK para adicionar esse projeto a sua organização antes de começar.

![](https://img.shields.io/github/forks/Leoruiz197/Arduino_AC1)
![](https://img.shields.io/github/stars/Leoruiz197/Arduino_AC1)

![](https://github.com/Leoruiz197/Arduino_AC1/blob/Leoruiz197-patch-1/me.jpg)
![](https://github.com/Leoruiz197/Arduino_AC1/blob/Leoruiz197-patch-1/AC1-esquema.png)

## **O PROBLEMA:** 

Seu grupo foi contratado para realizar a automação do chão de fábrica de uma farmacêutica responsável por produzir doses de vacina, a automação levará em conta alguns sensores e avisos luminosos para os funcionários responsáveis pela produção.

Após realizar a montagem, vamos conferir a lista de funcionalidades e adicionar cada ponto necessário para completar o desafio.

### Funcionalidades esperadas:

- Um botão para ligar e outro para desligar a produção indicados pelo led vermelho.
- Leitura do sensor de temperatura e teste, ao atingir **15℃** o led azul deve acender, deve ser informado via serial e somente apagar o led quando a temperatura for mais baixa que isso.
- Leitura do sensor de luminosidade e teste, ao indicar um valor acima de **5** a luminosidade do ambiente esta muito alta, deve ser informado via serial e o led verde deve permanecer aceso até a luminosidade diminuir.

### Composição da nota do grupo
- Ajuste dos erros no código principal.
- Documentação do projeto do github no README.md abordando todos os pontos necessários.
- No README.md adicionando nome do grupo fotos e short bio de cada integrante.
- Todos os pontos do código devem estar comentados corretamente informando o que se passa ali.
- Usar do Serial o max possível, sempre informando os estados da produção e demais itens.
- Implementação das funcionalidades faltantes.

### Desconto de nota individual

**Caso um dos integrantes venha a ter um desempenho inconsistente na colaboração com o projeto em comparação com os demais da equipe o mesmo pode ter sua nota parcial ou total descontada.**

#### LINKS UTEIS:

- **Funções:** https://www.arduino.cc/reference/pt/
- **map():** https://www.arduino.cc/reference/pt/language/functions/math/map/
- **millis():** https://www.arduino.cc/reference/pt/language/functions/time/millis/

- **Editor de README.md:** https://pandao.github.io/editor.md/en.html
- **Shield.io:** https://shields.io/
