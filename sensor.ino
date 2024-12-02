const int LED =3;
const int sensor =0; 
int intensidad;

void setup() {

pinMode (LED, OUTPUT);

}

void loop() {

intensidad = analogRead (sensor) / 4;
analogWrite(LED, intensidad);

}