# T4 - Shapes distintos em uma lista genérica

<br>

## Enunciado 

A ser desenvolvido em: DUPLAS
O T5, em continuidade com a aula sobre Construtores / Destrutores, será a implementação de algumas classes
de formas 2D e 3D geométricas distintas. O armazenamento dos objetos após instanciados ocorrerá em estrutura
de dados genérica que permita tal armazenamento.
Para esta implementação, considerar as seguintes classes abaixo:
Circle: possui como atributo somente m_ratio;
Square: possui como atributo somente m_edge;
Triangle: possui como atributos 3 vértices bidimensionais (m_p1, m_p2, m_p3) e 3 Edges (lados) (m_e1, m_e2,
m_e3). Os triangulos podem ser regulares ou irregulares (triângulos quaisquer). Podem ser inicializados via
construtores tanto por vértices como por lados.
Sphere: possui como atributo m_ratio;
Tetrahedron: possui como atributos 4 vértices tridimensionais (m_p1, m_p2, m_p3, m_p4). Podem ser regulares
ou irregulares (tetraedrons quaisquer).
Cube: possui como atributo somente m_edge.
Todas as classes acima devem possuir um método que calcula a sua área, lembrando que no caso das formas 3D
a área é a soma das superfícies ou facetas que as compõem. O armazenamento deve ocorrer em um vector <
GenericShape >, onde GenericShape é uma classe especializada no armazenamento das formas acima, através
de vários construtores especializados (um para cada classe acima).
O programa será alimentado com o arquivo de texto contendo diversos objetos armazenados, com seus atributos
pré-estabelecidos, que será solicitado ao início da execução do programa:
Exemplo:
if(NDEBUG) cout << “Enter with a shape configuration file to load:”;
string path;
cin >> path;


<br>

## ⚠️ Atenção ⚠️
*Cuidado com o plágio*

<br>
