// variaveis 
const int vermelho = 3;
const int verde = 2;
const int azul = 1; 

bool estadoLedVermelho = false;

const int botao1 = 4;
unsigned long lastDebounceTime1 = 0;
const int botaoDelay = 100;

const int botao2 = 5;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
  Serial.begin(9600);
	
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("                           V1.0");
  Serial.println("Grupo: TIGERS ");
}

void loop()
{
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1))
	{
    Serial.println("botão 1 pressionado");
    ledVermelho();
  	lastDebounceTime1 = millis();   
}
  
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao2))
  	{
    Serial.println("botão 2 pressionado");
    ledVermelho();
  	lastDebounceTime1 = millis();
}
    
  ///verificar temp
  if(getTemperatura() >= 15)
  	{
    ledAzul(true);
  }else
  	{
  	ledAzul(false); 
  }
  
  if(getTemperatura() == 15)
  	{
  	Serial.println("Temperatura chegou a 15°C ");
    delay(2000);
  }
  
  if(getLuminosidade() >5)
  	{
    ledVerde(true);
    Serial.println("Luminosidade está muito alta");
    delay(2000);
  }else 
    {
    ledVerde(false);
  }
  
  delay(10);
  
  
}

void ledVermelho(){
  estadoLedVermelho = !estadoLedVermelho;
  digitalWrite(vermelho,estadoLedVermelho);
}
void ledVerde(bool estado){
  digitalWrite(verde,estado);
  
}
void ledAzul(bool estado){
	digitalWrite(azul,estado);
}

int getTemperatura(){
  	int temperaturaC;
	temperaturaC = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  	return temperaturaC;
} 
//def de lumi
int getLuminosidade(){
  	int luminosidade;
	luminosidade = map(analogRead(A1), 6, 619, -3, 10);
  	return luminosidade;
  
  
}
}
