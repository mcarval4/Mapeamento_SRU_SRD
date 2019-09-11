# Mapeamento SRD e SRU

Ferramenta criada para mapeamento(conversão) entre sistemas de referência (especificamente: Sistema de Referência do Universo e Sistema de Referência do Dispositivo).

---

## Definição

```python
Um sistema de coordenada é denominado de Sistema de Referência quando servir para alguma finalidade específica
```

### Sistema de Referência do Universo – SRU

- Descreve os objetos em termos das coordenadas utilizadas pelo usuário em determinada aplicação;
- Cada tipo de aplicação especifica o seu universo de
trabalho próprio.
- Por exemplo, uma aplicação CAD de arquitetura o universo é dado em metros ou centímetros. Para uma aplicação de mecânica de precisão, o universo estará em milímetros ou nanômetros.
- Cada um destes sistemas tem uma escala e seus limites extremos (coordenadas mínimas e máximas do universo).

![Imagem explicativa](img/img1.PNG "Imagem explicativa:")

### Sistema de Referência do Dispositivo – SRD

- Utiliza coordenadas que podem ser fornecidas diretamente
para um dispositivo de saída específico;
- Em vídeo pode indicar o número máximo de pixels que
podem ser acesos ou a resolução especificada na
configuração do sistema operacional.
    - Ex. (800 x 600), (1.024 x768)
    - Nesse caso, a origem é o canto superior esquerdo do dispositivo.

![Imagem explicativa](img/img2.PNG "Imagem explicativa:")

### Conversões entre Sistemas de Referência

- Normalmente quando se cria um modelo as informações
gráficas dizem respeito à aplicação e não ao dispositivo.
- Para visualizar dados num dispositivo gráfico qualquer, é necessário que se efetue algumas transformações entre os sistemas de referência estudados.
- Para tal é preciso definir as razões e proporções entre cada
um dos sistemas.
- O Processo de conversão é chamado de Mapeamento e é
uma das etapas do processo de visualização de imagens 2D e 3D (a ser visto em breve).

![Imagem explicativa](img/img3.PNG "Imagem explicativa:")

|               | Limites de SRU           | Limites do SRD  |
| ------------- |:-------------:| -----:|
| Mínimo     | (0, 0) | (0, 0) |
| Máximo      | (1000, 1500)      |   (640, 480) |

### Componente X:

![Imagem explicativa](img/eq1.PNG "Imagem explicativa:")

![Imagem explicativa](img/eq.PNG "Imagem explicativa:")

## Componente Y:

![Imagem explicativa](img/graf2.PNG "Imagem explicativa:")

![Imagem explicativa](img/eq2.PNG "Imagem explicativa:")
