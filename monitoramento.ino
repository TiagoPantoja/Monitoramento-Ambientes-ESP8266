// Falta instalar as bibliotecas ESP8266WiFi e DHT no código

// Importando bibliotecas no projeto
#include <ESP8266WiFi.h>
#include <DHT.h>

// Configurando o DHT11
#define DHTPIN 2
#define DHTTYPE DHT11

// Configurando o LED
#define LED_PIN 5

// Configurando o sensor de movimento
#define MOTION_PIN 4

// Configurando a rede Wi-Fi
const char* ssid = "Redmi Note 11S 5G";
const char* senha = "12345678";

// Inicializando o sensor DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
// Comunicação serial padrão
Serial.begin(9600);

// Inicializando o sensor no código
dht.begin();

// Configurando os pinos
pinMode(LED_PIN, OUTPUT);
pinMode(MOTION_PIN, INPUT);

// Conectando a rede Wi-Fi
WiFi.begin(ssid, senha);
while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando à rede Wi-Fi");
}

Serial.println("Conectado à rede Wi-Fi");
}

void loop() {
// Lendo os valores do sensor DHT11
float temperatura = dht.readTemperature();
float umidade = dht.readUmidade();

// Lendo os valores do sensor de movimento
int movimentoDetectado = digitalRead(MOTION_PIN);

// Exibindo os valores no serial monitor
Serial.print("Temperatura: ");
Serial.print(temperatura);
Serial.print(" °C\t");
Serial.println("Umidade: ");
Serial.print(umidade);
Serial.print(" %\t");
Serial.print("Movimento detectado: ");
Serial.println(movimentoDetectado);

// Acendendo ou apagando o LED pela temperatura
if (temperatura >= 25.0) {
    digitalWrite(LED_PIN, HIGH);
} else {
    digitalWrite(LED_PIN, LOW);
}

delay(2000);
}