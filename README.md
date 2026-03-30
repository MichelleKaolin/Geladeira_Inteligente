# 🧊 Smart Fridge with Air Quality Monitoring

## 📌 About the project
This project simulates a smart fridge using Arduino (via Tinkercad), designed to monitor internal conditions and provide visual alerts.

The system tracks temperature, gas levels, and door open time, using an RGB LED to represent different states.

---

## ⚙️ Features

- Internal temperature monitoring
- Gas detection
- Door open time tracking
- Visual alert system using RGB LED
- Data output via Serial Monitor

---

## 🚦 System States

| State        | Condition                              | LED Color |
|-------------|----------------------------------------|----------|
| Normal      | Safe temperature and gas levels        | Green    |
| Door Open   | Door open for more than 5 seconds      | Yellow   |
| Warning     | Moderate gas level                     | Orange   |
| Danger      | High temperature or gas level          | Red      |

---

## 🛠️ Technologies

- Arduino (Tinkercad simulation)
- C/C++ (Arduino language)
- Analog sensors
- RGB LED

---

## 🔌 Components

- Arduino UNO
- Temperature sensor (TMP36)
- Gas sensor (simulated)
- Push button (door simulation)
- RGB LED (common cathode)
- Resistors (220Ω)

---

## 📷 Demo
|--assets

---

## 🚀 How to run

1. Open Tinkercad 
2. Build the circuit based on the `docs/` folder
3. Copy the code from `src/`
4. Start the simulation

or

1. Click here and joy: 
---

## 💡 Future improvements

- Add buzzer for sound alerts
- IoT integration (remote monitoring)
- Mobile app dashboard
- Notification system

---

## 👩‍💻 Author

Michelle Kaolin 

## 📁 Project structure
