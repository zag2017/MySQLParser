
// Generated from MySqlParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySqlParser.h"


namespace parser {

/**
 * This interface defines an abstract listener for a parse tree produced by MySqlParser.
 */
class  MySqlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(MySqlParser::RootContext *ctx) = 0;
  virtual void exitRoot(MySqlParser::RootContext *ctx) = 0;

  virtual void enterSql_statements(MySqlParser::Sql_statementsContext *ctx) = 0;
  virtual void exitSql_statements(MySqlParser::Sql_statementsContext *ctx) = 0;

  virtual void enterSql_statement(MySqlParser::Sql_statementContext *ctx) = 0;
  virtual void exitSql_statement(MySqlParser::Sql_statementContext *ctx) = 0;

  virtual void enterEmpty_statement(MySqlParser::Empty_statementContext *ctx) = 0;
  virtual void exitEmpty_statement(MySqlParser::Empty_statementContext *ctx) = 0;

  virtual void enterDdl_statement(MySqlParser::Ddl_statementContext *ctx) = 0;
  virtual void exitDdl_statement(MySqlParser::Ddl_statementContext *ctx) = 0;

  virtual void enterDml_statement(MySqlParser::Dml_statementContext *ctx) = 0;
  virtual void exitDml_statement(MySqlParser::Dml_statementContext *ctx) = 0;

  virtual void enterTransaction_statement(MySqlParser::Transaction_statementContext *ctx) = 0;
  virtual void exitTransaction_statement(MySqlParser::Transaction_statementContext *ctx) = 0;

  virtual void enterReplication_statement(MySqlParser::Replication_statementContext *ctx) = 0;
  virtual void exitReplication_statement(MySqlParser::Replication_statementContext *ctx) = 0;

  virtual void enterPrepared_statement(MySqlParser::Prepared_statementContext *ctx) = 0;
  virtual void exitPrepared_statement(MySqlParser::Prepared_statementContext *ctx) = 0;

  virtual void enterCompound_statement(MySqlParser::Compound_statementContext *ctx) = 0;
  virtual void exitCompound_statement(MySqlParser::Compound_statementContext *ctx) = 0;

  virtual void enterAdministration_statement(MySqlParser::Administration_statementContext *ctx) = 0;
  virtual void exitAdministration_statement(MySqlParser::Administration_statementContext *ctx) = 0;

  virtual void enterUtility_statement(MySqlParser::Utility_statementContext *ctx) = 0;
  virtual void exitUtility_statement(MySqlParser::Utility_statementContext *ctx) = 0;

  virtual void enterCreate_database(MySqlParser::Create_databaseContext *ctx) = 0;
  virtual void exitCreate_database(MySqlParser::Create_databaseContext *ctx) = 0;

  virtual void enterCreate_event(MySqlParser::Create_eventContext *ctx) = 0;
  virtual void exitCreate_event(MySqlParser::Create_eventContext *ctx) = 0;

  virtual void enterCreate_index(MySqlParser::Create_indexContext *ctx) = 0;
  virtual void exitCreate_index(MySqlParser::Create_indexContext *ctx) = 0;

  virtual void enterCreate_logfile_group(MySqlParser::Create_logfile_groupContext *ctx) = 0;
  virtual void exitCreate_logfile_group(MySqlParser::Create_logfile_groupContext *ctx) = 0;

  virtual void enterCreate_procedure(MySqlParser::Create_procedureContext *ctx) = 0;
  virtual void exitCreate_procedure(MySqlParser::Create_procedureContext *ctx) = 0;

  virtual void enterCreate_function(MySqlParser::Create_functionContext *ctx) = 0;
  virtual void exitCreate_function(MySqlParser::Create_functionContext *ctx) = 0;

  virtual void enterCreate_server(MySqlParser::Create_serverContext *ctx) = 0;
  virtual void exitCreate_server(MySqlParser::Create_serverContext *ctx) = 0;

  virtual void enterCopyCreateTable(MySqlParser::CopyCreateTableContext *ctx) = 0;
  virtual void exitCopyCreateTable(MySqlParser::CopyCreateTableContext *ctx) = 0;

  virtual void enterQueryCreateTable(MySqlParser::QueryCreateTableContext *ctx) = 0;
  virtual void exitQueryCreateTable(MySqlParser::QueryCreateTableContext *ctx) = 0;

  virtual void enterColCreateTable(MySqlParser::ColCreateTableContext *ctx) = 0;
  virtual void exitColCreateTable(MySqlParser::ColCreateTableContext *ctx) = 0;

  virtual void enterCreate_tablespace_innodb(MySqlParser::Create_tablespace_innodbContext *ctx) = 0;
  virtual void exitCreate_tablespace_innodb(MySqlParser::Create_tablespace_innodbContext *ctx) = 0;

  virtual void enterCreate_tablespace_ndb(MySqlParser::Create_tablespace_ndbContext *ctx) = 0;
  virtual void exitCreate_tablespace_ndb(MySqlParser::Create_tablespace_ndbContext *ctx) = 0;

  virtual void enterCreate_trigger(MySqlParser::Create_triggerContext *ctx) = 0;
  virtual void exitCreate_trigger(MySqlParser::Create_triggerContext *ctx) = 0;

  virtual void enterCreate_view(MySqlParser::Create_viewContext *ctx) = 0;
  virtual void exitCreate_view(MySqlParser::Create_viewContext *ctx) = 0;

  virtual void enterCreate_database_option(MySqlParser::Create_database_optionContext *ctx) = 0;
  virtual void exitCreate_database_option(MySqlParser::Create_database_optionContext *ctx) = 0;

  virtual void enterOwner_statement(MySqlParser::Owner_statementContext *ctx) = 0;
  virtual void exitOwner_statement(MySqlParser::Owner_statementContext *ctx) = 0;

  virtual void enterPreciseSchedule(MySqlParser::PreciseScheduleContext *ctx) = 0;
  virtual void exitPreciseSchedule(MySqlParser::PreciseScheduleContext *ctx) = 0;

  virtual void enterIntervalSchedule(MySqlParser::IntervalScheduleContext *ctx) = 0;
  virtual void exitIntervalSchedule(MySqlParser::IntervalScheduleContext *ctx) = 0;

  virtual void enterTimestamp_value(MySqlParser::Timestamp_valueContext *ctx) = 0;
  virtual void exitTimestamp_value(MySqlParser::Timestamp_valueContext *ctx) = 0;

  virtual void enterInterval_expr(MySqlParser::Interval_exprContext *ctx) = 0;
  virtual void exitInterval_expr(MySqlParser::Interval_exprContext *ctx) = 0;

  virtual void enterInterval_type(MySqlParser::Interval_typeContext *ctx) = 0;
  virtual void exitInterval_type(MySqlParser::Interval_typeContext *ctx) = 0;

  virtual void enterIndex_type(MySqlParser::Index_typeContext *ctx) = 0;
  virtual void exitIndex_type(MySqlParser::Index_typeContext *ctx) = 0;

  virtual void enterIndex_option(MySqlParser::Index_optionContext *ctx) = 0;
  virtual void exitIndex_option(MySqlParser::Index_optionContext *ctx) = 0;

  virtual void enterProc_param(MySqlParser::Proc_paramContext *ctx) = 0;
  virtual void exitProc_param(MySqlParser::Proc_paramContext *ctx) = 0;

  virtual void enterFunc_param(MySqlParser::Func_paramContext *ctx) = 0;
  virtual void exitFunc_param(MySqlParser::Func_paramContext *ctx) = 0;

  virtual void enterRcComment(MySqlParser::RcCommentContext *ctx) = 0;
  virtual void exitRcComment(MySqlParser::RcCommentContext *ctx) = 0;

  virtual void enterRcSqllang(MySqlParser::RcSqllangContext *ctx) = 0;
  virtual void exitRcSqllang(MySqlParser::RcSqllangContext *ctx) = 0;

  virtual void enterRcDeterm(MySqlParser::RcDetermContext *ctx) = 0;
  virtual void exitRcDeterm(MySqlParser::RcDetermContext *ctx) = 0;

  virtual void enterRcSqldata(MySqlParser::RcSqldataContext *ctx) = 0;
  virtual void exitRcSqldata(MySqlParser::RcSqldataContext *ctx) = 0;

  virtual void enterRcSecurestmt(MySqlParser::RcSecurestmtContext *ctx) = 0;
  virtual void exitRcSecurestmt(MySqlParser::RcSecurestmtContext *ctx) = 0;

  virtual void enterServer_option(MySqlParser::Server_optionContext *ctx) = 0;
  virtual void exitServer_option(MySqlParser::Server_optionContext *ctx) = 0;

  virtual void enterColumn_def_table_constraints(MySqlParser::Column_def_table_constraintsContext *ctx) = 0;
  virtual void exitColumn_def_table_constraints(MySqlParser::Column_def_table_constraintsContext *ctx) = 0;

  virtual void enterColumnDefinition(MySqlParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(MySqlParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterConstraintDefinition(MySqlParser::ConstraintDefinitionContext *ctx) = 0;
  virtual void exitConstraintDefinition(MySqlParser::ConstraintDefinitionContext *ctx) = 0;

  virtual void enterIndexDefinition(MySqlParser::IndexDefinitionContext *ctx) = 0;
  virtual void exitIndexDefinition(MySqlParser::IndexDefinitionContext *ctx) = 0;

  virtual void enterColumn_definition(MySqlParser::Column_definitionContext *ctx) = 0;
  virtual void exitColumn_definition(MySqlParser::Column_definitionContext *ctx) = 0;

  virtual void enterColConstrNull(MySqlParser::ColConstrNullContext *ctx) = 0;
  virtual void exitColConstrNull(MySqlParser::ColConstrNullContext *ctx) = 0;

  virtual void enterColConstrDflt(MySqlParser::ColConstrDfltContext *ctx) = 0;
  virtual void exitColConstrDflt(MySqlParser::ColConstrDfltContext *ctx) = 0;

  virtual void enterColConstrAuInc(MySqlParser::ColConstrAuIncContext *ctx) = 0;
  virtual void exitColConstrAuInc(MySqlParser::ColConstrAuIncContext *ctx) = 0;

  virtual void enterColConstrPK(MySqlParser::ColConstrPKContext *ctx) = 0;
  virtual void exitColConstrPK(MySqlParser::ColConstrPKContext *ctx) = 0;

  virtual void enterColConstrUK(MySqlParser::ColConstrUKContext *ctx) = 0;
  virtual void exitColConstrUK(MySqlParser::ColConstrUKContext *ctx) = 0;

  virtual void enterColConstrComment(MySqlParser::ColConstrCommentContext *ctx) = 0;
  virtual void exitColConstrComment(MySqlParser::ColConstrCommentContext *ctx) = 0;

  virtual void enterColConstrForm(MySqlParser::ColConstrFormContext *ctx) = 0;
  virtual void exitColConstrForm(MySqlParser::ColConstrFormContext *ctx) = 0;

  virtual void enterColConstrStorage(MySqlParser::ColConstrStorageContext *ctx) = 0;
  virtual void exitColConstrStorage(MySqlParser::ColConstrStorageContext *ctx) = 0;

  virtual void enterColConstrRefdef(MySqlParser::ColConstrRefdefContext *ctx) = 0;
  virtual void exitColConstrRefdef(MySqlParser::ColConstrRefdefContext *ctx) = 0;

  virtual void enterTblConstrPK(MySqlParser::TblConstrPKContext *ctx) = 0;
  virtual void exitTblConstrPK(MySqlParser::TblConstrPKContext *ctx) = 0;

  virtual void enterTblConstrUK(MySqlParser::TblConstrUKContext *ctx) = 0;
  virtual void exitTblConstrUK(MySqlParser::TblConstrUKContext *ctx) = 0;

  virtual void enterTblConstrFK(MySqlParser::TblConstrFKContext *ctx) = 0;
  virtual void exitTblConstrFK(MySqlParser::TblConstrFKContext *ctx) = 0;

  virtual void enterTblConstCheck(MySqlParser::TblConstCheckContext *ctx) = 0;
  virtual void exitTblConstCheck(MySqlParser::TblConstCheckContext *ctx) = 0;

  virtual void enterReference_definition(MySqlParser::Reference_definitionContext *ctx) = 0;
  virtual void exitReference_definition(MySqlParser::Reference_definitionContext *ctx) = 0;

  virtual void enterOn_delete_action(MySqlParser::On_delete_actionContext *ctx) = 0;
  virtual void exitOn_delete_action(MySqlParser::On_delete_actionContext *ctx) = 0;

  virtual void enterOn_update_action(MySqlParser::On_update_actionContext *ctx) = 0;
  virtual void exitOn_update_action(MySqlParser::On_update_actionContext *ctx) = 0;

  virtual void enterReference_action_control_type(MySqlParser::Reference_action_control_typeContext *ctx) = 0;
  virtual void exitReference_action_control_type(MySqlParser::Reference_action_control_typeContext *ctx) = 0;

  virtual void enterSimpleIndex(MySqlParser::SimpleIndexContext *ctx) = 0;
  virtual void exitSimpleIndex(MySqlParser::SimpleIndexContext *ctx) = 0;

  virtual void enterSpecIndex(MySqlParser::SpecIndexContext *ctx) = 0;
  virtual void exitSpecIndex(MySqlParser::SpecIndexContext *ctx) = 0;

  virtual void enterTblOptEngine(MySqlParser::TblOptEngineContext *ctx) = 0;
  virtual void exitTblOptEngine(MySqlParser::TblOptEngineContext *ctx) = 0;

  virtual void enterTblOptAuInc(MySqlParser::TblOptAuIncContext *ctx) = 0;
  virtual void exitTblOptAuInc(MySqlParser::TblOptAuIncContext *ctx) = 0;

  virtual void enterTblOptAvgRLen(MySqlParser::TblOptAvgRLenContext *ctx) = 0;
  virtual void exitTblOptAvgRLen(MySqlParser::TblOptAvgRLenContext *ctx) = 0;

  virtual void enterTblOptDefCharSet(MySqlParser::TblOptDefCharSetContext *ctx) = 0;
  virtual void exitTblOptDefCharSet(MySqlParser::TblOptDefCharSetContext *ctx) = 0;

  virtual void enterTblOptChkSum(MySqlParser::TblOptChkSumContext *ctx) = 0;
  virtual void exitTblOptChkSum(MySqlParser::TblOptChkSumContext *ctx) = 0;

  virtual void enterTblOptDefCollate(MySqlParser::TblOptDefCollateContext *ctx) = 0;
  virtual void exitTblOptDefCollate(MySqlParser::TblOptDefCollateContext *ctx) = 0;

  virtual void enterTblOptComment(MySqlParser::TblOptCommentContext *ctx) = 0;
  virtual void exitTblOptComment(MySqlParser::TblOptCommentContext *ctx) = 0;

  virtual void enterTblOptCompr(MySqlParser::TblOptComprContext *ctx) = 0;
  virtual void exitTblOptCompr(MySqlParser::TblOptComprContext *ctx) = 0;

  virtual void enterTblOptConn(MySqlParser::TblOptConnContext *ctx) = 0;
  virtual void exitTblOptConn(MySqlParser::TblOptConnContext *ctx) = 0;

  virtual void enterTblOptDataDir(MySqlParser::TblOptDataDirContext *ctx) = 0;
  virtual void exitTblOptDataDir(MySqlParser::TblOptDataDirContext *ctx) = 0;

  virtual void enterTblOptDelKW(MySqlParser::TblOptDelKWContext *ctx) = 0;
  virtual void exitTblOptDelKW(MySqlParser::TblOptDelKWContext *ctx) = 0;

  virtual void enterTblOptEncr(MySqlParser::TblOptEncrContext *ctx) = 0;
  virtual void exitTblOptEncr(MySqlParser::TblOptEncrContext *ctx) = 0;

  virtual void enterTblOptIndexDir(MySqlParser::TblOptIndexDirContext *ctx) = 0;
  virtual void exitTblOptIndexDir(MySqlParser::TblOptIndexDirContext *ctx) = 0;

  virtual void enterTblOptInsMeth(MySqlParser::TblOptInsMethContext *ctx) = 0;
  virtual void exitTblOptInsMeth(MySqlParser::TblOptInsMethContext *ctx) = 0;

  virtual void enterTblOptKeyBlockSz(MySqlParser::TblOptKeyBlockSzContext *ctx) = 0;
  virtual void exitTblOptKeyBlockSz(MySqlParser::TblOptKeyBlockSzContext *ctx) = 0;

  virtual void enterTblOptMaxRows(MySqlParser::TblOptMaxRowsContext *ctx) = 0;
  virtual void exitTblOptMaxRows(MySqlParser::TblOptMaxRowsContext *ctx) = 0;

  virtual void enterTblOptMinRows(MySqlParser::TblOptMinRowsContext *ctx) = 0;
  virtual void exitTblOptMinRows(MySqlParser::TblOptMinRowsContext *ctx) = 0;

  virtual void enterTblOptPackK(MySqlParser::TblOptPackKContext *ctx) = 0;
  virtual void exitTblOptPackK(MySqlParser::TblOptPackKContext *ctx) = 0;

  virtual void enterTblOptPasswd(MySqlParser::TblOptPasswdContext *ctx) = 0;
  virtual void exitTblOptPasswd(MySqlParser::TblOptPasswdContext *ctx) = 0;

  virtual void enterTblOptRowFormat(MySqlParser::TblOptRowFormatContext *ctx) = 0;
  virtual void exitTblOptRowFormat(MySqlParser::TblOptRowFormatContext *ctx) = 0;

  virtual void enterTblOptStatAutoR(MySqlParser::TblOptStatAutoRContext *ctx) = 0;
  virtual void exitTblOptStatAutoR(MySqlParser::TblOptStatAutoRContext *ctx) = 0;

  virtual void enterTblOptStatPersist(MySqlParser::TblOptStatPersistContext *ctx) = 0;
  virtual void exitTblOptStatPersist(MySqlParser::TblOptStatPersistContext *ctx) = 0;

  virtual void enterTblOptStatSamplPg(MySqlParser::TblOptStatSamplPgContext *ctx) = 0;
  virtual void exitTblOptStatSamplPg(MySqlParser::TblOptStatSamplPgContext *ctx) = 0;

  virtual void enterTblOptTablespace(MySqlParser::TblOptTablespaceContext *ctx) = 0;
  virtual void exitTblOptTablespace(MySqlParser::TblOptTablespaceContext *ctx) = 0;

  virtual void enterTblOptUnion(MySqlParser::TblOptUnionContext *ctx) = 0;
  virtual void exitTblOptUnion(MySqlParser::TblOptUnionContext *ctx) = 0;

  virtual void enterPartition_options(MySqlParser::Partition_optionsContext *ctx) = 0;
  virtual void exitPartition_options(MySqlParser::Partition_optionsContext *ctx) = 0;

  virtual void enterPartition_function_definition(MySqlParser::Partition_function_definitionContext *ctx) = 0;
  virtual void exitPartition_function_definition(MySqlParser::Partition_function_definitionContext *ctx) = 0;

  virtual void enterLinear_partition_func_def(MySqlParser::Linear_partition_func_defContext *ctx) = 0;
  virtual void exitLinear_partition_func_def(MySqlParser::Linear_partition_func_defContext *ctx) = 0;

  virtual void enterPartition_def(MySqlParser::Partition_defContext *ctx) = 0;
  virtual void exitPartition_def(MySqlParser::Partition_defContext *ctx) = 0;

  virtual void enterSubpartition_def(MySqlParser::Subpartition_defContext *ctx) = 0;
  virtual void exitSubpartition_def(MySqlParser::Subpartition_defContext *ctx) = 0;

  virtual void enterAlterDb(MySqlParser::AlterDbContext *ctx) = 0;
  virtual void exitAlterDb(MySqlParser::AlterDbContext *ctx) = 0;

  virtual void enterAlterDbUpgradeName(MySqlParser::AlterDbUpgradeNameContext *ctx) = 0;
  virtual void exitAlterDbUpgradeName(MySqlParser::AlterDbUpgradeNameContext *ctx) = 0;

  virtual void enterAlter_event(MySqlParser::Alter_eventContext *ctx) = 0;
  virtual void exitAlter_event(MySqlParser::Alter_eventContext *ctx) = 0;

  virtual void enterAlter_function(MySqlParser::Alter_functionContext *ctx) = 0;
  virtual void exitAlter_function(MySqlParser::Alter_functionContext *ctx) = 0;

  virtual void enterAlter_instance(MySqlParser::Alter_instanceContext *ctx) = 0;
  virtual void exitAlter_instance(MySqlParser::Alter_instanceContext *ctx) = 0;

  virtual void enterAlter_logfile_group(MySqlParser::Alter_logfile_groupContext *ctx) = 0;
  virtual void exitAlter_logfile_group(MySqlParser::Alter_logfile_groupContext *ctx) = 0;

  virtual void enterAlter_procedure(MySqlParser::Alter_procedureContext *ctx) = 0;
  virtual void exitAlter_procedure(MySqlParser::Alter_procedureContext *ctx) = 0;

  virtual void enterAlter_server(MySqlParser::Alter_serverContext *ctx) = 0;
  virtual void exitAlter_server(MySqlParser::Alter_serverContext *ctx) = 0;

  virtual void enterAlter_table(MySqlParser::Alter_tableContext *ctx) = 0;
  virtual void exitAlter_table(MySqlParser::Alter_tableContext *ctx) = 0;

  virtual void enterAlter_tablespace(MySqlParser::Alter_tablespaceContext *ctx) = 0;
  virtual void exitAlter_tablespace(MySqlParser::Alter_tablespaceContext *ctx) = 0;

  virtual void enterAlter_view(MySqlParser::Alter_viewContext *ctx) = 0;
  virtual void exitAlter_view(MySqlParser::Alter_viewContext *ctx) = 0;

  virtual void enterAltblTableOpt(MySqlParser::AltblTableOptContext *ctx) = 0;
  virtual void exitAltblTableOpt(MySqlParser::AltblTableOptContext *ctx) = 0;

  virtual void enterAltblAddCol(MySqlParser::AltblAddColContext *ctx) = 0;
  virtual void exitAltblAddCol(MySqlParser::AltblAddColContext *ctx) = 0;

  virtual void enterAltblAddCols(MySqlParser::AltblAddColsContext *ctx) = 0;
  virtual void exitAltblAddCols(MySqlParser::AltblAddColsContext *ctx) = 0;

  virtual void enterAltblAddIndex(MySqlParser::AltblAddIndexContext *ctx) = 0;
  virtual void exitAltblAddIndex(MySqlParser::AltblAddIndexContext *ctx) = 0;

  virtual void enterAltblAddPK(MySqlParser::AltblAddPKContext *ctx) = 0;
  virtual void exitAltblAddPK(MySqlParser::AltblAddPKContext *ctx) = 0;

  virtual void enterAltblAddUK(MySqlParser::AltblAddUKContext *ctx) = 0;
  virtual void exitAltblAddUK(MySqlParser::AltblAddUKContext *ctx) = 0;

  virtual void enterAltblAddSpecIndex(MySqlParser::AltblAddSpecIndexContext *ctx) = 0;
  virtual void exitAltblAddSpecIndex(MySqlParser::AltblAddSpecIndexContext *ctx) = 0;

  virtual void enterAltblAddFK(MySqlParser::AltblAddFKContext *ctx) = 0;
  virtual void exitAltblAddFK(MySqlParser::AltblAddFKContext *ctx) = 0;

  virtual void enterAltblAlg(MySqlParser::AltblAlgContext *ctx) = 0;
  virtual void exitAltblAlg(MySqlParser::AltblAlgContext *ctx) = 0;

  virtual void enterAltblColDef(MySqlParser::AltblColDefContext *ctx) = 0;
  virtual void exitAltblColDef(MySqlParser::AltblColDefContext *ctx) = 0;

  virtual void enterAltblColChange(MySqlParser::AltblColChangeContext *ctx) = 0;
  virtual void exitAltblColChange(MySqlParser::AltblColChangeContext *ctx) = 0;

  virtual void enterAltblLock(MySqlParser::AltblLockContext *ctx) = 0;
  virtual void exitAltblLock(MySqlParser::AltblLockContext *ctx) = 0;

  virtual void enterAltblColMod(MySqlParser::AltblColModContext *ctx) = 0;
  virtual void exitAltblColMod(MySqlParser::AltblColModContext *ctx) = 0;

  virtual void enterAltblColDrop(MySqlParser::AltblColDropContext *ctx) = 0;
  virtual void exitAltblColDrop(MySqlParser::AltblColDropContext *ctx) = 0;

  virtual void enterAltblDropPK(MySqlParser::AltblDropPKContext *ctx) = 0;
  virtual void exitAltblDropPK(MySqlParser::AltblDropPKContext *ctx) = 0;

  virtual void enterAltblDropIndex(MySqlParser::AltblDropIndexContext *ctx) = 0;
  virtual void exitAltblDropIndex(MySqlParser::AltblDropIndexContext *ctx) = 0;

  virtual void enterAltblDropFK(MySqlParser::AltblDropFKContext *ctx) = 0;
  virtual void exitAltblDropFK(MySqlParser::AltblDropFKContext *ctx) = 0;

  virtual void enterAltblDisKey(MySqlParser::AltblDisKeyContext *ctx) = 0;
  virtual void exitAltblDisKey(MySqlParser::AltblDisKeyContext *ctx) = 0;

  virtual void enterAltblEnKey(MySqlParser::AltblEnKeyContext *ctx) = 0;
  virtual void exitAltblEnKey(MySqlParser::AltblEnKeyContext *ctx) = 0;

  virtual void enterAltblRenameTbl(MySqlParser::AltblRenameTblContext *ctx) = 0;
  virtual void exitAltblRenameTbl(MySqlParser::AltblRenameTblContext *ctx) = 0;

  virtual void enterAltblResort(MySqlParser::AltblResortContext *ctx) = 0;
  virtual void exitAltblResort(MySqlParser::AltblResortContext *ctx) = 0;

  virtual void enterAltblConvert(MySqlParser::AltblConvertContext *ctx) = 0;
  virtual void exitAltblConvert(MySqlParser::AltblConvertContext *ctx) = 0;

  virtual void enterAltblDefCharset(MySqlParser::AltblDefCharsetContext *ctx) = 0;
  virtual void exitAltblDefCharset(MySqlParser::AltblDefCharsetContext *ctx) = 0;

  virtual void enterAltblDisTblspace(MySqlParser::AltblDisTblspaceContext *ctx) = 0;
  virtual void exitAltblDisTblspace(MySqlParser::AltblDisTblspaceContext *ctx) = 0;

  virtual void enterAltblImpTblSpace(MySqlParser::AltblImpTblSpaceContext *ctx) = 0;
  virtual void exitAltblImpTblSpace(MySqlParser::AltblImpTblSpaceContext *ctx) = 0;

  virtual void enterAltblForce(MySqlParser::AltblForceContext *ctx) = 0;
  virtual void exitAltblForce(MySqlParser::AltblForceContext *ctx) = 0;

  virtual void enterAltblValid(MySqlParser::AltblValidContext *ctx) = 0;
  virtual void exitAltblValid(MySqlParser::AltblValidContext *ctx) = 0;

  virtual void enterAltblAddPart(MySqlParser::AltblAddPartContext *ctx) = 0;
  virtual void exitAltblAddPart(MySqlParser::AltblAddPartContext *ctx) = 0;

  virtual void enterAltblDropPart(MySqlParser::AltblDropPartContext *ctx) = 0;
  virtual void exitAltblDropPart(MySqlParser::AltblDropPartContext *ctx) = 0;

  virtual void enterAltblDiscartPart(MySqlParser::AltblDiscartPartContext *ctx) = 0;
  virtual void exitAltblDiscartPart(MySqlParser::AltblDiscartPartContext *ctx) = 0;

  virtual void enterAltblImportPart(MySqlParser::AltblImportPartContext *ctx) = 0;
  virtual void exitAltblImportPart(MySqlParser::AltblImportPartContext *ctx) = 0;

  virtual void enterAltblTruncPart(MySqlParser::AltblTruncPartContext *ctx) = 0;
  virtual void exitAltblTruncPart(MySqlParser::AltblTruncPartContext *ctx) = 0;

  virtual void enterAltblCoalPart(MySqlParser::AltblCoalPartContext *ctx) = 0;
  virtual void exitAltblCoalPart(MySqlParser::AltblCoalPartContext *ctx) = 0;

  virtual void enterAltblReorgPart(MySqlParser::AltblReorgPartContext *ctx) = 0;
  virtual void exitAltblReorgPart(MySqlParser::AltblReorgPartContext *ctx) = 0;

  virtual void enterAltblExchPart(MySqlParser::AltblExchPartContext *ctx) = 0;
  virtual void exitAltblExchPart(MySqlParser::AltblExchPartContext *ctx) = 0;

  virtual void enterAltblAnalPart(MySqlParser::AltblAnalPartContext *ctx) = 0;
  virtual void exitAltblAnalPart(MySqlParser::AltblAnalPartContext *ctx) = 0;

  virtual void enterAltblCheckPart(MySqlParser::AltblCheckPartContext *ctx) = 0;
  virtual void exitAltblCheckPart(MySqlParser::AltblCheckPartContext *ctx) = 0;

  virtual void enterAltblOptimPart(MySqlParser::AltblOptimPartContext *ctx) = 0;
  virtual void exitAltblOptimPart(MySqlParser::AltblOptimPartContext *ctx) = 0;

  virtual void enterAltblRebuildPart(MySqlParser::AltblRebuildPartContext *ctx) = 0;
  virtual void exitAltblRebuildPart(MySqlParser::AltblRebuildPartContext *ctx) = 0;

  virtual void enterAltblRepairPart(MySqlParser::AltblRepairPartContext *ctx) = 0;
  virtual void exitAltblRepairPart(MySqlParser::AltblRepairPartContext *ctx) = 0;

  virtual void enterAltblRemovePart(MySqlParser::AltblRemovePartContext *ctx) = 0;
  virtual void exitAltblRemovePart(MySqlParser::AltblRemovePartContext *ctx) = 0;

  virtual void enterAltblUpgrPart(MySqlParser::AltblUpgrPartContext *ctx) = 0;
  virtual void exitAltblUpgrPart(MySqlParser::AltblUpgrPartContext *ctx) = 0;

  virtual void enterDrop_database(MySqlParser::Drop_databaseContext *ctx) = 0;
  virtual void exitDrop_database(MySqlParser::Drop_databaseContext *ctx) = 0;

  virtual void enterDrop_event(MySqlParser::Drop_eventContext *ctx) = 0;
  virtual void exitDrop_event(MySqlParser::Drop_eventContext *ctx) = 0;

  virtual void enterDrop_index(MySqlParser::Drop_indexContext *ctx) = 0;
  virtual void exitDrop_index(MySqlParser::Drop_indexContext *ctx) = 0;

  virtual void enterDrop_logfile_group(MySqlParser::Drop_logfile_groupContext *ctx) = 0;
  virtual void exitDrop_logfile_group(MySqlParser::Drop_logfile_groupContext *ctx) = 0;

  virtual void enterDrop_procedure(MySqlParser::Drop_procedureContext *ctx) = 0;
  virtual void exitDrop_procedure(MySqlParser::Drop_procedureContext *ctx) = 0;

  virtual void enterDrop_function(MySqlParser::Drop_functionContext *ctx) = 0;
  virtual void exitDrop_function(MySqlParser::Drop_functionContext *ctx) = 0;

  virtual void enterDrop_server(MySqlParser::Drop_serverContext *ctx) = 0;
  virtual void exitDrop_server(MySqlParser::Drop_serverContext *ctx) = 0;

  virtual void enterDrop_table(MySqlParser::Drop_tableContext *ctx) = 0;
  virtual void exitDrop_table(MySqlParser::Drop_tableContext *ctx) = 0;

  virtual void enterDrop_tablespace(MySqlParser::Drop_tablespaceContext *ctx) = 0;
  virtual void exitDrop_tablespace(MySqlParser::Drop_tablespaceContext *ctx) = 0;

  virtual void enterDrop_trigger(MySqlParser::Drop_triggerContext *ctx) = 0;
  virtual void exitDrop_trigger(MySqlParser::Drop_triggerContext *ctx) = 0;

  virtual void enterDrop_view(MySqlParser::Drop_viewContext *ctx) = 0;
  virtual void exitDrop_view(MySqlParser::Drop_viewContext *ctx) = 0;

  virtual void enterRename_table(MySqlParser::Rename_tableContext *ctx) = 0;
  virtual void exitRename_table(MySqlParser::Rename_tableContext *ctx) = 0;

  virtual void enterTruncate_table(MySqlParser::Truncate_tableContext *ctx) = 0;
  virtual void exitTruncate_table(MySqlParser::Truncate_tableContext *ctx) = 0;

  virtual void enterCall_statement(MySqlParser::Call_statementContext *ctx) = 0;
  virtual void exitCall_statement(MySqlParser::Call_statementContext *ctx) = 0;

  virtual void enterDelete_statement(MySqlParser::Delete_statementContext *ctx) = 0;
  virtual void exitDelete_statement(MySqlParser::Delete_statementContext *ctx) = 0;

  virtual void enterDo_statement(MySqlParser::Do_statementContext *ctx) = 0;
  virtual void exitDo_statement(MySqlParser::Do_statementContext *ctx) = 0;

  virtual void enterHandler_statement(MySqlParser::Handler_statementContext *ctx) = 0;
  virtual void exitHandler_statement(MySqlParser::Handler_statementContext *ctx) = 0;

  virtual void enterInsert_statement(MySqlParser::Insert_statementContext *ctx) = 0;
  virtual void exitInsert_statement(MySqlParser::Insert_statementContext *ctx) = 0;

  virtual void enterLoad_data_statement(MySqlParser::Load_data_statementContext *ctx) = 0;
  virtual void exitLoad_data_statement(MySqlParser::Load_data_statementContext *ctx) = 0;

  virtual void enterLoad_xml_statement(MySqlParser::Load_xml_statementContext *ctx) = 0;
  virtual void exitLoad_xml_statement(MySqlParser::Load_xml_statementContext *ctx) = 0;

  virtual void enterReplace_statement(MySqlParser::Replace_statementContext *ctx) = 0;
  virtual void exitReplace_statement(MySqlParser::Replace_statementContext *ctx) = 0;

  virtual void enterSimpleSelect(MySqlParser::SimpleSelectContext *ctx) = 0;
  virtual void exitSimpleSelect(MySqlParser::SimpleSelectContext *ctx) = 0;

  virtual void enterParenSelect(MySqlParser::ParenSelectContext *ctx) = 0;
  virtual void exitParenSelect(MySqlParser::ParenSelectContext *ctx) = 0;

  virtual void enterUnionSelect(MySqlParser::UnionSelectContext *ctx) = 0;
  virtual void exitUnionSelect(MySqlParser::UnionSelectContext *ctx) = 0;

  virtual void enterUnionParenSelect(MySqlParser::UnionParenSelectContext *ctx) = 0;
  virtual void exitUnionParenSelect(MySqlParser::UnionParenSelectContext *ctx) = 0;

  virtual void enterUpdate_statement(MySqlParser::Update_statementContext *ctx) = 0;
  virtual void exitUpdate_statement(MySqlParser::Update_statementContext *ctx) = 0;

  virtual void enterInsert_statement_value(MySqlParser::Insert_statement_valueContext *ctx) = 0;
  virtual void exitInsert_statement_value(MySqlParser::Insert_statement_valueContext *ctx) = 0;

  virtual void enterUpdate_elem(MySqlParser::Update_elemContext *ctx) = 0;
  virtual void exitUpdate_elem(MySqlParser::Update_elemContext *ctx) = 0;

  virtual void enterCol_or_uservar(MySqlParser::Col_or_uservarContext *ctx) = 0;
  virtual void exitCol_or_uservar(MySqlParser::Col_or_uservarContext *ctx) = 0;

  virtual void enterSingle_delete_statement(MySqlParser::Single_delete_statementContext *ctx) = 0;
  virtual void exitSingle_delete_statement(MySqlParser::Single_delete_statementContext *ctx) = 0;

  virtual void enterMultiple_delete_statement(MySqlParser::Multiple_delete_statementContext *ctx) = 0;
  virtual void exitMultiple_delete_statement(MySqlParser::Multiple_delete_statementContext *ctx) = 0;

  virtual void enterHandler_open_statement(MySqlParser::Handler_open_statementContext *ctx) = 0;
  virtual void exitHandler_open_statement(MySqlParser::Handler_open_statementContext *ctx) = 0;

  virtual void enterHandler_read_index_statement(MySqlParser::Handler_read_index_statementContext *ctx) = 0;
  virtual void exitHandler_read_index_statement(MySqlParser::Handler_read_index_statementContext *ctx) = 0;

  virtual void enterHandler_read_statement(MySqlParser::Handler_read_statementContext *ctx) = 0;
  virtual void exitHandler_read_statement(MySqlParser::Handler_read_statementContext *ctx) = 0;

  virtual void enterHandler_close_statement(MySqlParser::Handler_close_statementContext *ctx) = 0;
  virtual void exitHandler_close_statement(MySqlParser::Handler_close_statementContext *ctx) = 0;

  virtual void enterSingle_update_statement(MySqlParser::Single_update_statementContext *ctx) = 0;
  virtual void exitSingle_update_statement(MySqlParser::Single_update_statementContext *ctx) = 0;

  virtual void enterMultiple_update_statement(MySqlParser::Multiple_update_statementContext *ctx) = 0;
  virtual void exitMultiple_update_statement(MySqlParser::Multiple_update_statementContext *ctx) = 0;

  virtual void enterOrder_by_clause(MySqlParser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(MySqlParser::Order_by_clauseContext *ctx) = 0;

  virtual void enterOrder_by_expression(MySqlParser::Order_by_expressionContext *ctx) = 0;
  virtual void exitOrder_by_expression(MySqlParser::Order_by_expressionContext *ctx) = 0;

  virtual void enterTable_sources(MySqlParser::Table_sourcesContext *ctx) = 0;
  virtual void exitTable_sources(MySqlParser::Table_sourcesContext *ctx) = 0;

  virtual void enterTable_source(MySqlParser::Table_sourceContext *ctx) = 0;
  virtual void exitTable_source(MySqlParser::Table_sourceContext *ctx) = 0;

  virtual void enterAtomTableItem(MySqlParser::AtomTableItemContext *ctx) = 0;
  virtual void exitAtomTableItem(MySqlParser::AtomTableItemContext *ctx) = 0;

  virtual void enterSubqueryTableItem(MySqlParser::SubqueryTableItemContext *ctx) = 0;
  virtual void exitSubqueryTableItem(MySqlParser::SubqueryTableItemContext *ctx) = 0;

  virtual void enterTableSourcesItem(MySqlParser::TableSourcesItemContext *ctx) = 0;
  virtual void exitTableSourcesItem(MySqlParser::TableSourcesItemContext *ctx) = 0;

  virtual void enterIndex_hint(MySqlParser::Index_hintContext *ctx) = 0;
  virtual void exitIndex_hint(MySqlParser::Index_hintContext *ctx) = 0;

  virtual void enterInnerJoin(MySqlParser::InnerJoinContext *ctx) = 0;
  virtual void exitInnerJoin(MySqlParser::InnerJoinContext *ctx) = 0;

  virtual void enterStraightJoin(MySqlParser::StraightJoinContext *ctx) = 0;
  virtual void exitStraightJoin(MySqlParser::StraightJoinContext *ctx) = 0;

  virtual void enterOuterJoin(MySqlParser::OuterJoinContext *ctx) = 0;
  virtual void exitOuterJoin(MySqlParser::OuterJoinContext *ctx) = 0;

  virtual void enterNaturalJoin(MySqlParser::NaturalJoinContext *ctx) = 0;
  virtual void exitNaturalJoin(MySqlParser::NaturalJoinContext *ctx) = 0;

  virtual void enterSubquery(MySqlParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(MySqlParser::SubqueryContext *ctx) = 0;

  virtual void enterQuery_expression(MySqlParser::Query_expressionContext *ctx) = 0;
  virtual void exitQuery_expression(MySqlParser::Query_expressionContext *ctx) = 0;

  virtual void enterQuery_expression_nointo(MySqlParser::Query_expression_nointoContext *ctx) = 0;
  virtual void exitQuery_expression_nointo(MySqlParser::Query_expression_nointoContext *ctx) = 0;

  virtual void enterQuery_specification(MySqlParser::Query_specificationContext *ctx) = 0;
  virtual void exitQuery_specification(MySqlParser::Query_specificationContext *ctx) = 0;

  virtual void enterQuery_specification_nointo(MySqlParser::Query_specification_nointoContext *ctx) = 0;
  virtual void exitQuery_specification_nointo(MySqlParser::Query_specification_nointoContext *ctx) = 0;

  virtual void enterUnion_parenth(MySqlParser::Union_parenthContext *ctx) = 0;
  virtual void exitUnion_parenth(MySqlParser::Union_parenthContext *ctx) = 0;

  virtual void enterUnion_statement(MySqlParser::Union_statementContext *ctx) = 0;
  virtual void exitUnion_statement(MySqlParser::Union_statementContext *ctx) = 0;

  virtual void enterSelect_spec(MySqlParser::Select_specContext *ctx) = 0;
  virtual void exitSelect_spec(MySqlParser::Select_specContext *ctx) = 0;

  virtual void enterSelect_list(MySqlParser::Select_listContext *ctx) = 0;
  virtual void exitSelect_list(MySqlParser::Select_listContext *ctx) = 0;

  virtual void enterSellistelAllCol(MySqlParser::SellistelAllColContext *ctx) = 0;
  virtual void exitSellistelAllCol(MySqlParser::SellistelAllColContext *ctx) = 0;

  virtual void enterSellistelCol(MySqlParser::SellistelColContext *ctx) = 0;
  virtual void exitSellistelCol(MySqlParser::SellistelColContext *ctx) = 0;

  virtual void enterSellistelFunc(MySqlParser::SellistelFuncContext *ctx) = 0;
  virtual void exitSellistelFunc(MySqlParser::SellistelFuncContext *ctx) = 0;

  virtual void enterSellistelExpr(MySqlParser::SellistelExprContext *ctx) = 0;
  virtual void exitSellistelExpr(MySqlParser::SellistelExprContext *ctx) = 0;

  virtual void enterSelectIntoVars(MySqlParser::SelectIntoVarsContext *ctx) = 0;
  virtual void exitSelectIntoVars(MySqlParser::SelectIntoVarsContext *ctx) = 0;

  virtual void enterSelectIntoDump(MySqlParser::SelectIntoDumpContext *ctx) = 0;
  virtual void exitSelectIntoDump(MySqlParser::SelectIntoDumpContext *ctx) = 0;

  virtual void enterSelectIntoOutfile(MySqlParser::SelectIntoOutfileContext *ctx) = 0;
  virtual void exitSelectIntoOutfile(MySqlParser::SelectIntoOutfileContext *ctx) = 0;

  virtual void enterFrom_clause(MySqlParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(MySqlParser::From_clauseContext *ctx) = 0;

  virtual void enterGroup_by_item(MySqlParser::Group_by_itemContext *ctx) = 0;
  virtual void exitGroup_by_item(MySqlParser::Group_by_itemContext *ctx) = 0;

  virtual void enterLimit_clause(MySqlParser::Limit_clauseContext *ctx) = 0;
  virtual void exitLimit_clause(MySqlParser::Limit_clauseContext *ctx) = 0;

  virtual void enterStart_transaction(MySqlParser::Start_transactionContext *ctx) = 0;
  virtual void exitStart_transaction(MySqlParser::Start_transactionContext *ctx) = 0;

  virtual void enterBegin_work(MySqlParser::Begin_workContext *ctx) = 0;
  virtual void exitBegin_work(MySqlParser::Begin_workContext *ctx) = 0;

  virtual void enterCommit_work(MySqlParser::Commit_workContext *ctx) = 0;
  virtual void exitCommit_work(MySqlParser::Commit_workContext *ctx) = 0;

  virtual void enterRollback_work(MySqlParser::Rollback_workContext *ctx) = 0;
  virtual void exitRollback_work(MySqlParser::Rollback_workContext *ctx) = 0;

  virtual void enterSavepoint_statement(MySqlParser::Savepoint_statementContext *ctx) = 0;
  virtual void exitSavepoint_statement(MySqlParser::Savepoint_statementContext *ctx) = 0;

  virtual void enterRollback_statement(MySqlParser::Rollback_statementContext *ctx) = 0;
  virtual void exitRollback_statement(MySqlParser::Rollback_statementContext *ctx) = 0;

  virtual void enterRelease_statement(MySqlParser::Release_statementContext *ctx) = 0;
  virtual void exitRelease_statement(MySqlParser::Release_statementContext *ctx) = 0;

  virtual void enterLock_tables(MySqlParser::Lock_tablesContext *ctx) = 0;
  virtual void exitLock_tables(MySqlParser::Lock_tablesContext *ctx) = 0;

  virtual void enterUnlock_tables(MySqlParser::Unlock_tablesContext *ctx) = 0;
  virtual void exitUnlock_tables(MySqlParser::Unlock_tablesContext *ctx) = 0;

  virtual void enterSet_autocommit_statement(MySqlParser::Set_autocommit_statementContext *ctx) = 0;
  virtual void exitSet_autocommit_statement(MySqlParser::Set_autocommit_statementContext *ctx) = 0;

  virtual void enterSet_transaction_statement(MySqlParser::Set_transaction_statementContext *ctx) = 0;
  virtual void exitSet_transaction_statement(MySqlParser::Set_transaction_statementContext *ctx) = 0;

  virtual void enterTransact_option(MySqlParser::Transact_optionContext *ctx) = 0;
  virtual void exitTransact_option(MySqlParser::Transact_optionContext *ctx) = 0;

  virtual void enterLock_table_element(MySqlParser::Lock_table_elementContext *ctx) = 0;
  virtual void exitLock_table_element(MySqlParser::Lock_table_elementContext *ctx) = 0;

  virtual void enterTrans_characteristic(MySqlParser::Trans_characteristicContext *ctx) = 0;
  virtual void exitTrans_characteristic(MySqlParser::Trans_characteristicContext *ctx) = 0;

  virtual void enterTransaction_level(MySqlParser::Transaction_levelContext *ctx) = 0;
  virtual void exitTransaction_level(MySqlParser::Transaction_levelContext *ctx) = 0;

  virtual void enterChange_master(MySqlParser::Change_masterContext *ctx) = 0;
  virtual void exitChange_master(MySqlParser::Change_masterContext *ctx) = 0;

  virtual void enterChange_repl_filter(MySqlParser::Change_repl_filterContext *ctx) = 0;
  virtual void exitChange_repl_filter(MySqlParser::Change_repl_filterContext *ctx) = 0;

  virtual void enterPurge_binary_logs(MySqlParser::Purge_binary_logsContext *ctx) = 0;
  virtual void exitPurge_binary_logs(MySqlParser::Purge_binary_logsContext *ctx) = 0;

  virtual void enterReset_master(MySqlParser::Reset_masterContext *ctx) = 0;
  virtual void exitReset_master(MySqlParser::Reset_masterContext *ctx) = 0;

  virtual void enterReset_slave(MySqlParser::Reset_slaveContext *ctx) = 0;
  virtual void exitReset_slave(MySqlParser::Reset_slaveContext *ctx) = 0;

  virtual void enterStart_slave(MySqlParser::Start_slaveContext *ctx) = 0;
  virtual void exitStart_slave(MySqlParser::Start_slaveContext *ctx) = 0;

  virtual void enterStop_slave(MySqlParser::Stop_slaveContext *ctx) = 0;
  virtual void exitStop_slave(MySqlParser::Stop_slaveContext *ctx) = 0;

  virtual void enterStart_group_repl(MySqlParser::Start_group_replContext *ctx) = 0;
  virtual void exitStart_group_repl(MySqlParser::Start_group_replContext *ctx) = 0;

  virtual void enterStop_group_repl(MySqlParser::Stop_group_replContext *ctx) = 0;
  virtual void exitStop_group_repl(MySqlParser::Stop_group_replContext *ctx) = 0;

  virtual void enterMasterOptString(MySqlParser::MasterOptStringContext *ctx) = 0;
  virtual void exitMasterOptString(MySqlParser::MasterOptStringContext *ctx) = 0;

  virtual void enterMasterOptDecimal(MySqlParser::MasterOptDecimalContext *ctx) = 0;
  virtual void exitMasterOptDecimal(MySqlParser::MasterOptDecimalContext *ctx) = 0;

  virtual void enterMasterOptBool(MySqlParser::MasterOptBoolContext *ctx) = 0;
  virtual void exitMasterOptBool(MySqlParser::MasterOptBoolContext *ctx) = 0;

  virtual void enterMasterOptReal(MySqlParser::MasterOptRealContext *ctx) = 0;
  virtual void exitMasterOptReal(MySqlParser::MasterOptRealContext *ctx) = 0;

  virtual void enterMasterOptIdList(MySqlParser::MasterOptIdListContext *ctx) = 0;
  virtual void exitMasterOptIdList(MySqlParser::MasterOptIdListContext *ctx) = 0;

  virtual void enterString_master_option(MySqlParser::String_master_optionContext *ctx) = 0;
  virtual void exitString_master_option(MySqlParser::String_master_optionContext *ctx) = 0;

  virtual void enterDecimal_master_option(MySqlParser::Decimal_master_optionContext *ctx) = 0;
  virtual void exitDecimal_master_option(MySqlParser::Decimal_master_optionContext *ctx) = 0;

  virtual void enterBool_master_option(MySqlParser::Bool_master_optionContext *ctx) = 0;
  virtual void exitBool_master_option(MySqlParser::Bool_master_optionContext *ctx) = 0;

  virtual void enterChannel_option(MySqlParser::Channel_optionContext *ctx) = 0;
  virtual void exitChannel_option(MySqlParser::Channel_optionContext *ctx) = 0;

  virtual void enterReplfilterDbList(MySqlParser::ReplfilterDbListContext *ctx) = 0;
  virtual void exitReplfilterDbList(MySqlParser::ReplfilterDbListContext *ctx) = 0;

  virtual void enterReplfilterTableList(MySqlParser::ReplfilterTableListContext *ctx) = 0;
  virtual void exitReplfilterTableList(MySqlParser::ReplfilterTableListContext *ctx) = 0;

  virtual void enterReplfilterStableList(MySqlParser::ReplfilterStableListContext *ctx) = 0;
  virtual void exitReplfilterStableList(MySqlParser::ReplfilterStableListContext *ctx) = 0;

  virtual void enterReplfilterTablepairList(MySqlParser::ReplfilterTablepairListContext *ctx) = 0;
  virtual void exitReplfilterTablepairList(MySqlParser::ReplfilterTablepairListContext *ctx) = 0;

  virtual void enterThread_type(MySqlParser::Thread_typeContext *ctx) = 0;
  virtual void exitThread_type(MySqlParser::Thread_typeContext *ctx) = 0;

  virtual void enterUntilGtidSset(MySqlParser::UntilGtidSsetContext *ctx) = 0;
  virtual void exitUntilGtidSset(MySqlParser::UntilGtidSsetContext *ctx) = 0;

  virtual void enterUntilMasterLog(MySqlParser::UntilMasterLogContext *ctx) = 0;
  virtual void exitUntilMasterLog(MySqlParser::UntilMasterLogContext *ctx) = 0;

  virtual void enterUntilRelayLog(MySqlParser::UntilRelayLogContext *ctx) = 0;
  virtual void exitUntilRelayLog(MySqlParser::UntilRelayLogContext *ctx) = 0;

  virtual void enterUntilSqlGaps(MySqlParser::UntilSqlGapsContext *ctx) = 0;
  virtual void exitUntilSqlGaps(MySqlParser::UntilSqlGapsContext *ctx) = 0;

  virtual void enterStart_slave_connection_option(MySqlParser::Start_slave_connection_optionContext *ctx) = 0;
  virtual void exitStart_slave_connection_option(MySqlParser::Start_slave_connection_optionContext *ctx) = 0;

  virtual void enterGtid_set(MySqlParser::Gtid_setContext *ctx) = 0;
  virtual void exitGtid_set(MySqlParser::Gtid_setContext *ctx) = 0;

  virtual void enterXa_start_transaction(MySqlParser::Xa_start_transactionContext *ctx) = 0;
  virtual void exitXa_start_transaction(MySqlParser::Xa_start_transactionContext *ctx) = 0;

  virtual void enterXa_end_transaction(MySqlParser::Xa_end_transactionContext *ctx) = 0;
  virtual void exitXa_end_transaction(MySqlParser::Xa_end_transactionContext *ctx) = 0;

  virtual void enterXa_prepare(MySqlParser::Xa_prepareContext *ctx) = 0;
  virtual void exitXa_prepare(MySqlParser::Xa_prepareContext *ctx) = 0;

  virtual void enterXa_commit_work(MySqlParser::Xa_commit_workContext *ctx) = 0;
  virtual void exitXa_commit_work(MySqlParser::Xa_commit_workContext *ctx) = 0;

  virtual void enterXa_rollback_work(MySqlParser::Xa_rollback_workContext *ctx) = 0;
  virtual void exitXa_rollback_work(MySqlParser::Xa_rollback_workContext *ctx) = 0;

  virtual void enterXa_recover_work(MySqlParser::Xa_recover_workContext *ctx) = 0;
  virtual void exitXa_recover_work(MySqlParser::Xa_recover_workContext *ctx) = 0;

  virtual void enterPrepare_statement(MySqlParser::Prepare_statementContext *ctx) = 0;
  virtual void exitPrepare_statement(MySqlParser::Prepare_statementContext *ctx) = 0;

  virtual void enterExecute_statement(MySqlParser::Execute_statementContext *ctx) = 0;
  virtual void exitExecute_statement(MySqlParser::Execute_statementContext *ctx) = 0;

  virtual void enterDeallocate_prepare(MySqlParser::Deallocate_prepareContext *ctx) = 0;
  virtual void exitDeallocate_prepare(MySqlParser::Deallocate_prepareContext *ctx) = 0;

  virtual void enterRoutine_body(MySqlParser::Routine_bodyContext *ctx) = 0;
  virtual void exitRoutine_body(MySqlParser::Routine_bodyContext *ctx) = 0;

  virtual void enterBlock_statement(MySqlParser::Block_statementContext *ctx) = 0;
  virtual void exitBlock_statement(MySqlParser::Block_statementContext *ctx) = 0;

  virtual void enterCase_statement(MySqlParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(MySqlParser::Case_statementContext *ctx) = 0;

  virtual void enterIf_statement(MySqlParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(MySqlParser::If_statementContext *ctx) = 0;

  virtual void enterIterate_statement(MySqlParser::Iterate_statementContext *ctx) = 0;
  virtual void exitIterate_statement(MySqlParser::Iterate_statementContext *ctx) = 0;

  virtual void enterLeave_statement(MySqlParser::Leave_statementContext *ctx) = 0;
  virtual void exitLeave_statement(MySqlParser::Leave_statementContext *ctx) = 0;

  virtual void enterLoop_statement(MySqlParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(MySqlParser::Loop_statementContext *ctx) = 0;

  virtual void enterRepeat_statement(MySqlParser::Repeat_statementContext *ctx) = 0;
  virtual void exitRepeat_statement(MySqlParser::Repeat_statementContext *ctx) = 0;

  virtual void enterReturn_statement(MySqlParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(MySqlParser::Return_statementContext *ctx) = 0;

  virtual void enterWhile_statement(MySqlParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(MySqlParser::While_statementContext *ctx) = 0;

  virtual void enterCursor_statement(MySqlParser::Cursor_statementContext *ctx) = 0;
  virtual void exitCursor_statement(MySqlParser::Cursor_statementContext *ctx) = 0;

  virtual void enterDeclare_variable(MySqlParser::Declare_variableContext *ctx) = 0;
  virtual void exitDeclare_variable(MySqlParser::Declare_variableContext *ctx) = 0;

  virtual void enterDeclare_condition(MySqlParser::Declare_conditionContext *ctx) = 0;
  virtual void exitDeclare_condition(MySqlParser::Declare_conditionContext *ctx) = 0;

  virtual void enterDeclare_cursor(MySqlParser::Declare_cursorContext *ctx) = 0;
  virtual void exitDeclare_cursor(MySqlParser::Declare_cursorContext *ctx) = 0;

  virtual void enterDeclare_handler(MySqlParser::Declare_handlerContext *ctx) = 0;
  virtual void exitDeclare_handler(MySqlParser::Declare_handlerContext *ctx) = 0;

  virtual void enterHandler_condition_value(MySqlParser::Handler_condition_valueContext *ctx) = 0;
  virtual void exitHandler_condition_value(MySqlParser::Handler_condition_valueContext *ctx) = 0;

  virtual void enterProcedure_sql_statement(MySqlParser::Procedure_sql_statementContext *ctx) = 0;
  virtual void exitProcedure_sql_statement(MySqlParser::Procedure_sql_statementContext *ctx) = 0;

  virtual void enterAlterUserMysql56(MySqlParser::AlterUserMysql56Context *ctx) = 0;
  virtual void exitAlterUserMysql56(MySqlParser::AlterUserMysql56Context *ctx) = 0;

  virtual void enterAlterUserMysql57(MySqlParser::AlterUserMysql57Context *ctx) = 0;
  virtual void exitAlterUserMysql57(MySqlParser::AlterUserMysql57Context *ctx) = 0;

  virtual void enterCreateUserMysql56(MySqlParser::CreateUserMysql56Context *ctx) = 0;
  virtual void exitCreateUserMysql56(MySqlParser::CreateUserMysql56Context *ctx) = 0;

  virtual void enterCreateUserMysql57(MySqlParser::CreateUserMysql57Context *ctx) = 0;
  virtual void exitCreateUserMysql57(MySqlParser::CreateUserMysql57Context *ctx) = 0;

  virtual void enterDrop_user(MySqlParser::Drop_userContext *ctx) = 0;
  virtual void exitDrop_user(MySqlParser::Drop_userContext *ctx) = 0;

  virtual void enterGrant_statement(MySqlParser::Grant_statementContext *ctx) = 0;
  virtual void exitGrant_statement(MySqlParser::Grant_statementContext *ctx) = 0;

  virtual void enterGrant_proxy(MySqlParser::Grant_proxyContext *ctx) = 0;
  virtual void exitGrant_proxy(MySqlParser::Grant_proxyContext *ctx) = 0;

  virtual void enterRename_user(MySqlParser::Rename_userContext *ctx) = 0;
  virtual void exitRename_user(MySqlParser::Rename_userContext *ctx) = 0;

  virtual void enterDetailRevoke(MySqlParser::DetailRevokeContext *ctx) = 0;
  virtual void exitDetailRevoke(MySqlParser::DetailRevokeContext *ctx) = 0;

  virtual void enterShortRevoke(MySqlParser::ShortRevokeContext *ctx) = 0;
  virtual void exitShortRevoke(MySqlParser::ShortRevokeContext *ctx) = 0;

  virtual void enterRevoke_proxy(MySqlParser::Revoke_proxyContext *ctx) = 0;
  virtual void exitRevoke_proxy(MySqlParser::Revoke_proxyContext *ctx) = 0;

  virtual void enterSet_password_statement(MySqlParser::Set_password_statementContext *ctx) = 0;
  virtual void exitSet_password_statement(MySqlParser::Set_password_statementContext *ctx) = 0;

  virtual void enterUser_password_option(MySqlParser::User_password_optionContext *ctx) = 0;
  virtual void exitUser_password_option(MySqlParser::User_password_optionContext *ctx) = 0;

  virtual void enterAuthByPassword(MySqlParser::AuthByPasswordContext *ctx) = 0;
  virtual void exitAuthByPassword(MySqlParser::AuthByPasswordContext *ctx) = 0;

  virtual void enterAuthByString(MySqlParser::AuthByStringContext *ctx) = 0;
  virtual void exitAuthByString(MySqlParser::AuthByStringContext *ctx) = 0;

  virtual void enterAuthByHash(MySqlParser::AuthByHashContext *ctx) = 0;
  virtual void exitAuthByHash(MySqlParser::AuthByHashContext *ctx) = 0;

  virtual void enterTls_option(MySqlParser::Tls_optionContext *ctx) = 0;
  virtual void exitTls_option(MySqlParser::Tls_optionContext *ctx) = 0;

  virtual void enterUser_resource_option(MySqlParser::User_resource_optionContext *ctx) = 0;
  virtual void exitUser_resource_option(MySqlParser::User_resource_optionContext *ctx) = 0;

  virtual void enterUser_lock_option(MySqlParser::User_lock_optionContext *ctx) = 0;
  virtual void exitUser_lock_option(MySqlParser::User_lock_optionContext *ctx) = 0;

  virtual void enterPrivelege_clause(MySqlParser::Privelege_clauseContext *ctx) = 0;
  virtual void exitPrivelege_clause(MySqlParser::Privelege_clauseContext *ctx) = 0;

  virtual void enterPrivilege(MySqlParser::PrivilegeContext *ctx) = 0;
  virtual void exitPrivilege(MySqlParser::PrivilegeContext *ctx) = 0;

  virtual void enterPrivilege_level(MySqlParser::Privilege_levelContext *ctx) = 0;
  virtual void exitPrivilege_level(MySqlParser::Privilege_levelContext *ctx) = 0;

  virtual void enterSet_password_option(MySqlParser::Set_password_optionContext *ctx) = 0;
  virtual void exitSet_password_option(MySqlParser::Set_password_optionContext *ctx) = 0;

  virtual void enterAnalyze_table(MySqlParser::Analyze_tableContext *ctx) = 0;
  virtual void exitAnalyze_table(MySqlParser::Analyze_tableContext *ctx) = 0;

  virtual void enterCheck_table(MySqlParser::Check_tableContext *ctx) = 0;
  virtual void exitCheck_table(MySqlParser::Check_tableContext *ctx) = 0;

  virtual void enterChecksum_table(MySqlParser::Checksum_tableContext *ctx) = 0;
  virtual void exitChecksum_table(MySqlParser::Checksum_tableContext *ctx) = 0;

  virtual void enterOptimize_table(MySqlParser::Optimize_tableContext *ctx) = 0;
  virtual void exitOptimize_table(MySqlParser::Optimize_tableContext *ctx) = 0;

  virtual void enterRepair_table(MySqlParser::Repair_tableContext *ctx) = 0;
  virtual void exitRepair_table(MySqlParser::Repair_tableContext *ctx) = 0;

  virtual void enterCheck_table_option(MySqlParser::Check_table_optionContext *ctx) = 0;
  virtual void exitCheck_table_option(MySqlParser::Check_table_optionContext *ctx) = 0;

  virtual void enterCreate_udfunction(MySqlParser::Create_udfunctionContext *ctx) = 0;
  virtual void exitCreate_udfunction(MySqlParser::Create_udfunctionContext *ctx) = 0;

  virtual void enterInstall_plugin(MySqlParser::Install_pluginContext *ctx) = 0;
  virtual void exitInstall_plugin(MySqlParser::Install_pluginContext *ctx) = 0;

  virtual void enterUninstall_plugin(MySqlParser::Uninstall_pluginContext *ctx) = 0;
  virtual void exitUninstall_plugin(MySqlParser::Uninstall_pluginContext *ctx) = 0;

  virtual void enterSetVariableAssignment(MySqlParser::SetVariableAssignmentContext *ctx) = 0;
  virtual void exitSetVariableAssignment(MySqlParser::SetVariableAssignmentContext *ctx) = 0;

  virtual void enterSetCharset(MySqlParser::SetCharsetContext *ctx) = 0;
  virtual void exitSetCharset(MySqlParser::SetCharsetContext *ctx) = 0;

  virtual void enterSetNames(MySqlParser::SetNamesContext *ctx) = 0;
  virtual void exitSetNames(MySqlParser::SetNamesContext *ctx) = 0;

  virtual void enterSetPasswordStatement(MySqlParser::SetPasswordStatementContext *ctx) = 0;
  virtual void exitSetPasswordStatement(MySqlParser::SetPasswordStatementContext *ctx) = 0;

  virtual void enterSetTransaction(MySqlParser::SetTransactionContext *ctx) = 0;
  virtual void exitSetTransaction(MySqlParser::SetTransactionContext *ctx) = 0;

  virtual void enterSetAutocommit(MySqlParser::SetAutocommitContext *ctx) = 0;
  virtual void exitSetAutocommit(MySqlParser::SetAutocommitContext *ctx) = 0;

  virtual void enterShowMasterlogs(MySqlParser::ShowMasterlogsContext *ctx) = 0;
  virtual void exitShowMasterlogs(MySqlParser::ShowMasterlogsContext *ctx) = 0;

  virtual void enterShowLogevents(MySqlParser::ShowLogeventsContext *ctx) = 0;
  virtual void exitShowLogevents(MySqlParser::ShowLogeventsContext *ctx) = 0;

  virtual void enterShowObjWithFilter(MySqlParser::ShowObjWithFilterContext *ctx) = 0;
  virtual void exitShowObjWithFilter(MySqlParser::ShowObjWithFilterContext *ctx) = 0;

  virtual void enterShowColumns(MySqlParser::ShowColumnsContext *ctx) = 0;
  virtual void exitShowColumns(MySqlParser::ShowColumnsContext *ctx) = 0;

  virtual void enterShowCreateDb(MySqlParser::ShowCreateDbContext *ctx) = 0;
  virtual void exitShowCreateDb(MySqlParser::ShowCreateDbContext *ctx) = 0;

  virtual void enterShowCreateFullidobj(MySqlParser::ShowCreateFullidobjContext *ctx) = 0;
  virtual void exitShowCreateFullidobj(MySqlParser::ShowCreateFullidobjContext *ctx) = 0;

  virtual void enterShowCreateUser(MySqlParser::ShowCreateUserContext *ctx) = 0;
  virtual void exitShowCreateUser(MySqlParser::ShowCreateUserContext *ctx) = 0;

  virtual void enterShowEngine(MySqlParser::ShowEngineContext *ctx) = 0;
  virtual void exitShowEngine(MySqlParser::ShowEngineContext *ctx) = 0;

  virtual void enterShowGlobalinfo(MySqlParser::ShowGlobalinfoContext *ctx) = 0;
  virtual void exitShowGlobalinfo(MySqlParser::ShowGlobalinfoContext *ctx) = 0;

  virtual void enterShowErrWarn(MySqlParser::ShowErrWarnContext *ctx) = 0;
  virtual void exitShowErrWarn(MySqlParser::ShowErrWarnContext *ctx) = 0;

  virtual void enterShowCountErrWarn(MySqlParser::ShowCountErrWarnContext *ctx) = 0;
  virtual void exitShowCountErrWarn(MySqlParser::ShowCountErrWarnContext *ctx) = 0;

  virtual void enterShowFromschemaFilter(MySqlParser::ShowFromschemaFilterContext *ctx) = 0;
  virtual void exitShowFromschemaFilter(MySqlParser::ShowFromschemaFilterContext *ctx) = 0;

  virtual void enterShowRoutinecode(MySqlParser::ShowRoutinecodeContext *ctx) = 0;
  virtual void exitShowRoutinecode(MySqlParser::ShowRoutinecodeContext *ctx) = 0;

  virtual void enterShowGrants(MySqlParser::ShowGrantsContext *ctx) = 0;
  virtual void exitShowGrants(MySqlParser::ShowGrantsContext *ctx) = 0;

  virtual void enterShowIndexes(MySqlParser::ShowIndexesContext *ctx) = 0;
  virtual void exitShowIndexes(MySqlParser::ShowIndexesContext *ctx) = 0;

  virtual void enterShowOpentables(MySqlParser::ShowOpentablesContext *ctx) = 0;
  virtual void exitShowOpentables(MySqlParser::ShowOpentablesContext *ctx) = 0;

  virtual void enterShowProfile(MySqlParser::ShowProfileContext *ctx) = 0;
  virtual void exitShowProfile(MySqlParser::ShowProfileContext *ctx) = 0;

  virtual void enterShowSlavestatus(MySqlParser::ShowSlavestatusContext *ctx) = 0;
  virtual void exitShowSlavestatus(MySqlParser::ShowSlavestatusContext *ctx) = 0;

  virtual void enterVariable_clause(MySqlParser::Variable_clauseContext *ctx) = 0;
  virtual void exitVariable_clause(MySqlParser::Variable_clauseContext *ctx) = 0;

  virtual void enterShow_filter(MySqlParser::Show_filterContext *ctx) = 0;
  virtual void exitShow_filter(MySqlParser::Show_filterContext *ctx) = 0;

  virtual void enterShow_profile_type(MySqlParser::Show_profile_typeContext *ctx) = 0;
  virtual void exitShow_profile_type(MySqlParser::Show_profile_typeContext *ctx) = 0;

  virtual void enterBinlog_statement(MySqlParser::Binlog_statementContext *ctx) = 0;
  virtual void exitBinlog_statement(MySqlParser::Binlog_statementContext *ctx) = 0;

  virtual void enterCache_index_statement(MySqlParser::Cache_index_statementContext *ctx) = 0;
  virtual void exitCache_index_statement(MySqlParser::Cache_index_statementContext *ctx) = 0;

  virtual void enterFlush_statement(MySqlParser::Flush_statementContext *ctx) = 0;
  virtual void exitFlush_statement(MySqlParser::Flush_statementContext *ctx) = 0;

  virtual void enterKill_statement(MySqlParser::Kill_statementContext *ctx) = 0;
  virtual void exitKill_statement(MySqlParser::Kill_statementContext *ctx) = 0;

  virtual void enterLoad_index_into_cache(MySqlParser::Load_index_into_cacheContext *ctx) = 0;
  virtual void exitLoad_index_into_cache(MySqlParser::Load_index_into_cacheContext *ctx) = 0;

  virtual void enterReset_statement(MySqlParser::Reset_statementContext *ctx) = 0;
  virtual void exitReset_statement(MySqlParser::Reset_statementContext *ctx) = 0;

  virtual void enterShutdown_statement(MySqlParser::Shutdown_statementContext *ctx) = 0;
  virtual void exitShutdown_statement(MySqlParser::Shutdown_statementContext *ctx) = 0;

  virtual void enterTbl_index_list(MySqlParser::Tbl_index_listContext *ctx) = 0;
  virtual void exitTbl_index_list(MySqlParser::Tbl_index_listContext *ctx) = 0;

  virtual void enterFlush_option(MySqlParser::Flush_optionContext *ctx) = 0;
  virtual void exitFlush_option(MySqlParser::Flush_optionContext *ctx) = 0;

  virtual void enterLoad_tbl_index_list(MySqlParser::Load_tbl_index_listContext *ctx) = 0;
  virtual void exitLoad_tbl_index_list(MySqlParser::Load_tbl_index_listContext *ctx) = 0;

  virtual void enterSimple_describe_statement(MySqlParser::Simple_describe_statementContext *ctx) = 0;
  virtual void exitSimple_describe_statement(MySqlParser::Simple_describe_statementContext *ctx) = 0;

  virtual void enterFull_describe_statement(MySqlParser::Full_describe_statementContext *ctx) = 0;
  virtual void exitFull_describe_statement(MySqlParser::Full_describe_statementContext *ctx) = 0;

  virtual void enterHelp_statement(MySqlParser::Help_statementContext *ctx) = 0;
  virtual void exitHelp_statement(MySqlParser::Help_statementContext *ctx) = 0;

  virtual void enterUse_statement(MySqlParser::Use_statementContext *ctx) = 0;
  virtual void exitUse_statement(MySqlParser::Use_statementContext *ctx) = 0;

  virtual void enterDescstmtDescObj(MySqlParser::DescstmtDescObjContext *ctx) = 0;
  virtual void exitDescstmtDescObj(MySqlParser::DescstmtDescObjContext *ctx) = 0;

  virtual void enterConnectionDescObj(MySqlParser::ConnectionDescObjContext *ctx) = 0;
  virtual void exitConnectionDescObj(MySqlParser::ConnectionDescObjContext *ctx) = 0;

  virtual void enterTable_name(MySqlParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(MySqlParser::Table_nameContext *ctx) = 0;

  virtual void enterFull_id(MySqlParser::Full_idContext *ctx) = 0;
  virtual void exitFull_id(MySqlParser::Full_idContext *ctx) = 0;

  virtual void enterFull_column_name(MySqlParser::Full_column_nameContext *ctx) = 0;
  virtual void exitFull_column_name(MySqlParser::Full_column_nameContext *ctx) = 0;

  virtual void enterIndex_col_name(MySqlParser::Index_col_nameContext *ctx) = 0;
  virtual void exitIndex_col_name(MySqlParser::Index_col_nameContext *ctx) = 0;

  virtual void enterUser_name(MySqlParser::User_nameContext *ctx) = 0;
  virtual void exitUser_name(MySqlParser::User_nameContext *ctx) = 0;

  virtual void enterMysql_variable(MySqlParser::Mysql_variableContext *ctx) = 0;
  virtual void exitMysql_variable(MySqlParser::Mysql_variableContext *ctx) = 0;

  virtual void enterCharset_name(MySqlParser::Charset_nameContext *ctx) = 0;
  virtual void exitCharset_name(MySqlParser::Charset_nameContext *ctx) = 0;

  virtual void enterCollation_name(MySqlParser::Collation_nameContext *ctx) = 0;
  virtual void exitCollation_name(MySqlParser::Collation_nameContext *ctx) = 0;

  virtual void enterEngine_name(MySqlParser::Engine_nameContext *ctx) = 0;
  virtual void exitEngine_name(MySqlParser::Engine_nameContext *ctx) = 0;

  virtual void enterUuid_set(MySqlParser::Uuid_setContext *ctx) = 0;
  virtual void exitUuid_set(MySqlParser::Uuid_setContext *ctx) = 0;

  virtual void enterXid(MySqlParser::XidContext *ctx) = 0;
  virtual void exitXid(MySqlParser::XidContext *ctx) = 0;

  virtual void enterXid_string_id(MySqlParser::Xid_string_idContext *ctx) = 0;
  virtual void exitXid_string_id(MySqlParser::Xid_string_idContext *ctx) = 0;

  virtual void enterAuth_plugin(MySqlParser::Auth_pluginContext *ctx) = 0;
  virtual void exitAuth_plugin(MySqlParser::Auth_pluginContext *ctx) = 0;

  virtual void enterId_(MySqlParser::Id_Context *ctx) = 0;
  virtual void exitId_(MySqlParser::Id_Context *ctx) = 0;

  virtual void enterSimple_id(MySqlParser::Simple_idContext *ctx) = 0;
  virtual void exitSimple_id(MySqlParser::Simple_idContext *ctx) = 0;

  virtual void enterDot_ext_id(MySqlParser::Dot_ext_idContext *ctx) = 0;
  virtual void exitDot_ext_id(MySqlParser::Dot_ext_idContext *ctx) = 0;

  virtual void enterDecimal_literal(MySqlParser::Decimal_literalContext *ctx) = 0;
  virtual void exitDecimal_literal(MySqlParser::Decimal_literalContext *ctx) = 0;

  virtual void enterFilesize_literal(MySqlParser::Filesize_literalContext *ctx) = 0;
  virtual void exitFilesize_literal(MySqlParser::Filesize_literalContext *ctx) = 0;

  virtual void enterString_literal(MySqlParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(MySqlParser::String_literalContext *ctx) = 0;

  virtual void enterBoolean_literal(MySqlParser::Boolean_literalContext *ctx) = 0;
  virtual void exitBoolean_literal(MySqlParser::Boolean_literalContext *ctx) = 0;

  virtual void enterHexadecimal_literal(MySqlParser::Hexadecimal_literalContext *ctx) = 0;
  virtual void exitHexadecimal_literal(MySqlParser::Hexadecimal_literalContext *ctx) = 0;

  virtual void enterNull_notnull(MySqlParser::Null_notnullContext *ctx) = 0;
  virtual void exitNull_notnull(MySqlParser::Null_notnullContext *ctx) = 0;

  virtual void enterConstant(MySqlParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(MySqlParser::ConstantContext *ctx) = 0;

  virtual void enterCharDatatype(MySqlParser::CharDatatypeContext *ctx) = 0;
  virtual void exitCharDatatype(MySqlParser::CharDatatypeContext *ctx) = 0;

  virtual void enterDimensionDatatype(MySqlParser::DimensionDatatypeContext *ctx) = 0;
  virtual void exitDimensionDatatype(MySqlParser::DimensionDatatypeContext *ctx) = 0;

  virtual void enterSimpleDatatype(MySqlParser::SimpleDatatypeContext *ctx) = 0;
  virtual void exitSimpleDatatype(MySqlParser::SimpleDatatypeContext *ctx) = 0;

  virtual void enterCollectCharDatatype(MySqlParser::CollectCharDatatypeContext *ctx) = 0;
  virtual void exitCollectCharDatatype(MySqlParser::CollectCharDatatypeContext *ctx) = 0;

  virtual void enterSpatialDatatype(MySqlParser::SpatialDatatypeContext *ctx) = 0;
  virtual void exitSpatialDatatype(MySqlParser::SpatialDatatypeContext *ctx) = 0;

  virtual void enterData_type_to_convert(MySqlParser::Data_type_to_convertContext *ctx) = 0;
  virtual void exitData_type_to_convert(MySqlParser::Data_type_to_convertContext *ctx) = 0;

  virtual void enterSpatial_data_type(MySqlParser::Spatial_data_typeContext *ctx) = 0;
  virtual void exitSpatial_data_type(MySqlParser::Spatial_data_typeContext *ctx) = 0;

  virtual void enterLength_one_dimension(MySqlParser::Length_one_dimensionContext *ctx) = 0;
  virtual void exitLength_one_dimension(MySqlParser::Length_one_dimensionContext *ctx) = 0;

  virtual void enterLength_two_dimension(MySqlParser::Length_two_dimensionContext *ctx) = 0;
  virtual void exitLength_two_dimension(MySqlParser::Length_two_dimensionContext *ctx) = 0;

  virtual void enterLength_two_optional_dimension(MySqlParser::Length_two_optional_dimensionContext *ctx) = 0;
  virtual void exitLength_two_optional_dimension(MySqlParser::Length_two_optional_dimensionContext *ctx) = 0;

  virtual void enterId_list(MySqlParser::Id_listContext *ctx) = 0;
  virtual void exitId_list(MySqlParser::Id_listContext *ctx) = 0;

  virtual void enterTable_list(MySqlParser::Table_listContext *ctx) = 0;
  virtual void exitTable_list(MySqlParser::Table_listContext *ctx) = 0;

  virtual void enterTable_pair_list(MySqlParser::Table_pair_listContext *ctx) = 0;
  virtual void exitTable_pair_list(MySqlParser::Table_pair_listContext *ctx) = 0;

  virtual void enterIndex_colname_list(MySqlParser::Index_colname_listContext *ctx) = 0;
  virtual void exitIndex_colname_list(MySqlParser::Index_colname_listContext *ctx) = 0;

  virtual void enterExpression_list(MySqlParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(MySqlParser::Expression_listContext *ctx) = 0;

  virtual void enterConstant_list(MySqlParser::Constant_listContext *ctx) = 0;
  virtual void exitConstant_list(MySqlParser::Constant_listContext *ctx) = 0;

  virtual void enterSimple_string_list(MySqlParser::Simple_string_listContext *ctx) = 0;
  virtual void exitSimple_string_list(MySqlParser::Simple_string_listContext *ctx) = 0;

  virtual void enterUser_var_list(MySqlParser::User_var_listContext *ctx) = 0;
  virtual void exitUser_var_list(MySqlParser::User_var_listContext *ctx) = 0;

  virtual void enterDefault_value(MySqlParser::Default_valueContext *ctx) = 0;
  virtual void exitDefault_value(MySqlParser::Default_valueContext *ctx) = 0;

  virtual void enterIf_exists(MySqlParser::If_existsContext *ctx) = 0;
  virtual void exitIf_exists(MySqlParser::If_existsContext *ctx) = 0;

  virtual void enterIf_not_exists(MySqlParser::If_not_existsContext *ctx) = 0;
  virtual void exitIf_not_exists(MySqlParser::If_not_existsContext *ctx) = 0;

  virtual void enterSpecificFunctionCall(MySqlParser::SpecificFunctionCallContext *ctx) = 0;
  virtual void exitSpecificFunctionCall(MySqlParser::SpecificFunctionCallContext *ctx) = 0;

  virtual void enterAggregateFunctionCall(MySqlParser::AggregateFunctionCallContext *ctx) = 0;
  virtual void exitAggregateFunctionCall(MySqlParser::AggregateFunctionCallContext *ctx) = 0;

  virtual void enterScalarFunctionCall(MySqlParser::ScalarFunctionCallContext *ctx) = 0;
  virtual void exitScalarFunctionCall(MySqlParser::ScalarFunctionCallContext *ctx) = 0;

  virtual void enterUdfFunctionCall(MySqlParser::UdfFunctionCallContext *ctx) = 0;
  virtual void exitUdfFunctionCall(MySqlParser::UdfFunctionCallContext *ctx) = 0;

  virtual void enterSimpleSpecificFCall(MySqlParser::SimpleSpecificFCallContext *ctx) = 0;
  virtual void exitSimpleSpecificFCall(MySqlParser::SimpleSpecificFCallContext *ctx) = 0;

  virtual void enterConvertDataTypeFCall(MySqlParser::ConvertDataTypeFCallContext *ctx) = 0;
  virtual void exitConvertDataTypeFCall(MySqlParser::ConvertDataTypeFCallContext *ctx) = 0;

  virtual void enterValuesFCall(MySqlParser::ValuesFCallContext *ctx) = 0;
  virtual void exitValuesFCall(MySqlParser::ValuesFCallContext *ctx) = 0;

  virtual void enterCaseFCall(MySqlParser::CaseFCallContext *ctx) = 0;
  virtual void exitCaseFCall(MySqlParser::CaseFCallContext *ctx) = 0;

  virtual void enterCharFCall(MySqlParser::CharFCallContext *ctx) = 0;
  virtual void exitCharFCall(MySqlParser::CharFCallContext *ctx) = 0;

  virtual void enterPositionFCall(MySqlParser::PositionFCallContext *ctx) = 0;
  virtual void exitPositionFCall(MySqlParser::PositionFCallContext *ctx) = 0;

  virtual void enterSubstrFCall(MySqlParser::SubstrFCallContext *ctx) = 0;
  virtual void exitSubstrFCall(MySqlParser::SubstrFCallContext *ctx) = 0;

  virtual void enterTrimFCall(MySqlParser::TrimFCallContext *ctx) = 0;
  virtual void exitTrimFCall(MySqlParser::TrimFCallContext *ctx) = 0;

  virtual void enterWeightFCall(MySqlParser::WeightFCallContext *ctx) = 0;
  virtual void exitWeightFCall(MySqlParser::WeightFCallContext *ctx) = 0;

  virtual void enterExtractFCall(MySqlParser::ExtractFCallContext *ctx) = 0;
  virtual void exitExtractFCall(MySqlParser::ExtractFCallContext *ctx) = 0;

  virtual void enterGetFormatFCall(MySqlParser::GetFormatFCallContext *ctx) = 0;
  virtual void exitGetFormatFCall(MySqlParser::GetFormatFCallContext *ctx) = 0;

  virtual void enterLevelWeightFList(MySqlParser::LevelWeightFListContext *ctx) = 0;
  virtual void exitLevelWeightFList(MySqlParser::LevelWeightFListContext *ctx) = 0;

  virtual void enterLevelWeightFRange(MySqlParser::LevelWeightFRangeContext *ctx) = 0;
  virtual void exitLevelWeightFRange(MySqlParser::LevelWeightFRangeContext *ctx) = 0;

  virtual void enterAggregate_windowed_function(MySqlParser::Aggregate_windowed_functionContext *ctx) = 0;
  virtual void exitAggregate_windowed_function(MySqlParser::Aggregate_windowed_functionContext *ctx) = 0;

  virtual void enterScalar_function_name(MySqlParser::Scalar_function_nameContext *ctx) = 0;
  virtual void exitScalar_function_name(MySqlParser::Scalar_function_nameContext *ctx) = 0;

  virtual void enterFunction_args(MySqlParser::Function_argsContext *ctx) = 0;
  virtual void exitFunction_args(MySqlParser::Function_argsContext *ctx) = 0;

  virtual void enterFunction_arg(MySqlParser::Function_argContext *ctx) = 0;
  virtual void exitFunction_arg(MySqlParser::Function_argContext *ctx) = 0;

  virtual void enterIsExpression(MySqlParser::IsExpressionContext *ctx) = 0;
  virtual void exitIsExpression(MySqlParser::IsExpressionContext *ctx) = 0;

  virtual void enterNotExpression(MySqlParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(MySqlParser::NotExpressionContext *ctx) = 0;

  virtual void enterLogicalExpression(MySqlParser::LogicalExpressionContext *ctx) = 0;
  virtual void exitLogicalExpression(MySqlParser::LogicalExpressionContext *ctx) = 0;

  virtual void enterPredicateExpression(MySqlParser::PredicateExpressionContext *ctx) = 0;
  virtual void exitPredicateExpression(MySqlParser::PredicateExpressionContext *ctx) = 0;

  virtual void enterSoundsLikePredicate(MySqlParser::SoundsLikePredicateContext *ctx) = 0;
  virtual void exitSoundsLikePredicate(MySqlParser::SoundsLikePredicateContext *ctx) = 0;

  virtual void enterExpressionAtomPredicate(MySqlParser::ExpressionAtomPredicateContext *ctx) = 0;
  virtual void exitExpressionAtomPredicate(MySqlParser::ExpressionAtomPredicateContext *ctx) = 0;

  virtual void enterInPredicate(MySqlParser::InPredicateContext *ctx) = 0;
  virtual void exitInPredicate(MySqlParser::InPredicateContext *ctx) = 0;

  virtual void enterSubqueryComparasionPredicate(MySqlParser::SubqueryComparasionPredicateContext *ctx) = 0;
  virtual void exitSubqueryComparasionPredicate(MySqlParser::SubqueryComparasionPredicateContext *ctx) = 0;

  virtual void enterBetweenPredicate(MySqlParser::BetweenPredicateContext *ctx) = 0;
  virtual void exitBetweenPredicate(MySqlParser::BetweenPredicateContext *ctx) = 0;

  virtual void enterBinaryComparasionPredicate(MySqlParser::BinaryComparasionPredicateContext *ctx) = 0;
  virtual void exitBinaryComparasionPredicate(MySqlParser::BinaryComparasionPredicateContext *ctx) = 0;

  virtual void enterIsNullPredicate(MySqlParser::IsNullPredicateContext *ctx) = 0;
  virtual void exitIsNullPredicate(MySqlParser::IsNullPredicateContext *ctx) = 0;

  virtual void enterLikePredicate(MySqlParser::LikePredicateContext *ctx) = 0;
  virtual void exitLikePredicate(MySqlParser::LikePredicateContext *ctx) = 0;

  virtual void enterRegexpPredicate(MySqlParser::RegexpPredicateContext *ctx) = 0;
  virtual void exitRegexpPredicate(MySqlParser::RegexpPredicateContext *ctx) = 0;

  virtual void enterUnaryExpressionAtom(MySqlParser::UnaryExpressionAtomContext *ctx) = 0;
  virtual void exitUnaryExpressionAtom(MySqlParser::UnaryExpressionAtomContext *ctx) = 0;

  virtual void enterExistsExpessionAtom(MySqlParser::ExistsExpessionAtomContext *ctx) = 0;
  virtual void exitExistsExpessionAtom(MySqlParser::ExistsExpessionAtomContext *ctx) = 0;

  virtual void enterConstantExpressionAtom(MySqlParser::ConstantExpressionAtomContext *ctx) = 0;
  virtual void exitConstantExpressionAtom(MySqlParser::ConstantExpressionAtomContext *ctx) = 0;

  virtual void enterFunctionCallExpressionAtom(MySqlParser::FunctionCallExpressionAtomContext *ctx) = 0;
  virtual void exitFunctionCallExpressionAtom(MySqlParser::FunctionCallExpressionAtomContext *ctx) = 0;

  virtual void enterMysqlVariableExpressionAtom(MySqlParser::MysqlVariableExpressionAtomContext *ctx) = 0;
  virtual void exitMysqlVariableExpressionAtom(MySqlParser::MysqlVariableExpressionAtomContext *ctx) = 0;

  virtual void enterBinaryExpressionAtom(MySqlParser::BinaryExpressionAtomContext *ctx) = 0;
  virtual void exitBinaryExpressionAtom(MySqlParser::BinaryExpressionAtomContext *ctx) = 0;

  virtual void enterFullColumnNameExpressionAtom(MySqlParser::FullColumnNameExpressionAtomContext *ctx) = 0;
  virtual void exitFullColumnNameExpressionAtom(MySqlParser::FullColumnNameExpressionAtomContext *ctx) = 0;

  virtual void enterDefaultExpressionAtom(MySqlParser::DefaultExpressionAtomContext *ctx) = 0;
  virtual void exitDefaultExpressionAtom(MySqlParser::DefaultExpressionAtomContext *ctx) = 0;

  virtual void enterBitExpressionAtom(MySqlParser::BitExpressionAtomContext *ctx) = 0;
  virtual void exitBitExpressionAtom(MySqlParser::BitExpressionAtomContext *ctx) = 0;

  virtual void enterNestedExpressionAtom(MySqlParser::NestedExpressionAtomContext *ctx) = 0;
  virtual void exitNestedExpressionAtom(MySqlParser::NestedExpressionAtomContext *ctx) = 0;

  virtual void enterMathExpressionAtom(MySqlParser::MathExpressionAtomContext *ctx) = 0;
  virtual void exitMathExpressionAtom(MySqlParser::MathExpressionAtomContext *ctx) = 0;

  virtual void enterIntervalExpressionAtom(MySqlParser::IntervalExpressionAtomContext *ctx) = 0;
  virtual void exitIntervalExpressionAtom(MySqlParser::IntervalExpressionAtomContext *ctx) = 0;

  virtual void enterUnary_operator(MySqlParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(MySqlParser::Unary_operatorContext *ctx) = 0;

  virtual void enterComparison_operator(MySqlParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(MySqlParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterLogical_operator(MySqlParser::Logical_operatorContext *ctx) = 0;
  virtual void exitLogical_operator(MySqlParser::Logical_operatorContext *ctx) = 0;

  virtual void enterBit_operator(MySqlParser::Bit_operatorContext *ctx) = 0;
  virtual void exitBit_operator(MySqlParser::Bit_operatorContext *ctx) = 0;

  virtual void enterMath_operator(MySqlParser::Math_operatorContext *ctx) = 0;
  virtual void exitMath_operator(MySqlParser::Math_operatorContext *ctx) = 0;

  virtual void enterCharset_name_base(MySqlParser::Charset_name_baseContext *ctx) = 0;
  virtual void exitCharset_name_base(MySqlParser::Charset_name_baseContext *ctx) = 0;

  virtual void enterTransaction_level_base(MySqlParser::Transaction_level_baseContext *ctx) = 0;
  virtual void exitTransaction_level_base(MySqlParser::Transaction_level_baseContext *ctx) = 0;

  virtual void enterPrivileges_base(MySqlParser::Privileges_baseContext *ctx) = 0;
  virtual void exitPrivileges_base(MySqlParser::Privileges_baseContext *ctx) = 0;

  virtual void enterInterval_type_base(MySqlParser::Interval_type_baseContext *ctx) = 0;
  virtual void exitInterval_type_base(MySqlParser::Interval_type_baseContext *ctx) = 0;

  virtual void enterData_type_base(MySqlParser::Data_type_baseContext *ctx) = 0;
  virtual void exitData_type_base(MySqlParser::Data_type_baseContext *ctx) = 0;

  virtual void enterKeywords_can_be_id(MySqlParser::Keywords_can_be_idContext *ctx) = 0;
  virtual void exitKeywords_can_be_id(MySqlParser::Keywords_can_be_idContext *ctx) = 0;

  virtual void enterFunction_name_base(MySqlParser::Function_name_baseContext *ctx) = 0;
  virtual void exitFunction_name_base(MySqlParser::Function_name_baseContext *ctx) = 0;


};

}  // namespace parser
