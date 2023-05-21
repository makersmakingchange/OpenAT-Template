/*
 * OpenAT_Firmware Template  // Title
 * 
 * This example file is part of the OpenAT Template avilable at https://github.com/makersmakingchange/OpenAT-Template
 * 
 * Copyright YYYY Author.  // Change this as appropriate
 * 
 * License: This work is distributed under the terms of the GNU General Public License.
 * 
 * This program is free software: you can redistribute it and/or modify it under the terms of the 
 * GNU General Public License as published by the Free Software Foundation, either version 3 of the License, 
 * or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with this program. 
 * If not, see <https://www.gnu.org/licenses/>.
 */



void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialize digital pin LED_BUILTIN as output.
  Serial.begin(9600); // Start serial connection.
  Serial.println("OpenAT is great."); // Output text to serial monitor.
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);    // Turn the LED on.
  delay(1000);                        // Wait for 1 second.
  digitalWrite(LED_BUILTIN, LOW);     // Turn the LED off.
  delay(1000);                        // Wait for 1 second.
}
