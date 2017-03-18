<font color="#000fff"> Just add xor encryption strings. but compiled android so file, RegisterNative method failed. </font>

### General Options

-fdiversify - Enable diversity. This is a shortcut for -Xclang -nop-insertion and -mllvm -sched-randomize.

-frandom-seed=S - Set the random seed to some 64-bit unsigned int S. Set this whenever using diversity options.

-mllvm -fla - Control flow flattening pass

-mllvm -sub - Instruction substitution pass

-mllvm -bcf - Bogus control flow pass

-mllvm -xse - XOR string encryption pass (CRASHES COMPILER, DO NOT USE!)

### NOP Insertion

-Xclang -nop-insertion - Enable the NOP insertion pass.

-mllvm -nop-insertion-percentage=X - Insert NOPs before X% of instructions (default 50%).

-mllvm -max-nops-per-instruction=X - Insert at most X NOPs each time (default 1).

Schedule randomization

-mllvm -sched-randomize - Enable schedule randomization.

-mllvm -sched-randomize-percentage=X - Randomize X% of the instruction schedule (default 50%).
