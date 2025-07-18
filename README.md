## 📡 SmartSeq: Arduino-Based Home Automation System

A complete **Arduino-based Home Automation System** that controls six household appliances, monitors temperature, and alerts with a buzzer — all displayed on an LCD and managed via Serial communication.

### 🔧 Features

* 🔌 **6 Automated Appliances**:

  * WiFi Router (Pin 2)
  * Fan (Pin 3)
  * Light (Pin 4)
  * Water Pump (Pin 5)
  * A.C. (Pin 6)
  * Water Purifier (Pin 7)
* 🌡️ **Real-time Temperature Monitoring** (LM35)
* 🔔 **Buzzer Alert** if temperature exceeds 40°C
* 🖥️ **16x2 LCD Display** for current temperature & system status
* 🧠 Controlled via **Virtual Terminal** (Serial input/output)
* 🛠️ Designed and tested in **Proteus 8**
* 💻 Programmed using **Arduino IDE**


### 📄 How It Works

* The Arduino reads the temperature every second and displays it on the LCD.
* If the temperature exceeds **40°C**, the buzzer activates and the warning appears.
* All six devices are powered ON and controlled internally via the code.
* The system prints status updates to the Virtual Terminal for monitoring.

---

### 🛠 Tools Used

* **Arduino IDE** (C++ Embedded)
* **Proteus Design Suite** (Simulation)
* **Virtual Terminal** (UART communication)

---


### 🧠 Future Enhancements

* Add Bluetooth / Wi-Fi control via HC-05 or ESP8266
* Voice commands via Android App
* EEPROM-based state retention
* Expand to 8–10 devices

---

### 🤝 Contributing

If you have ideas or improvements, feel free to fork this repo and create a pull request!

---


