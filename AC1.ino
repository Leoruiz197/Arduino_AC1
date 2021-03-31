//variaveis da led
const int vermelho = 5;
const int verde = 6;
const int azul = 7;

bool estadoLedVermelho = true;

const int botao1 = 2;
unsigned long lastDebounceTime1 = 0;
const int botaoDelay = 100;

const int botao2 = 3;
unsigned long lastDebounceTime2 = 0;


void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
  Serial.begin(9600);
	
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("V1.0");
  Serial.println("Grupo: MY LITTLE QUEENS");
}

void loop()
{
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
  	Serial.println("Produção iniciada");
    ledVermelho(true);
  	lastDebounceTime1 = millis();
  }
   if((millis() - lastDebounceTime2) > botaoDelay && digitalRead(botao2)){
  	Serial.println("Produção finalizada");
    ledVermelho(false);
  	lastDebounceTime1 = millis();
  }
  if(getTemperatura() > 15){
ledAzul(true);
    Serial.println("Temperatura acima do ideal");
  }else{
  	ledAzul(false); 
    Serial.println("Temperatura OK");
  }
   if(getLuminosidade() > 5){
    ledVerde(true);
     Serial.println("Luiminosidade acima do ideal");
  }else{
  	ledVerde(false); 
     Serial.println("Luminosidade OK");
  }	
  delay(10);
