# Q-Fuse-Lightweight-Sensor-Fusion-Engine-for-Embedded-Systems
<p align="center">
  <img src="assets/qfuse-logo.png" alt="Q-Fuse Logo" width="180">
</p>

<h1 align="center">Q-Fuse</h1>

<p align="center">
  <b>Lightweight, Real-Time Sensor Fusion Engine in C for Embedded Platforms</b><br>
  🚀 Powered by Extended Kalman Filter & Built for Bare-Metal and RTOS Applications
</p>

---

## 📌 Overview

**Q-Fuse** is a modular, memory-efficient sensor fusion library written in C for embedded platforms. It combines IMU (Accelerometer + Gyroscope), Magnetometer, and GPS data using a Kalman Filter (EKF) or Complementary Filter for accurate and reliable attitude estimation.

Whether you're working on wearables, robotics, autonomous systems, or IoT devices — **Q-Fuse** is designed to run smoothly on platforms with limited resources, including ARM Cortex-M and Qualcomm SoCs.

---

## ✨ Features

- ✅ Lightweight and modular design
- ⚡ Real-time performance optimized for low-power MCUs
- 📦 Supports IMU, Magnetometer, and GPS fusion
- 🔧 EKF or Complementary filter configurable
- 🛠️ Platform-agnostic: works on STM32, Arduino, QEMU, or Android NDK
- 🧪 Unit tests and simulated datasets
- 📉 Optional logging and visualization tools

---

## 🔧 Getting Started

```bash
git clone https://github.com/yourusername/Q-Fuse.git
cd Q-Fuse
make run   # or cmake build instructions
