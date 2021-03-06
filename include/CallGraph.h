#pragma once
#include "Procedure.h"
/* CALL GRAPH NODE */
struct CALL_GRAPH
{
        ilFunction proc;               /* Pointer to procedure in pProcList	*/
        std::vector<CALL_GRAPH *> outEdges; /* array of out edges                   */
public:
        void write();
        CALL_GRAPH()
        {
        }
public:
        void writeNodeCallGraph(int indIdx);
        bool insertCallGraph(ilFunction caller, ilFunction callee);
        bool insertCallGraph(Function *caller, ilFunction callee);
        void insertArc(ilFunction newProc);
};
//extern CALL_GRAPH * callGraph;	/* Pointer to the head of the call graph     */
