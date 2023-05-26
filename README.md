# Projeto de Monitoramento de Ambientes com ESP8266-12E

Este projeto tem como objetivo criar uma plataforma de monitoramento de ambientes utilizando o microcontrolador ESP8266-12E, o sensor de temperatura e umidade DHT11, um LED e um sensor de movimento. Ele permite monitorar as variáveis de temperatura, umidade, lâmpada e detectar movimento em um ambiente.

## Componentes Necessários
- ESP8266-12E
- Sensor DHT11 (temperatura e umidade)
- LED
- Sensor de movimento
- Jumpers
- Resistores

## Montagem do Circuito
1. Conecte o sensor DHT11 ao ESP8266-12E utilizando jumpers, seguindo o esquema de pinos correspondente.
2. Conecte o LED ao ESP8266-12E, utilizando um resistor para limitar a corrente, seguindo o esquema de pinos correspondente.
3. Conecte o sensor de movimento ao ESP8266-12E, utilizando jumpers, seguindo o esquema de pinos correspondente.

## Configuração do Ambiente de Desenvolvimento
1. Faça o download e instale a plataforma Arduino IDE em seu computador.
2. Abra a Arduino IDE e vá em "Arquivo" -> "Preferências".
3. Na janela de preferências, adicione a URL "http://arduino.esp8266.com/stable/package_esp8266com_index.json" no campo "URLs Adicionais de Gerenciador de Placas" e clique em "OK".
4. Vá em "Ferramentas" -> "Placa" -> "Gerenciador de Placas".
5. Na barra de busca, digite "esp8266" e instale o pacote "esp8266" desenvolvido por ESP8266 Community.
6. Selecione a placa "NodeMCU 1.0 (ESP-12E Module)" em "Ferramentas" -> "Placa".
7. Conecte o ESP8266-12E ao computador utilizando um cabo USB.

## Instalação das Bibliotecas
1. Abra a Arduino IDE.
2. Vá em "Sketch" -> "Incluir Biblioteca" -> "Gerenciar Bibliotecas".
3. Na janela de Gerenciador de Bibliotecas, pesquise e instale as seguintes bibliotecas:
   - "DHT sensor library" para o sensor DHT11.
   - "Adafruit Unified Sensor" para o sensor DHT11.
   - "ESP8266WiFi" para o ESP8266-12E.
   - "PubSubClient" para a comunicação MQTT.
   - (Opcional) "ArduinoJson" para manipulação de dados JSON.

## Configuração do Projeto
1. Faça o download do código fonte do projeto e abra-o na Arduino IDE.
2. No código, localize as seguintes linhas e insira as informações de sua rede Wi-Fi e servidor MQTT:
3. Realize outras configurações necessárias, como os pinos utilizados pelos componentes e intervalos de leitura.
4. Faça o upload do código para o ESP8266-12E.

## Utilização do Projeto
Após a configuração e upload do código, o ESP8266-12E estará monitorando as variáveis de temperatura, umidade, lâmpada e movimento no ambiente. Ele enviará essas informações para o servidor MQTT configurado, permitindo o monitoramento remoto. Você pode utilizar um cliente MQTT para visualizar e processar os dados enviados pelo ESP8266-12E.

## Integrantes do grupo
- Otto Rego
- Julio Silva
- Tiago Pantoja
