#include "Vhalf_adder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);

    Vhalf_adder* top = new Vhalf_adder;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            top->A = A;
            top->B = B;

            top->eval();
            tfp->dump(10 * (2 * A + B));

            printf("A=%d B=%d | Sum=%d Carry=%d\n", A, B, top->Sum, top->Carry);
        }
    }

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}