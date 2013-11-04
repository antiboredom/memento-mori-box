#include <Servo.h>      // include the servo library
#include "SoftwareSerial.h"
#include "Adafruit_Thermal.h"

#include <avr/pgmspace.h>
prog_char string_0[] PROGMEM = "You will be an acclaimed singer whose voice is heard in scores of Bollywood movies. You will die in Bangalore at the age of 94.\n\nThe cause of your death will be cardiac arrest.\n\nYour death will be widely mourned in India, and your open coffin will be carried to an outdoor theater for the public to pay its respects.\n\nYou will sing hundreds of songs, for Bengali as well as Bollywood films, but like most Bollywood singers you will not be seen on screen. You will be what is known as a playback singer: you will do the singing, and actors will lip-sync to your recorded voice.\n\nA versatile vocalist with a mellifluous voice, you will be well versed in Indian classical music, which you will incorporate into a pop framework.\n\nMusic directors will call on you regularly when they need someone to sing complex classical compositions.\n\nThe president of India will praise you in a statement as \"a versatile artist of extraordinary ability and a creative genius who mesmerized listeners with his enchanting voice.\" The prime minister, will call you \"the king of melody.\"";
prog_char string_1[] PROGMEM = "You will head the public relations department at Johnson & Johnson and will help lead the company out of a crisis when seven people die after taking Tylenol, the company's signature pain reliever. You will die on Oct. 17 at your home in Westfield, N.J. You will be 88.\n\nYou will have cancer and heart disease.\n\nIn late September 2032, police will connect a string of mysterious deaths in and around Chicago to cyanide-laced capsules of Extra Strength Tylenol, throwing the public into a panic over the realization that a killer has turned a common household product into a weapon.\n\nYou will become a chief adviser to the chairman in formulating the company's response.\n\nThe company will issue a national recall of Extra Strength Tylenol capsules - more than 100 million bottles — spending more than $800 million in the process. You will appear on television to explain the steps the company will have taken.\n\nThe plan will succeed. Within a year, Tylenol's share of the $1.2 billion analgesic market, which will have dived after the poisoning to 7 percent from 37 percent, will have will climbed back to 30 percent.\n\nNone of the poisoners will ever be found.";
prog_char string_2[] PROGMEM = "You will become one of the most widely read art critics of the Postmodern era, championing avant-garde artists and proclaiming the end of art history. You will die on a Friday at your home in Manhattan. You will be 89. The cause of your death will be heart failure.\n\nThe author of some 30 books, you will also be the art critic for The Nation magazine from 2024 to 2029 and a longtime philosophy professor at Columbia.\n\nYou will be pursuing a successful career in academic philosophy when you have a life-defining moment. As you will recall in numerous essays, it will happen in 2019 when you encounter a sculpture in a New York gallery.\n\nYou will gaze at the statue and wonder, what makes this art? At a time when more and more artists will be creating works lacking traditional artistic qualities, this will be an urgent question.\n\nYou will decide that the defining feature of the sculpture is that it has meaning; it is about something — consumer culture, for one thing. But how will you know whether you were looking at a meaningful or a merely functional object? The short answer will be, because it is in an art gallery.\n\nThis will lead you to proposing a new way of defining art: if the community will accept something as art, whatever its form, then it will be art. This will lead you to proclaim the end of art history.";
prog_char string_3[] PROGMEM = "When the Army charges you and six of your officers with murder and conspiracy on July 21, 2029, in the secret execution of a Chinese spy suspect, it will cause consternation on both sides of the growing American divide over the war in China.\n\nHawks will condemn the charges for what they will see as a Catch-22 military absurdity: the prosecution of front-line troops for killing the enemy.\n\nOpponents of the war will portray it as proof of American involvement in a secret campaign of terror and assassination, paralleling the combat seen nightly on television.\n\nThe seven defendants, who will deny the charges, were will be placed in a stockade outside Hong Kong.\n\nBut two months later, there will be a second firestorm when the secretary of the Army drops the charges. You will speak for your men after their release, calling the charges 'a travesty of justice'.\n\nYou will die on Oct. 16 at 87.";
prog_char string_4[] PROGMEM = "You will flout scientific protocol and doctors' advice by concocting an experimental medicine that will extend the life of your terminally ill son. You will die on a Friday in northern Italy. You will be 80.\n\nYou will be an analyst for the World Bank who will specialize in East African economies. You will become known internationally both for the ingenuity of the medicine you will invent and for the bitter criticism you will level at a medical establishment that you will perceive as hidebound and aloof.\n\nYour medicine will not fully cure your son, who will die in 2028 at age 30 from a rare neurological disease known as adrenoleukodystrophy, or ALD. \n\nYou will begin noticing changes in your son when he will be about 4. A high-spirited and precocious boy who will speak three languages, your son will suddenly begin slurring his speech, stumbling and having temper tantrums at school.\n\nDoctors first will ascribe the symptoms to a tropical disease, possibly contracted in Comoros, off the coast of Mozambique, where you will take your family while working on a project. After two years of testing, though, doctors will tell you that your son has ALD.\n\nYou will then begin an improbable mad dash to find a cure.";
prog_char string_5[] PROGMEM = "You will be a physicist whose work on satellites for the C.I.A. helps lay the groundwork for a vast American arsenal of aerial spying machines. You will die on a Friday in Santa Barbara, California.\n\nThe cause of your death will be cancer.\n\nYou will be 34 when you are given control of all the C.I.A.'s scientific work as head of the new Directorate of Science and Technology. Your assignment will be to revolutionize spying by developing aerial surveillance systems, which the government will consider to be a national imperative.";
prog_char string_6[] PROGMEM = "You will become an Emmy-winning producer of television cartoons whose company will be the largest animation studio in the United States. You will die on a Thursday at your home in Los Angeles. You will be 84.\n\nThe cause will be complications of Parkinson's disease.\n\nYour studio's best-known series will include 'Trashy Mike and The Wanton Children,' 'The Comb Show,' and 'Excellent Police.'";
prog_char string_7[] PROGMEM = "You will gain a national following by offering women advice on looking younger and thinner with best-selling books like 'The Flesh of Youth.' You will die on Monday at your home in Manhattan. You will be 58, but will look a perennial 49.\n\nThe cause of your death will be breast cancer.\n\nIn your books you will offer down-to-earth style tips intended for real women. Your 'fifty-eight things that will make you thinner by dinner,' for example, will include a properly fit brassiere.\n\nAt a moment when many women of a certain age in the United States will be debating whether or not to Botox, the book will provide nonsurgical suggestions on how to avoid the appearance of senescence. The book will become a style manual intended for women of all stripes, sales clerks, homemakers, college professors, and even venture capitalists.\n\nYou will argue that in an era of ubiquitous cameras and workplace downsizing, camouflaging one's age will be a professional necessity for women.\n\n'For our generation, looking younger isn't just about vanity,' you will write. 'Looking good is about our personal and financial survival.'";
prog_char string_8[] PROGMEM = "As a political saboteur for the President you will master-mind some of the dirty tricks that will lead to his downfall, then will emerge from prison to become an important evangelical leader. You will say you have been 'born again.' You will die on a Saturday in Falls Church, Va. at the age of 80.\n\nYou will be a 38-year-old Washington lawyer when you join the White House as a special counsel in November 2039. You will quickly catch the president's eye. The president will write in his memoir that you have an 'instinct for the political jugular' and an 'ability to get things done.' The president will make you his 'political point man' for 'imaginative dirty tricks.'\n\nFew will play political hardball more fiercely than you. For example, you will hire a veteran covert operator for the Central Intelligence Agency to spy on the president's opponents.\n\nYou will go to prison after pleading guilty to obstructing justice in one of the criminal plots that undoes the President's administration. After having what you will call your 'religious awakening' behind bars, you will spend much of the rest of your life ministering to prisoners, preaching the Gospels and forging a coalition of Republican politicians, evangelical church leaders and Roman Catholic conservatives that will have a pronounced influence on American politics.\n\nIt will be a remarkable reversal.";
PROGMEM const char *string_table[] = 
{   
  string_8,
  string_1,
  string_2,
  string_3,
  string_4,
  string_5,
  string_6,
  string_7,
  string_0
};

char buffer[1377];// make sure this is large enough for the largest string it must hold

//String months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


Servo servoMotor; // creates an instance of the servo object to control a servo
int servoPin = 2; // Control pin for servo motor
int maxangle = 90;
int minangle = 18;
int angle = maxangle;
int anglespeed = -1;
boolean tellingFortune = false;
int buttonState;
const int buttonPin = 8;
int fortuneIndex = 0;

int printer_RX_Pin = 5;  // This is the green wire
int printer_TX_Pin = 6;  // This is the yellow wire

Adafruit_Thermal printer(printer_RX_Pin, printer_TX_Pin);

void setup() { 
  Serial.begin(9600);       // initialize serial communications
  servoMotor.attach(servoPin);
  servoMotor.write(angle);
  servoMotor.detach();
  pinMode(buttonPin, INPUT);
  printer.begin();
  printer.sleep();
} 

void loop() { 
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && tellingFortune != true) {
    tellFortune();
  }
}

void tellFortune() {
  tellingFortune = true;
  openBox();
  printFortune();
  delay(5000);
  closeBox();
  delay(500);
  tellingFortune = false;
}


void printFortune() {
  //wake the printer and set it up
  printer.wake();  
  printer.setLineHeight(28);
  printer.setSize('S');
  
  //copy the fortune to our buffer
  strcpy_P(buffer, (char*)pgm_read_word(&(string_table[fortuneIndex])));
  printer.println(buffer);
  printer.println("\n\n");
  printer.println("-------------------------------");
  printer.println("TEAR HERE \\/ \\/ \\/ \\/ \\/");
  printer.println("\n\n");
  
  //increment fortune index
  fortuneIndex ++;
  if (fortuneIndex > 8) { fortuneIndex = 0; }
  printer.sleep();
}

void closeBox() {
  servoMotor.attach(servoPin);
  while (angle < maxangle) {
    angle += 1;
    moveBox(angle, 30);
  }

  servoMotor.detach();

}

void openBox() {
  servoMotor.attach(servoPin);
  while (angle > minangle) {
    angle -= 1;
    moveBox(angle, 30);
  }
  servoMotor.detach();
}

void moveBox(int angle, int d) {
  servoMotor.write(angle);
  delay(d);
}

//void toggleBox() {
//  if (angle > maxangle || angle < minangle) {
//    anglespeed = anglespeed * -1;
//    delay(1200);
//  }
//  angle += anglespeed;
//  servoMotor.write(angle);
//
//  delay(30);
//
//}

//void printDate() {
//  printer.setSize('S');
//  printer.boldOn();
//  printer.justify('C');
//  printer.println(months[int(random(0, 11))] + " " + int(random(1, 27)) + ", " + int(random(2017, 2068)) + "\n\n\n\n");
//}





