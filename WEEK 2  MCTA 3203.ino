#define BUTTON_PIN 2
int segmentA = 9;
int segmentB = 8;
int segmentC = 7;
int segmentD = 6;
int segmentE = 5;
int segmentF = 4;
int segmentG = 3;
int i = 0;
int j = 0;

int Arduino_Pins[7] = {segmentA, segmentB, segmentC, segmentD, segmentE, segmentF, segmentG};
int Segment_Display[10][7] = {{1, 1, 1, 1, 1, 1, 0}, //display number 0
                             {0, 1, 1, 0, 0, 0, 0}, //display number 1
                             {1, 1, 0, 1, 1, 0, 1}, //display number 2
                             {1, 1, 1, 1, 0, 0, 1}, //display number 3
                             {0, 1, 1, 0, 0, 1, 1}, //display number 4
                             {1, 0, 1, 1, 0, 1, 1}, //display number 5
                             {1, 0, 1, 1, 1, 1, 1}, //display number 6
                             {1, 1, 1, 0, 0, 0, 0}, //display number 7
                             {1, 1, 1, 1, 1, 1, 1}, //display number 8
                             {1, 1, 1, 1, 0, 1, 1}, //display number 9
};

void setup() {
  // put your setup code here, to run once:
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
   

  //to display number according to segment pin
  for (j = 0; j<7; j++)
  {
    digitalWrite(Arduino_Pins[j], Segment_Display[i][j]);
  }


  //if button is pushed, number increase
  if(digitalRead(2)==0)
  {
    while(digitalRead(2)==0)
    {
      
    }
    i++; //increase counter with each push button
  }
  

  //start count back to 0
  if(i == 10)
  {
    i = 0;
  }
  delay(100);
}
