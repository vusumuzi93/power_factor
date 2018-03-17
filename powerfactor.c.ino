const VOLTAGE_INPUT_PIN = 0;
const CURRENT_INPUT_PIN = 1;
void setup() {
  pinMode(VOLTAGE_INPUT_PIN,INPUT)
  pinMode(CURRENT_INPUT_PIN,INPUT)
  
  // put your setup code here, to run once:

}

void loop() {
  int micros_2 = 0;
  int micros_3 = 0;
  int voltage_pulse = 0;
  int current_pulse = 0;
  int voltage_value = digitalRead(VOLTAGE_INPUT_PIN);
  //TODO: if the pulse is not in microseconds, convrt it to microseconds
  int voltage_pulse = pulseIn(VOLTAGE_INPUT_PIN,HIGH);
  micros_2 = micros();
  int current_pulse = pulseIn(CURRENT_INPUT_PIN, LOW);
  micros_3 = micros();
  //TODO, Compare to see if pulses are the same, if they differ a little you can take avarage
  int d_t = micros_3 - voltage_pulse - micros_2;
  double phi_1 d_t * 2 * PI * (1/(2*voltage_pulse))
  double power_fator = cos(phi_1)

  //TODO: Implement the function Below
  //displayPowerFactor(power_facto)
  // put your main code here, to run repeatedly:

  //TODO Decide on switching

  //TODO COrrection of power fatcor

  //TODO Display the Bill
}
