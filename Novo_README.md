# Super_Trunfo_Wyden_2025.2
Programa do curso de Engenharia de software - UniFanor.

# Super Trunfo — Nível Aventureiro (Versão Simples)

Este programa é uma versão simplificada do jogo **Super Trunfo**, feita em linguagem **C**.  
Ele compara duas cartas de países — **Brasil** e **Portugal** — com base em diferentes atributos, como população, área e PIB.  

O jogador escolhe o atributo desejado através de um **menu interativo**, e o programa mostra qual país venceu de acordo com as regras.

---

## Atributos disponíveis

Cada carta contém os seguintes atributos:

| Atributo | Tipo | Regra de vitória |
|-----------|------|------------------|
| População | Inteiro | Maior valor vence |
| Área | Float | Maior valor vence |
| PIB | Float | Maior valor vence |
| Pontos Turísticos | Inteiro | Maior valor vence |
| Densidade Demográfica | Float | **Menor valor vence** (regra invertida) |

---

## Como compilar o programa

No terminal, digite:

```bash
gcc super_trunfo.c -o super_trunfo

* Como executar

Depois de compilar, execute o programa com:
./super_trunfo

* Como jogar

Ao iniciar, o programa mostra as duas cartas fixas:
===== SUPER TRUNFO =====
Carta 1: Brasil
Carta 2: Portugal

Em seguida, aparece o menu de opções:
Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
Opção: _

Digite o número do atributo que deseja comparar e pressione Enter.
O programa exibirá os valores e informará qual país venceu.

* Exemplo de uso
===== SUPER TRUNFO =====
Carta 1: Brasil
Carta 2: Portugal

Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
Opção: 3

Comparando Brasil x Portugal
PIB: 2.00 trilhões vs 0.27 trilhões
Brasil venceu!

*Regras especiais

Para densidade demográfica, vence quem tiver o menor valor, pois significa menos pessoas por quilômetro quadrado.

Se os dois valores forem iguais, o resultado será “Empate!”

Caso o jogador digite uma opção inválida, o programa mostra “Opção inválida! Tente novamente.”

