delay(10);
char c=Serial.read();
if(c=='#')
{break; }
voice += c;
}
if (voice.length() > 0) {
Serial.println(voice);
if (voice == "turn on" || voice == "turn on all")
{
allon() ;
}
else if (voice == "turn off" || voice=="turn off all")
{
alloff() ;
}
else if(voice =="turn on light" || voice =="turn on lights"){
RedOn();
}
else if(voice =="turn off light"){
RedOff();
}
else if(voice =="turn on fan" || voice =="turn on fans"){
GreenOn();
}
else if( voice =="turn off fan" ){
GreenOff();
}
else if(voice =="turn on AC" || voice =="turn on ac"){
BlueOn();
}
else if(voice =="turn off AC"){
BlueOff();
}
voice="";
}
}
