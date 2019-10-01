## Conversão de binário para 7 segmentos

O programa de conversão de binário para 7 segmentos utiliza uma variável `char`, de 8 bits, com entrada na forma `0000DCBA`, entre 0 e 15, e retorna uma variável `char`, de 8 bits, na forma `0gfedcba`, utilizando a convenção a seguir:

![Display](https://upload.wikimedia.org/wikipedia/commons/thumb/e/ed/7_Segment_Display_with_Labeled_Segments.svg/220px-7_Segment_Display_with_Labeled_Segments.svg.png)

Foram calculados 7 mapas de Karnaugh em função de `ABCD`, um para cada variável `abcdefg`, obtendo-se 7 funções booleanas. Em seguida, basta aplicar a entrada `ABCD` a cada uma das funções, para obter os 7 resultados necessários para gerar o output.

Para cumprir a missão de fazer em apenas uma linha e sem parênteses, foi utilizado o conceito de **look-up table** (LUT) para pré-calcular os 16 resultados possíveis e iterar entre eles utilizando notação ternária (statement ? do if true : do if false) para encontrar o resultado correto.
