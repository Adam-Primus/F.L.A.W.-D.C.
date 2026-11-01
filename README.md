# F.L.A.W.-D.C.
## *Follows Line Autonomous Weak - Dumb Car*
**F.L.A.W.-D.C** is a simple line follower autonomous toy car that is controlled by a Microcontroller [DOIT ESP32 Devkit v1] . It has a motor driver L298N that controls the motors which is controlled by esp32. It uses Infrared sensors to send digital signals to microcontroller that help to car to stay on track. And it runs on electricity.

## Why make this ?

I am a beginner and this is my first project where I control a motors using an esp32 and motor driver so this
will be a newer experience to me and additionally I still have to cover a large pile of knowledge on coding firmware so this project is a stepping stone for my future projects.

## Schematics
I hope its understandable.

<img width="1366" height="712" alt="schematics in img format" src="https://github.com/user-attachments/assets/886e9daa-eaf9-48f2-8841-91e137fa31d6" />

[Click Here to View File](https://github.com/Adam-Primus/F.L.A.W.-D.C./blob/main/Kicad%20Files/Kicad%20Files.kicad_sch)

## Bill of Materials (BOM)

https://github.com/Adam-Primus/F.L.A.W.-D.C./blob/main/BOM.csv

| Component Name | Description | Qty | Cost (USD) | Total | Source / Link |
| :--- | :--- | :---: | :---: | :--- | :--- |
| ESP-WROOM-32 Development Board | The Brain to control every input/output. | 1 | $4.7 | $4.7 | https://robu.in/product/esp-wroom-32-wifi-bluetooth-networking-smart-component-development-board/ |
| L298N 2A Based Motor Driver Module | The driver that drives the motors. | 1 | $1.36 | $1.36 | https://robu.in/product/l298n-2a-based-motor-driver-module-good-quality/ |
| 130–280 RPM BO Motor | The motor for propulsion. | 2 | $0.43 | $0.86 | https://robu.in/product/1a48-bo-motor-single-axis-black-strong-magnet-emc/ |
| MINI 3PI Car N20 Caster Ball Wheel | The 3rd wheel [360] at the front. | 1 | $4.1 | $4.1 | https://robu.in/product/mini-3pi-car-n20-caster-robot-ball-wheel/ |
| 65mmx25mm Wheel for BO Motors | The Wheels. | 2 | $0.31 | 0.61 | https://robu.in/product/65mmx25mm-robot-wheel-for-bo-motors-blue/ |
| Jumper Cable 2.54mm Female-Female | Wires to connect everything. | 1 | $0.52 | $0.52 | https://robu.in/product/20cm-dupont-wire-color-jumper-cable-2-54mm-1p-1p-female-female-40pcs/ |
| Zip Ties 200mm White | Zip-ties to hold every components in place[Screw replaced] | 1 | $0.76 | $0.76 | https://robu.in/product/nylon-cable-zip-ties-200-mm-white-100pcs/ |
| 18650x2 battery holder | Holder that keep the batteries together. | 1 | $0.62 | $0.62 | https://robu.in/product/18650-x-2-battery-holder-with-cover-and-on-off-switch/ |
| SmartElex Infrared Sensor Module | The Infrared Sensor to detect the black line. | 3 | $0.93 | $2.78 | https://robu.in/product/smartelex-infrared-obstacle-avoidance-sensor-module-active-low/ |
| 3.7v Li-ion Battery | The Power source. | 2 | $0.47 | $0.94 | Local Marketplace [Because Online was way too much expensive]. |
| **Total** | | **15** |  | **$13.56** | |
