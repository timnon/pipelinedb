/* Copyright (c) 2013-2015 PipelineDB */
/*-------------------------------------------------------------------------
 *
 * pipelinecmds.h
 *	  prototypes for pipelinecmds.c.
 *
 * src/include/commands/pipelinecmds.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef PIPELINECMDS_H
#define PIPELINECMDS_H

#include "nodes/parsenodes.h"

void ExecCreateContinuousViewStmt(CreateContinuousViewStmt *stmt, const char *querystring);
void ExecDropContinuousViewStmt(DropStmt *stmt);
int ExecActivateContinuousViewStmt(ActivateContinuousViewStmt *stmt, bool recovery);
int ExecDeactivateContinuousViewStmt(DeactivateContinuousViewStmt *stmt);
void ExecTruncateContinuousViewStmt(TruncateStmt *stmt);

#endif   /* PIPELINECMDS_H */
