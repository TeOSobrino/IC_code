# Uso de reconfiguração dinâmica em FPGAs para redefinir arquiteturas multicore em tempo de execução.
Este repositório contém todo o código utilizado em minha iniciação científica, com o título acima. 

## Estrutura do repositório e seus conteúdos:

📂 IC-code: diretório base \
├── 📂 bitstreams-zcu104: bitstreams parciais para a placa zcu-104 \
├── 📂 black-parrot-modified: código HDL modificado para aplicação de DFX em um núcleo \
├── 📂 black-parrot-modified-multicore-reconf: código HDL modificado para aplicação de DFX em vários núcleos \
├── 📂 black-parrot-original: código HDL original do processador \
├── 📂 Pynq-notebooks: notebooks usados no PYNQ para as trocas parciais e medidas de tempo \
└── 📂 testbenches: códigos usados para o testbench do processador 

Dentro dos repositórios em que há modificações do fonte original do processador existem cópias dos módulos modificados localmente, que são utilizados no projeto
do Vivado, para que seja possível haver modularidade, o mínimo de repetição e ainda assim várias configurações distintas do processador.

## Versões dos softwares e sistemas usados:

### Máquina:

Lenovo Ideapad S145

### Processador:

Intel core i5-8265U (Whiskey lake)

#### Sistema Operacional :
``` Linux mint 21.3 (Virginia) ```

#### Softwares de utilidade geral:
```
Vivado: 2022.1 
gcc: 12.3.0
g++: 11.4.0
python: 3.11.8
```

### FPGA (host):
``` Zynq UltraScale+ MPSoC ZCU104 Evaluation Kit ```

#### Sistema Operacional :
```  PYNQ Linux, based on Ubuntu 22.04 (GNU/Linux 5.15.19-xilinx-v2022.1 aarch64) ```

#### Softwares de utilidade geral:

```
gcc: 11.2.0
python: 3.10.4
PYNQ: 3.0.1
```

## Como executar:

Caso a FPGA seja uma ZCU104 é necessário apenas carregar os bitstreams e fazer o upload dos benchtests via PYNQ.
Caso contrário é necessário compilar os arquivos presentes na pasta black-parrot-modified ou black-parrot-modified-multicore-reconf a fim de gerar os bitstreams parciais e realizar o passo acima.

Os arquivos do vivado devem ser compatíveis com versões 2022.1 e posteriores, porém foi testado apenas na versão 2022.1.
Passos para realizar a reprodução do conteúdo deste diretório:

### Clonar o Repo e copiar dependências:
```
git clone https://github.com/TeOSobrino/IC_code.git
git checkout
```

### Realizar a síntese dos arquivos no vivado (caso a placa usada não seja uma ZCU104):
```
cd IC_code
cd black-parrot-modified
vivado write_bitstream bp_mod_zcu104.xpr
```

### Upload das bitstreams via PYNQ:
Com o PYNQ já ativo na placa, realizar o upload dos notebooks em /Pynq-notebooks e dos bitstreams gerados, 
o que pode ser feito via cabo ethernet, wifi, ou usb ou através de drag-and-drop dos arquivos na página local do jupyter lab (via ethernet/wifi).

### Upload dos testbenches para a memória do processador
Realizar o upload dos testbenches, compilados para RISCV em suas respectivas pastas em /testbenches via usb para uma pasta acessível ao PYNQ

### Executar os notebooks verificando os caminhos corretos para os testbenches em RISCV 
Executar os notebooks, verificando a reconfiguração e a execução dos testbenches


## Detalhes do projeto:
Título: Uso de reconfiguração dinâmica em FPGAs para redefinir arquiteturas multicore em tempo de execução.
Processo FAPESP n°: 2023/15719-2.
Beneficiário: Téo Sobrino Alves.
Orientador: Vanederlei Bonato.
Unidade/Instituição: ICMC/USP São Carlos.

## Agradecimentos:
Agradeço à FAPESP pela concessão da bolsa do projeto n° 2023/15719-2, que possibilitou a realização deste trabalho.
As opiniões, hipóteses e conclusões ou recomendações expressas neste material são de responsabilidade do(s) autor(es) 
e não necessariamente refletem a visão da FAPESP.

Agradeço à equipe de desenvolvimento do processador [Black-Parrot](https://github.com/black-parrot/black-parrot) e nomeadamente a Dan Petrisko que me auxiliou com dúvidas e procedimentos específicos para a implementação do processador em FPGA via PYNQ.
