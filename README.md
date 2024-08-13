# Uso de reconfiguração dinâmica em FPGAs para redefinir arquiteturas multicore em tempo de execução.
Este repositório contém todo o código utilizado em minha iniciação científica, com o título acima. 

## Estrutura do repositório e seus conteúdos:

📂 IC-code: diretório base \
├── 📂 bitstreams-zcu104: bitstreams parciais para a placa zcu-104 \
├── 📂 black-parrot-modified: código HDL modificado para aplicação de DFX \
├── 📂 black-parrot-original: código HDL original do processador  \
└── 📂 Pynq-notebooks: notebooks usados no PYNQ para as trocas parciais e medidas de tempo \

## Versões dos softwares e sistemas usados:

### Máquina do bolsista:

#### Sistema Operacional :
``` Linux mint 21.3 (Virginia) ```

#### Softwares de utilidade geral:
```
Vivado: 2022.1 
gcc: 12.3.0
python: 3.11.8
```

### Na FPGA (host):

#### Sistema Operacional :
```  PYNQ Linux, based on Ubuntu 22.04 (GNU/Linux 5.15.19-xilinx-v2022.1 aarch64) ```

#### Softwares de utilidade geral:

```
gcc: 11.2.0
python: 3.10.4
PYNQ: 3.0.1
```

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

Agradeço à equipe de desenvolvimento do processador Black-Parrot e nomeadamente a Dan Petrisko que me auxiliou com dúvidas e procedimentos específicos para a implementação do processador em FPGA via PYNQ.
