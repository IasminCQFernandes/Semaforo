# Sistema de Controle de Semáforo e Travessia de Pedestres 
Este repositório contém o código para um sistema de controle de semáforo e travessia de pedestres implementado usando um microcontrolador Arduino. O sistema gerencia o fluxo de tráfego e a segurança dos pedestres controlando os sinais dos semáforos e das travessias de pedestres.

## Componentes Utilizados 
• Placa Arduino; 

• LEDs para os semáforos (vermelho, amarelo, verde) ;

• LEDs para travessia de pedestres (vermelho, verde) ;

• Resistores ;

• Protoboard ;

• Cabos jumper;

## Descrição do Código 
O arquivo de esboço do Arduino (semaforo.ino) contém o código para controlar os semáforos e as luzes de travessia de pedestres. Aqui está uma breve visão geral das funções definidas no código:

• vermelho(int tempo): Defina como luzes de travessia para carros para vermelho e como luzes de travessia de pedestres para verde por uma duração especificada (tempo). 

• amarelo(int tempo): Define como luzes de travessia para carros para amarelo e pisca a luz vermelha de travessia de pedestres por uma duração especificada (tempo). 

• verde(int tempo): Defina como luzes de travessia para carros para verde e como luzes de travessia de pedestres para vermelho por uma duração especificada (tempo). 

• setup(): Inicializa os modos de pino para LEDs conectados aos pinos do Arduino. 

• loop(): Executa a sequência de fases do semáforo em um loop.

## Uso 
Conecte os LEDs para os semáforos e as luzes de travessia de pedestres aos pinos projetados na placa Arduino em suas portas conforme especificado no código. Faça o upload do código para a placa Arduino usando um IDE do Arduino ou qualquer software compatível. Uma vez carregado, o sistema controlará automaticamente os semáforos e as luzes de travessia de pedestres na sequência definida.

## Licença 
Este projeto está licenciado sob a Licença MIT.

## Reconhecimentos 
Um agradecimento especial à comunidade Arduino por fornecer recursos e inspiração para este projeto.
## Autores

- [@IasminCQFernandes](https://www.github.com/iasmincqfernandes)

