# IOTC
### Farmer's Techie

In several cases, farmers should execute irrigation in the field themselves. However, in other situations, they are unable to perform certain tasks manually, such as checking the temperature, humidity, and moisture content of the soil; this process takes a lot of time and is prone to human mistake. It is impossible to constantly check these levels and maintain them at regular intervals. Certain approaches begin irrigation as soon as the soil moisture content falls; but, if an external event causes a fast increase in the moisture content, the crop may be harmed.
The creation of an automatic irrigation system is our suggested solution. Farmers can obtain the information via a mobile device without physically visiting the farm.
We instantly determine the soil's moisture content.
We automatically start the appropriate irrigation if the moisture level falls below the cutoff for a specific amount of time. We accomplish this by using the Formal Verification techniques.By keeping the data in the cloud, farmers are informed whenever irrigation is necessary.

Tools:

**Soil moisture sensor**: Soil Moisture Sensor measure or estimate the amount of water in the soil. This sensor can be placed anywhere in the field to determine the soil moisture.

**Humidity sensor**: Humidity sensor is a device that senses, measures and reports the relative humidity of air and measures the water vapor in the air.

**Temperature sensor**: DHT22 is a device that is used to sense the temperature value.

**Node MCU:** Node MCU is a open-source firmware, hardware and software development environment project developed initially for Node MCU ESP8266 Wi-fi SoC chip based on LUA.

**Bread Board**: Bread Board sometimes called as  plugblock. It is used for building temporary circuits. It is useful to the person who wants to build a circuit to demonstrate its action, then to reuse the components in another circuit.
Water motor: These pumps operate by using an electric motor to convert electrical energy into mechanical energy. They are designed to be fully submerged in the fluid that is being pumped.

Experiments:

Initially we connect the soil moisture sensors to the microcontroller, ensuring they’re properly calibrated.
Regularly reads the moisture level.
If the moisture level is below the threshold, wait and recheck after a specified delay.
If the moisture level remains low, activate the irrigation system. If it's above the threshold after rechecking, do not irrigate.
Set up  cloud platform to receive data from the IoT device. Store historical moisture data and irrigation events.
 Implement a system to alert the farmer via email when irrigation is triggered or if there are any system issues.









 





