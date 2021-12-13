void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   
   int Index = 0;
}

void loop() {
  int i=0;
  float NOTE[25][2] = {
    {2.30824, 49.8907},
    {2.32499, 49.8884},
    {2.33868, 49.88},
    {2.34267, 49.8742},
    {2.34357, 49.8687},
    {2.35232, 49.8638},
    {2.36543, 49.8619},
    {2.37718, 49.8595},
    {2.39843, 49.8459},
    {2.40648, 49.8325},
    {2.40364, 49.8237},
    {2.39951, 49.8172},
    {2.39556, 49.8075},
    {2.39261, 49.7995},
    {2.38748, 49.7874},
    {2.37099, 49.7665},
    {2.36415, 49.7545},
    {2.35662, 49.7416},
    {2.35329, 49.7252},
    {2.35933, 49.7082},
    {2.35545, 49.7015},
    {2.34849, 49.6964},
    {2.34476, 49.6921},
    {2.3373, 49.6807},
    {2.33725, 49.6741},
    };

  
    for(i=0;i<25;i++){
      Serial.print("$GPGGA,084548,");
      //Latitude :
      Serial.print(NOTE[i][0],4);
      NOTE[i][0] = NOTE[i][0] + 1.1;
      Serial.print(",N,");
      //Longitude :
       Serial.print("00");
      Serial.print(NOTE[i][1],4);
      NOTE[i][1] = NOTE[i][1] + 1.3;
      Serial.println(",E,1,08,0.9,545.4,M,46.9,M, , *42");
      delay(1000);
    }
  
}
