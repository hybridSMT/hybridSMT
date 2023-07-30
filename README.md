This repository consists of the source code of hybrid_SMT, located in /source_code, and the raw data of all solvers, raw_data.csv.

Our solver is derived from Z3.
The source code of Local Search is located in source_code/src/smt/nia_ls/, and the source code about integrating with DPLL(T) framework is located in source_code/src/smt/smt_context.cpp


To compile our solver:
```
cd source_code
python scripts/mk_make.py
cd build
make -j
```
The z3 binary located in ``build'' file is the executable file of our solver.