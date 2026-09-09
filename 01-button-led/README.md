# 01. Push-Button Controlled LED & Serial Telemetry 🚀

Slept so soundly during the day that even if a meteor fell, I wouldn't have known. Naturally, I got zero sleep at night, so I decided to cast my very first real spell. 

Went and read the "Introduction to ESP32" on randomnerdtutorials.com, but honestly, 90% of it went straight in through the front of my mind and out the back. I had already downloaded ArduinoIDE the day I got the kit itself-so it made it easy(yeah!). I used Arduino in school with block code, so asked AI to break down basic C++ functions. Then I jumped over to YouTube (my good friend), read raw documentation, and combined it with what I remembered from 10th grade. 

First, I blinked the Gryffindor emergency red light. Then came the switch code—and I wrote it on my own after learning the logic (yh I made sure I learned, ngl... cause bro... I understand C++ now okay!)

## 🧠 C++ & Hardware Concepts Mastered
- **Functions:** How the Arduino C++ structure works (`setup()` and `loop()`).
- **GPIO Control:** `pinMode()`, `digitalWrite()`, and `digitalRead()`.
- **Timing:** `delay()` using milliseconds.
- **Logic & Telemetry:** `if/else` conditionals, `int` variables, `Serial.begin()`, and `Serial.println()`.
- **The Magic Trick:** `INPUT_PULLUP` and internal pull-up signals (never had push buttons in school!).
- **Hardware Basics:** Dissecting power pins, GPIO pinout, and physical tactile button connections.

## ⚡ How it Works
I wired the push button to Pin 4 and the LED to Pin 18. When you push the button, the red light shines. Take your hand off, and the magic stops instantly!

---

Oh wait... let me be serious for a second! This is my first ever REAL project toward trying to build a rocket on my own that will take me wherever the *Endurance* took Cooper out of the planet in *Interstellar*! 🌌

## 📄 Code
See [`button_led.ino`](./button_led.ino) for the C++ code!
