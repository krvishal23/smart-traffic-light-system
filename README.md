# smart-traffic-light-system

# 🚦 IoT Smart Traffic Management System

This project uses Arduino and web technologies to build a smart traffic system that:
- Detects real-time traffic density
- Dynamically adjusts signal control
- Displays live data on a web dashboard

## 🔧 Technologies Used
- Arduino + ESP8266 (NodeMCU)
- PHP & MySQL (backend)
- HTML/CSS/JS (frontend)

## 📁 Project Structure
- `arduino/` — Arduino code
- `backend/` — PHP APIs to receive and fetch data
- `frontend/` — Website dashboard
- `database/` — MySQL schema

## 🛠️ Setup Instructions

1. **Upload Arduino Code** to NodeMCU.
2. **Host Backend** using XAMPP / LAMP with files in `backend/`.
3. **Import SQL File** (`traffic_system.sql`) into MySQL.
4. **Open `index.html`** in `frontend/` or host on Apache server.

## 📈 Features
- Realtime congestion detection
- Website dashboard with visual updates
- Expandable and customizable

## 📜 License
This project is licensed under MIT.
