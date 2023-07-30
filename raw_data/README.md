The first line contains the names of all solvers:

- Z3, Yices, CVC, mathsat: state-of-the-art SMT solvers

- only_CDCL(T): only using CDCL(T)

- LocalSMT: the local search solver for SMT

- HybridSMT: our solver

- V1-V5: modified versions presented in Section 6.3

- barcelogic_cores, barcelogic_ninc, barcelogic_ninc-cores, barcelogic_omt, barcelogic_maxsmt: 5 variants of barcelogic

- Hybrid+z3: combing Z3 with HybridSMT

- status: the original status labeled in the SMTLIB

We present the result and time to solve each instance by corresponding solvers.