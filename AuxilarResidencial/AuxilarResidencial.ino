//alarme vazamento de gás

const int buzz =8;
const int LEDSinal = 9;
const int LEDRed = 10;
uint16_t A;
int som = 0;
uint16_t sensor = 0;
//Monitoramento de portas ou janelas com MC-38a
int ledBranco = 13; // porta 13 em output para o LED branco
int ledAmarelo = 12; // porta 12 em output para o LED amarelo
int pinoSensor = 7; // porta 7 em input para o sensor
int val = 0; // variável para ler o status do pino do sensor
 
void setup() {
//alarme vazamento de gás
pinMode(buzz,OUTPUT);
pinMode(LEDSinal,OUTPUT);
pinMode(LEDRed,OUTPUT);

//*resetando botões
digitalWrite(LEDSinal,LOW);
digitalWrite(LEDRed,HIGH);

//*delay de 30 segundos até o sensor aquecer.
//*na fase de testes recomendo diminuir o delay.
delay(30000);
digitalWrite(LEDRed,LOW);

for (A = 0; A <3; A +=1) {
digitalWrite(LEDSinal, HIGH);
delay(10);
digitalWrite(LEDSinal, LOW);
delay(10);
}
//monitoramento portas e janelas
 pinMode(ledBranco, OUTPUT); // declarando o pino do LED branco como output
 pinMode(ledAmarelo, OUTPUT); // declarando o pino do LED amarelo como output
 pinMode(pinoSensor, INPUT); // declarando o pino do sensor como input
}
//alarme vazamento de gás
void pisca() {
delay(20);
digitalWrite(LEDSinal,HIGH);
delay(20);
digitalWrite(LEDSinal,LOW);
}

void loop() {
//alarme vazamento de gás
delay(10);
sensor = analogRead(A0);

som = map(sensor ,10,50, 50,400);
tone(buzz,som,(1/(sensor * 10)));
pisca();
delay(50);

//Monitoramento portas e janelas
 val = digitalRead(pinoSensor); // lendo o estado do sensor e atribuindo a variável val
 if (val == HIGH) {// verifica se a entrada é alta (quando os dois módulos estão separados), e acende o led vermelho e apaga o verde

 digitalWrite(ledBranco, HIGH); // LED branco ON
 digitalWrite(ledAmarelo, LOW); // LED amarelo OFF

} else { //se não acenderá o led verde e apagará o vermelho

 digitalWrite(ledAmarelo, HIGH); // LED amarelo ON
 digitalWrite(ledBranco, LOW); // LED branco OFF

 }
}
