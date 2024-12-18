**FARMER'S TECHIE**

In several cases, farmers should execute irrigation in the field themselves. However, in other situations, they are unable to perform certain tasks manually, such as checking the temperature, humidity, and moisture content of the soil; this process takes a lot of time and is prone to human mistake. It is impossible to constantly check these levels and maintain them at regular intervals. Certain approaches begin irrigation as soon as the soil moisture content falls; but, if an external event causes a fast increase in the moisture content, the crop may be harmed. The creation of an automatic irrigation system is our suggested solution. Farmers can obtain the information via a mobile device without physically visiting the farm. We instantly determine the soil's moisture content. We automatically start the appropriate irrigation if the moisture level falls below the cutoff for a specific amount of time. We accomplish this by using the Formal Verification techniques.By keeping the data in the cloud, farmers are informed whenever irrigation is necessary.

**OBJECTIVE**

Water is main resource for any type of crop. Crop with the right amount of water gives good yield. Supplying correct amount of water to crop is crucial. Supplying proper water can’t be possible all the time by humans. Smart irrigation is a one-time investment and further reduces the cost. Over irrigation can lead to problems such as erosion, nutrient leaching and decreases soil fertility.

The inefficiency and limitations of manual irrigation lead to irregular water distribution and potential crop damage.
Automation can minimize human intervention, reduce errors, and optimize water usage, leading to healthier crops.
IOT and machine learning offer an opportunity to bring intelligence to irrigation management.


**TOOLS**

Below mentioned are hardware tools that are used:

**Soil moisture sensor**: Soil Moisture Sensor measure or estimate the amount of water in the soil. This sensor can be placed anywhere in the field to determine the soil moisture.

![image](https://github.com/user-attachments/assets/13d32d8b-79ee-42db-ad86-ce5217baebc8)


**Humidity sensor**: Humidity sensor is a device that senses, measures and reports the relative humidity of air and measures the water vapor in the air. 

![image](https://github.com/user-attachments/assets/31a0700a-50f2-4111-a720-fc5f8fe24270)


**Node MCU**: Node MCU is a open-source firmware, hardware and software development environment project developed initially for Node MCU ESP8266 Wi-fi SoC chip based on LUA.

![image](https://github.com/user-attachments/assets/92a2db4b-bb28-4fa8-ab99-ba3848de9261)


**Relay Circuit board**: Relay Circuit board is also known as Printed Circuit Board relay. It is an electronic device that controls the flow of electrical current in a circuit. It serves as a switch based on the control signal.

![image](https://github.com/user-attachments/assets/2dffe357-6c07-41cc-a84d-14ab433c00af)


**Bread Board**: Bread Board sometimes called as plugblock. It is used for building temporary circuits. It is useful to the person who wants to build a circuit to demonstrate its action, then to reuse the components in another circuit. 

![image](https://github.com/user-attachments/assets/2aeab787-6440-4b37-9168-dfbbd993b6d9)

**Water motor**: These pumps operate by using an electric motor to convert electrical energy into mechanical energy. They are designed to be fully submerged in the fluid that is being pumped.

![image](https://github.com/user-attachments/assets/81e2bf7c-0d69-43c2-b8a4-5543272c084a)

**Plant Disease Prediction**

Selected a dataset of weeds.The dataset encompasses a variety of weed species, including both common and invasive types, to ensure comprehensive coverage. 
Images are sourced from a wide range of locations, climates, and conditions to represent the real-world challenges of weed detection.
High-resolution images with varying lighting conditions and perspectives are included to simulate real-world scenarios.
Additional metadata, such as location, date, and any available information about the plants, are also included in the dataset.

Training data

![image](https://github.com/user-attachments/assets/d68aa74f-002a-4280-9584-15f97990dc6e)

![image](https://github.com/user-attachments/assets/d6ed8f51-1181-40bb-9129-558b004dd855)

Testing data

![image](https://github.com/user-attachments/assets/b57e6300-ff28-48a8-aafe-288ad9d61022)

![image](https://github.com/user-attachments/assets/2effa4e9-ae97-4f4b-bf58-e85ff4c7a921)







 


Machine Learning Model


**Cloud Platform**

ThingSpeak is especially useful for real-time data analysis, visualization, and storage. An approachable method for gathering, storing, and analyzing environmental sensor data is provided by ThingSpeak. 

Uploading Data from Sensors:

IoT device gathers information from sensors that measure humidity, temperature, and soil. This device is configured to use ThingSpeak's HTTP API to send the gathered sensor data to ThingSpeak at certain times.
For data uploads to be secure and authenticated, the platform needs an API key that is specific to each channel.



**Experiment**

Initially we connect the soil moisture sensors to the microcontroller, ensuring they’re properly calibrated. Regularly reads the moisture level. If the moisture level is below the threshold, wait and recheck after a specified delay. If the moisture level remains low, activate the irrigation system. If it's above the threshold after rechecking, do not irrigate. Set up cloud platform to receive data from the IoT device. Store historical moisture data and irrigation events. Implement a system to alert the farmer via email when irrigation is triggered or if there are any system issues.

