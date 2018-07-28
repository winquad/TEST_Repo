bool get_di(int pinnum){

  bool result = false;
  int i = 0;
  int ON = 0;
  
  if (digitalRead(pinnum) == LOW){
    for (i = 0 ; i <= 2 ; i++){
      if (digitalRead(pinnum) == LOW){
        ON++;
      }
    }
  }
  
  if (ON >= 2){
    result = true;    
  }
  

  return result;
  
}

void out_do(int pinnum, char HL){
  
  switch(HL){

    case 'H':
      digitalWrite(pinnum,HIGH);
    break;

    case 'L':
      digitalWrite(pinnum,LOW);
    break;

    default:
      //nothing
    break;
    
  }
  
}

