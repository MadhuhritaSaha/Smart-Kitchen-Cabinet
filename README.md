# Smart Kitchen Cabinet

## 🚀 Project Overview
The **Smart Kitchen Cabinet** is an innovative Arduino-powered solution that aims to transform how users interact with kitchen storage. It features weight monitoring, automatic lighting, and content display for jars using load sensors, LCD, and RFID technology.

## 📝 Short Description
Our smart kitchen cabinet, powered by Arduino UNO, incorporates a 16x2 green backlit LCD with I2C, load sensors with HX711 modules, touch sensors (later upgraded to reed switches), and strip lights. When the cabinet door opens, the lights illuminate, improving visibility. Each jar is monitored with a load cell, and the LCD displays the weight and contents of each jar, identified via RFID tags.

## 💡 Features
- **Automatic Lighting:** Strip lights glow when the cabinet door is opened.
- **Weight Sensing:** Monitors real-time weight of groceries via load cells.
- **LCD Display:** Shows the weight and content of each jar.
- **RFID Integration:** Identifies jar contents without manual labeling.
- **Modular Design:** Easily adaptable for different kitchen setups.

## 🛠️ Tools & Technologies Used
- Arduino UNO
- 16x2 LCD (I2C)
- Load Sensors with HX711 Module
- Touch Sensors / Reed Switch
- LED Strip Lights
- RFID Tags
- Arduino IDE (C++)

## 🔖 File Structure
```
smart-kitchen-cabinet/
├── docs/
│   ├── basic-working.pdf
│   ├── physical-circuit.pdf
├── images/
│   ├── prototype1.jpg
│   ├── prototype2.jpg
│   └── ...
├── src/
│   ├── SmartCabinet.ino
│   └── ...
├── README.md
├── LICENSE
├── .gitignore
```

## 📸 Prototype & Working Model
Find images and diagrams in the [`images/`](images/) and [`docs/`](docs/) folders.

## 🚧 Work in Progress
This is a semi-working prototype. Optimization for practical deployment is pending.

## ✨ Innovation Highlight
This project showcases:
- Integration of low-cost sensors for home IoT.
- Innovative use of RFID and load sensors for inventory management.
- User-friendly, automated kitchen experience.

## 👥 Audience
- Recruiters seeking innovative hardware/software projects
- Fellow students
- Open source enthusiasts
- Personal portfolio/archive

## 🏁 Getting Started

1. **Clone the repo:**
   ```bash
   git clone https://github.com/MadhuhritaSaha/smart-kitchen-cabinet.git
   ```
2. **Open Arduino IDE.**
3. **Navigate to `src/SmartCabinet.ino` and upload to your Arduino UNO.**

## 📚 Documentation
- Basic working: [`docs/basic-working.pdf`](docs/SmartCabinet.pdf)
- Circuit diagram: [`docs/physical-circuit.pdf`](docs/SKCCircuit.pdf)

## 🤝 Contributing
Pull requests are welcome! For major changes, please open an issue first to discuss what you would like to change.

## 📄 License

- **Code**: Licensed under the [Apache License 2.0](LICENSE). You are free to use, modify, and distribute the code, provided you give appropriate credit.
- **Documentation & Images**: Licensed under [CC BY 4.0](LICENSE-CC-BY-4.0). You may share and adapt these materials with proper attribution.

See individual license files for details.
---
