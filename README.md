<font color="#000fff"> Just add xor encryption strings. but compiled android so file, RegisterNative method failed. </font>

### General Options

-fdiversify - Enable diversity. This is a shortcut for -Xclang -nop-insertion and -mllvm -sched-randomize.

-frandom-seed=S - Set the random seed to some 64-bit unsigned int S. Set this whenever using diversity options.

-mllvm -fla - Control flow flattening pass

-mllvm -sub - Instruction substitution pass

-mllvm -bcf - Bogus control flow pass

-mllvm -xSe - XOR string encryption Function pass (some function cannot compiler success)

-mllvm -gxse - XOR string encryption moudle pass (CRASHES COMPILER, DO NOT USE!)

### NOP Insertion

-Xclang -nop-insertion - Enable the NOP insertion pass.

-mllvm -nop-insertion-percentage=X - Insert NOPs before X% of instructions (default 50%).

-mllvm -max-nops-per-instruction=X - Insert at most X NOPs each time (default 1).

Schedule randomization

-mllvm -sched-randomize - Enable schedule randomization.

-mllvm -sched-randomize-percentage=X - Randomize X% of the instruction schedule (default 50%).


For example, if you have ten functions, but you only want the function int foo() to be obfuscated, you can declare it like that:

int foo() __attribute((__annotate__(("fla"))));
int foo() {
   return 2;
}
You can add use one or more annotations for each function. You can also use the "reverse flag" if you want to disable an obfuscation on a function (for e.g. if you want to disable the Bogus Control Flow on a function, use the annotation "nobcf").
