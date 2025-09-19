# 🔢 Half Adder – Verilog + Verilator + GTKWave

This project implements a simple **Half Adder** using Verilog, tested with a C++ testbench using **Verilator**, and waveform viewed using **GTKWave**.

---

## 🧠 Half Adder Logic

| A | B | Sum | Carry |
|---|---|-----|-------|
| 0 | 0 |  0  |   0   |
| 0 | 1 |  1  |   0   |
| 1 | 0 |  1  |   0   |
| 1 | 1 |  0  |   1   |

- **Sum** = A ⊕ B  
- **Carry** = A · B

---

## 📁 Files Included

| File               | Description                          |
|--------------------|--------------------------------------|
| `half_adder.v`     | Verilog source code                  |
| `tb_half_adder.cpp`| C++ testbench using Verilator        |
| `Pictures`         | Waveform file for GTKWave (generated)|
| `README.md`        | Project documentation                |

---

## ⚙️ Full Setup & Run (Ubuntu/Debian)

Just follow these combined steps and you're good to go.

---

### ✅ Step 1: Update Packages
```bash```
sudo apt update

---

### 🛠️ Step 2: Install Verilator
```bash```
sudo add-apt-repository universe
sudo apt install verilator
verilator --version    # Check installation

---

### 🎛️ Step 3: Install GTKWave
```bash```
sudo apt install gtkwave
gtkwave --version      # Check installation
sudo apt install git build-essential libgtk-3-dev \ libgtksourceview-3.0-dev libglade2-dev libtcl8.6-dev\ libxt-dev zlib1g-dev       #(Optional dependencies for building GUI apps):

---

### 🧾 Step 4: Create Verilog and Testbench Files
➤ Create and edit the Verilog file:
```bash```
touch half_adder.v
nano half_adder.v
➤ Create and edit the C++ testbench:
```bash```
touch tb_half_adder.cpp
nano tb_half_adder.cpp

---

### ⚙️ Step 5: Compile & Run with Verilator
```bash```
verilator --cc half_adder.v --exe tb_half_adder.cpp --trace
make -C obj_dir -f Vhalf_adder.mk Vhalf_adder
./obj_dir/Vhalf_adder

---

### 📊 Step 6: View Waveform in GTKWave
```bash```
gtkwave wave.vcd

---

## 👨‍💻 Author

**Muhammad Taha Ansari**  
Electrical Engineering Student at NED University  
GitHub: [@tahaportfolio](https://github.com/Muhammad-Taha-Ansari)  
Email: tahaansari1703@gmail.com  
Portfolio: [thetahaportfolio.netlify.app](https://thetahaportfolio.netlify.app)
